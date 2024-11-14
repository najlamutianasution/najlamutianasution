#include <iostream>
using namespace std;

// Fungsi untuk menghitung pajak
float hitungPajak(float gaji) {
    return gaji * 0.05;
}

int main() {
    string nama, jabatan;
    char lagi;
    int golongan, kodeJabatan;
    float gaji, tunjangan, pinjaman, pajak, totalGajiKotor, totalGajiBersih;

    do {
        // Input data
        cout << "Masukkan Nama Pegawai: ";
        cin >> nama;
        cout << "Masukkan Golongan (1-6): ";
        cin >> golongan;
        cout << "Masukkan Kode Jabatan (1.Dir, 2.Sek, 3.Wak, 4.Str): ";
        cin >> kodeJabatan;
        cout << "Masukkan Pinjaman: ";
        cin >> pinjaman;

        // Menentukan gaji berdasarkan golongan
        switch (golongan) {
            case 1: gaji = 500000; break;
            case 2: gaji = 750000; break;
            case 3: gaji = 1000000; break;
            case 4: gaji = 1250000; break;
            case 5: gaji = 1750000; break;
            case 6: gaji = 2500000; break;
            default: cout << "Golongan tidak valid!\n"; return 0;
        }

        // Menentukan tunjangan dan nama jabatan berdasarkan kode jabatan
        switch (kodeJabatan) {
            case 1: jabatan = "Direktur"; tunjangan = 500000; break;
            case 2: jabatan = "Sekretaris"; tunjangan = 250000; break;
            case 3: jabatan = "Wakil Direktur"; tunjangan = 375000; break;
            case 4: jabatan = "Staf Administrasi"; tunjangan = 200000; break;
            default: cout << "Kode jabatan tidak valid!\n"; return 0;
        }

        // Menghitung pajak
        pajak = hitungPajak(gaji);

        // Menghitung total gaji kotor dan gaji bersih
        totalGajiKotor = gaji + tunjangan;
        totalGajiBersih = totalGajiKotor - pinjaman - pajak;

        // Menampilkan hasil
        cout << "\n--- Gaji Pegawai PT. TELKOM ---\n";
        cout << "Nama Pegawai      : " << nama << endl;
        cout << "Golongan          : " << golongan << endl;
        cout << "Kode Jabatan      : " << kodeJabatan << endl;
        cout << "Jabatan           : " << jabatan << endl;
        cout << "Gaji              : Rp " << gaji << endl;
        cout << "Tunjangan         : Rp " << tunjangan << endl;
        cout << "Pinjaman          : Rp " << pinjaman << endl;
        cout << "Pajak             : Rp " << pajak << endl;
        cout << "Total Gaji Kotor  : Rp " << totalGajiKotor << endl;
        cout << "Total Gaji Bersih : Rp " << totalGajiBersih << endl;

        // Tanya user apakah ingin menghitung lagi
        cout << "\nApakah ingin menghitung gaji lagi? (Y/T): ";
        cin >> lagi;

    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}