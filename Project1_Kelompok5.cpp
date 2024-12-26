#include <iostream>
#include <vector>
#include <conio.h> 
#include <iomanip> 
#include <cstdlib> 

using namespace std;
/* 
		KELOMPOK 5
	NIM :		Nama Anggota Kelompok :
	240121080	Yosia Laora S. Lingga
	240121091	Surya Fairuzi Zuan
    240121058	Nazla Mutia Nasution
    240121062	Zahra Aljannah Islamiyah
    
*/
struct Penjualan {
    int noPesanan;
    string tanggalTransaksi;
    int noMeja;
    string jenisPesanan;
    string namaPesanan;
    double hargaSatuan;
    int jumlahBeli;
    double totalHarga;
};

vector<Penjualan> dataPenjualan;

void centerText(const string& text, int width = 80) {
    int padding = (width - text.size()) / 2;
    if (padding > 0) cout << string(padding, ' ');
    cout << text << endl;
}

int main() {
    string username, password;
    bool loginBerhasil = false;

    while (!loginBerhasil) {
        system("cls");
        centerText("===== Login =====", 80);
        centerText(""); 
        cout << string(30, ' ') << "Username : ";
        cin >> username;
        cout << string(30, ' ') << "Password : ";
        char ch;
        password.clear();
        ch = _getch();
        while (ch != 13) { 
            password.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        cout << endl;

        if (username == "kelompok5" && password == "penusa") {
            loginBerhasil = true;
            centerText("Login berhasil! Selamat datang, " + username + ".", 80);
            system("pause");
        } else {
            centerText("Username atau password salah! Silakan coba lagi.", 80);
            system("pause");
        }
    }

    int pil = 0;

    while (pil != 6) {
        system("cls");
        centerText("Menu Aplikasi CRUD Data Penjualan Makanan dan Minuman:", 80);
        centerText("1. Tambah Data Penjualan", 80);
        centerText("2. Edit Data Penjualan  ", 80);
        centerText("3. Hapus Data Penjualan ", 80);
        centerText("4. Lihat Data Penjualan ", 80);
        centerText("5. Cetak Data Penjualan ", 80);
        centerText("6. Keluar               ", 80);
        cout << string(30, ' ') << "Pilih menu: ";
        cin >> pil;
        cin.ignore();

        if (pil == 1) {
            char yn; 
            do {
                system("cls");
                Penjualan p;
                centerText("Tambah Data Penjualan", 80);
                cout << string(20, ' ') << "Masukkan No Pesanan       : ";
                cin >> p.noPesanan;
                cin.ignore();
                cout << string(20, ' ') << "Masukkan Tanggal Transaksi: ";
                getline(cin, p.tanggalTransaksi);
                cout << string(20, ' ') << "Masukkan No Meja          : ";
                cin >> p.noMeja;
                cin.ignore();
                cout << string(20, ' ') << "Masukkan Jenis Pesanan    : ";
                getline(cin, p.jenisPesanan);
                cout << string(20, ' ') << "Masukkan Nama Pesanan     : ";
                getline(cin, p.namaPesanan);
                cout << string(20, ' ') << "Masukkan Harga Satuan     : ";
                cin >> p.hargaSatuan;
                cout << string(20, ' ') << "Masukkan Jumlah Beli      : ";
                cin >> p.jumlahBeli;
                p.totalHarga = p.hargaSatuan * p.jumlahBeli;
                dataPenjualan.push_back(p);

                centerText("Data berhasil ditambahkan!", 80);

                cout << string(20, ' ') << "Apakah Anda ingin menambahkan data lagi? (y/n): ";
                cin >> yn;
            } while (yn == 'y' || yn == 'Y'); 

        } else if (pil == 2) {
            system("cls");
            centerText("Edit Data Penjualan", 80);
            int noPesanan;
            cout << string(20, ' ') << "Masukkan No Pesanan yang akan diedit: ";
            cin >> noPesanan;
            cin.ignore();

            bool ditemukan = false;
            for (auto &p : dataPenjualan) {
                if (p.noPesanan == noPesanan) {
                    cout << string(20, ' ') << "Masukkan Tanggal Transaksi: ";
                    getline(cin, p.tanggalTransaksi);
                    cout << string(20, ' ') << "Masukkan No Meja          : ";
                    cin >> p.noMeja;
                    cin.ignore();
                    cout << string(20, ' ') << "Masukkan Jenis Pesanan    : ";
                    getline(cin, p.jenisPesanan);
                    cout << string(20, ' ') << "Masukkan Nama Pesanan     : ";
                    getline(cin, p.namaPesanan);
                    cout << string(20, ' ') << "Masukkan Harga Satuan     : ";
                    cin >> p.hargaSatuan;
                    cout << string(20, ' ') << "Masukkan Jumlah Beli      : ";
                    cin >> p.jumlahBeli;
                    p.totalHarga = p.hargaSatuan * p.jumlahBeli;
                    centerText("Data berhasil diperbarui!", 80);
                    ditemukan = true;
                    break;
                }
            }
            if (!ditemukan) {
                centerText("Data dengan No Pesanan " + to_string(noPesanan) + " tidak ditemukan.", 80);
            }
            system("pause");

        } else if (pil == 3) {
            system("cls");
            centerText("Hapus Data Penjualan", 80);
            int noPesanan;
            cout << string(20, ' ') << "Masukkan No Pesanan yang akan dihapus: ";
            cin >> noPesanan;
            cin.ignore();

            bool ditemukan = false;
            for (auto it = dataPenjualan.begin(); it != dataPenjualan.end(); ++it) {
                if (it->noPesanan == noPesanan) {
                    dataPenjualan.erase(it);
                    centerText("Data berhasil dihapus!", 80);
                    ditemukan = true;
                    break;
                }
            }
            if (!ditemukan) {
                centerText("Data dengan No Pesanan " + to_string(noPesanan) + " tidak ditemukan.", 80);
            }
            system("pause");

        } else if (pil == 4) {
            system("cls");
            centerText("Lihat Data Penjualan", 80);
            if (dataPenjualan.empty()) {
                centerText("Tidak ada data penjualan!", 80);
            } else {
                cout << left << setw(10) << "No" << setw(20) << "Tanggal" << setw(10) << "Meja"
                     << setw(15) << "Jenis" << setw(20) << "Nama" << setw(10) << "Harga"
                     << setw(10) << "Jumlah" << "Total" << endl;
                cout << string(100, '-') << endl;
                for (const auto &p : dataPenjualan) {
                    cout << left << setw(10) << p.noPesanan << setw(20) << p.tanggalTransaksi
                         << setw(10) << p.noMeja << setw(15) << p.jenisPesanan
                         << setw(20) << p.namaPesanan << setw(10) << p.hargaSatuan
                         << setw(10) << p.jumlahBeli << p.totalHarga << endl;
                }
            }
            system("pause");

        } else if (pil == 5) {
            system("cls");
            centerText("Cetak Data Penjualan", 80);
            if (dataPenjualan.empty()) {
                centerText("Tidak ada data untuk dicetak!", 80);
            } else {
                for (const auto &p : dataPenjualan) {
                    cout << string(20, ' ') << "No Pesanan        : " << p.noPesanan << endl;
                    cout << string(20, ' ') << "Tanggal Transaksi : " << p.tanggalTransaksi << endl;
                    cout << string(20, ' ') << "No Meja           : " << p.noMeja << endl;
                    cout << string(20, ' ') << "Jenis Pesanan     : " << p.jenisPesanan << endl;
                    cout << string(20, ' ') << "Nama Pesanan      : " << p.namaPesanan << endl;
                    cout << string(20, ' ') << "Harga Satuan      : " << p.hargaSatuan << endl;
                    cout << string(20, ' ') << "Jumlah Beli       : " << p.jumlahBeli << endl;
                    cout << string(20, ' ') << "Total Harga       : " << p.totalHarga << endl;
                    cout << string(40, '-') << endl;
                }
            }
            system("pause");

        } else if (pil == 6) {
            centerText("Keluar dari program.", 80);
            system("pause");

        } else {
            centerText("Pilihan tidak valid!", 80);
            system("pause");
        }
    }

    return 0;
}
