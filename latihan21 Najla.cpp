

#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    string npm;
    string major;
    int paymentCount;
    int tuitionFee;
    int totalPaid;
    int remainingTuition;
};

int main() {
    // Data of students
    Student students[4] = {
        {"NAJLA", "39029", "Teknik Informatika", 3, 4700000, 3500000, 1100000},
        {"SISKAEE", "24088619", "Sistem Informasi", 5, 4400000, 3900000, 610000},
        {"RANJANI", "443901", "Manajemen Informatika", 2, 4000000, 5000000, 1000000},
        {"RISKA", "532", "Komputer Akuntansi", 5, 2980000, 2740000, 300000}
    };

    int totalTuition = 0, totalPaid = 0, totalRemaining = 0;

    // Output the header
    cout << "==============================================================" << endl;
    cout << setw(30) << "LAPORAN HASIL PEMBAYARAN UANG KULIAH" << endl;
    cout << "==============================================================" << endl;
    cout << left << setw(10) << "Nama" 
         << setw(10) << "NPM" 
         << setw(25) << "Jurusan" 
         << setw(15) << "Pembayaran Ke" 
         << setw(15) << "Uang Kuliah" 
         << setw(15) << "Terbayar" 
         << setw(15) << "Sisa Uang Kuliah" << endl;
    cout << "----------------------------------------------------------------------" << endl;

    // Display each student's data
    for (int i = 0; i < 4; i++) {
        cout << left << setw(10) << students[i].name
             << setw(10) << students[i].npm
             << setw(25) << students[i].major
             << setw(15) << students[i].paymentCount
             << setw(15) << students[i].tuitionFee
             << setw(15) << students[i].totalPaid
             << setw(15) << students[i].remainingTuition << endl;

        totalTuition += students[i].tuitionFee;
        totalPaid += students[i].totalPaid;
        totalRemaining += students[i].remainingTuition;
    }

    // Output the totals
    cout << "----------------------------------------------------------------------" << endl;
    cout << right << setw(45) << totalTuition << setw(15) << totalPaid << setw(15) << totalRemaining << endl;
    cout << "----------------------------------------------------------------------" << endl;

    return 0;
}
