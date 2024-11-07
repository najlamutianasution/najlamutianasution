

#include <iostream>
#include <string>
using namespace std;

// Struct untuk menyimpan data mahasiswa
struct Mahasiswa {
    int npm;
    string nama;
    float nilaiMid;
    float nilaiSemester;
    float nilaiAkhir;
    char nilaiHuruf;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float mid, float semester) {
    return (0.4 * mid) + (0.6 * semester);
}

// Fungsi untuk menentukan nilai huruf
char tentukanNilaiHuruf(float nilaiAkhir) {
    if (nilaiAkhir >= 80) return 'A';
    else if (nilaiAkhir >= 70) return 'B';
    else if (nilaiAkhir >= 55) return 'C';
    else if (nilaiAkhir >= 40) return 'D';
    else return 'E';
}

int main() {
    Mahasiswa mahasiswa[100]; // Array untuk menyimpan data maksimum 100 mahasiswa
    int jumlahData;

    cout << "Masukkan jumlah mahasiswa (maksimum 100): ";
    cin >> jumlahData;

    if (jumlahData > 100) {
        cout << "Jumlah data melebihi batas maksimum 100.\n";
        return 1;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlahData; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << ":\n";
        cout << "NPM: ";
        cin >> mahasiswa[i].npm;
        cin.ignore(); // Mengabaikan newline setelah input angka
        cout << "Nama: ";
        getline(cin, mahasiswa[i].nama);
        cout << "Nilai Mid: ";
        cin >> mahasiswa[i].nilaiMid;
        cout << "Nilai Semester: ";
        cin >> mahasiswa[i].nilaiSemester;

        // Hitung nilai akhir dan tentukan nilai huruf
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].nilaiMid, mahasiswa[i].nilaiSemester);
        mahasiswa[i].nilaiHuruf = tentukanNilaiHuruf(mahasiswa[i].nilaiAkhir);
    }

    // Tampilkan hasil
    cout << "\nHasil Nilai Mahasiswa:\n";
    cout << "NPM\tNama\t\tNilai Mid\tNilai Semester\tNilai Akhir\tNilai Huruf\n";
    for (int i = 0; i < jumlahData; i++) {
        cout << mahasiswa[i].npm << "\t" << mahasiswa[i].nama << "\t\t" 
             << mahasiswa[i].nilaiMid << "\t\t" << mahasiswa[i].nilaiSemester << "\t\t" 
             << mahasiswa[i].nilaiAkhir << "\t\t" << mahasiswa[i].nilaiHuruf << endl;
    }

    return 0;
}



