#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// Menghitung gaji pokok
int pokok(int jam) {
    int gaji_pokok = jam * 2000; 
    return gaji_pokok;
}

// Menghitung uang lembur
int lembur(int jam, int gaji_pokok) {
    int uang_lembur = 0;
    if (jam > 7) {
        uang_lembur = (jam - 7) * 1.5 * 2000; 
    }
    return uang_lembur;
}

// Menghitung uang makan
int makan(int jam) {
    int uang_makan = 0;
    if (jam >= 8 && jam <= 10) {
        uang_makan = 1500; 
    } else if (jam > 10) {
        uang_makan = 2500; 
    }
    return uang_makan;
}

// Menghitung uang jasa lembur
int jasa(int jam) {
    int uang_jasa = 0;
    if (jam >= 9) {
        uang_jasa = 3000; 
    }
    return uang_jasa;
}

int main() {
    int jam_kerja;
    
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jam_kerja;
    
    int gaji_pokok = pokok(jam_kerja);         
    int uang_lembur = lembur(jam_kerja, gaji_pokok); 
    int uang_makan = makan(jam_kerja);         
    int uang_jasa = jasa(jam_kerja);           

    // Menampilkan hasil
    int total_gaji = gaji_pokok + uang_lembur + uang_makan + uang_jasa;
    cout << "\nGaji Pokok: " << gaji_pokok << endl;
    cout << "Uang Lembur: " << uang_lembur << endl;
    cout << "Uang Makan: " << uang_makan << endl;
    cout << "Uang Jasa Lembur: " << uang_jasa << endl;
    cout << "\nGaji yang diterima: " << total_gaji << endl;

    return 0;
}