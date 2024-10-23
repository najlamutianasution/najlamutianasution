

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int n = 2;
    string nama[n] = {"NAJLA", "SALWA"};
    string jabatan[n] = {"Direktur", "Wakil Direktur"};
    int gaji[n] = {600000, 130000};
    int pinjaman[n] = {8000, 50000};
    int gajiKotor[n] = {910000, 252000};
    int gajiBersih[n];

    cout << "=========================================\n";
    cout << "        Laporan PT. TELKOM\n";
    cout << "=========================================\n";
    cout << left << setw(14) << "Nama"
         << setw(14) << "Jabatan"
         << setw(14) << "Gaji"
         << setw(14) << "Pinjaman"
         << setw(14) << "Gaji Kotor"
         << setw(14) << "Gaji Bersih" << endl;
    cout << "-----------------------------------------\n";

    int totalGajiKeseluruhan = 0;

    for (int i = 0; i < n; i++) {
        gajiBersih[i] = gajiKotor[i] - pinjaman[i];
        cout << left << setw(14) << nama[i]
             << setw(14) << jabatan[i]
             << setw(14) << gaji[i]
             << setw(14) << pinjaman[i]
             << setw(14) << gajiKotor[i]
             << setw(14) << gajiBersih[i] << endl;
        totalGajiKeseluruhan += gajiBersih[i];
    }

    cout << "-----------------------------------------\n";
    cout << "Total Gaji Keseluruhan: " << totalGajiKeseluruhan << endl;

    return 0;
}





