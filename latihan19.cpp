#include<iostream>
#include<iomanip>

using namespace std;

int main() {
        cout << setprecision(30);
        const int maxkaryawan = 50;
        string namakaryawan[maxkaryawan];
        int jamkerja[maxkaryawan];
        float gajiperjam[maxkaryawan];
        float gajitotal[maxkaryawan];
        int jumlahkaryawan = 0;
        char lagi;


        do {
                cout << "Masukkan nama karyawan ke-"<< jumlahkaryawan + 1 << ": ";
                cin >> namakaryawan[jumlahkaryawan];
                cout<< "Masukkan jumlah jam kerja "<< namakaryawan[jumlahkaryawan] << ": ";
                cin >> jamkerja[jumlahkaryawan];
                cout << "Masukkan gaji per jam untuk "<<namakaryawan[jumlahkaryawan] << ": ";
                cin >> gajiperjam[jumlahkaryawan];

                gajitotal[jumlahkaryawan] = jamkerja[jumlahkaryawan] * gajiperjam[jumlahkaryawan];
                jumlahkaryawan++;

                cout <<"Apakah Anda ingin input data lagi? (Y/T): ";
                cin >> lagi;
        }while (lagi == 'y' || lagi == 'Y');

        cout <<
"\n=========================================================================\n";
    cout << setw(15) << left << "Nama"
         << setw(15) << "Jam Kerja"
         << setw(15) << "Gaji Per Jam"
         << setw(15) << "Gaji Total" <<endl;
    cout <<
"============================================================================\n";

    for (int i = 0; i < jumlahkaryawan; i++) {
            cout << setw(15) << left << namakaryawan[i]
                 << setw(15) << jamkerja[i]
                 << setw(15) << gajiperjam[i]
                 << setw(15) << gajitotal[i] <<endl;

        }
        cout <<
"============================================================================\n";
return 0;

}