#unclude<iomanip>
using namespace std;

int main() {
	int jumlahdata, jumlahbarang, totalpenjualan = 0;
	cout << "Masukkan jumlah data ";
	cin >> jumlahdata;
	
	for (int i = 1; i <= jumlahdata; i++){
	 cout << "Masukkan jumlah barang yang terjual ditoko " << i << ": ";
	 cin >> jumlahbarang;
	 totalpenjualan += jumlahbarang;
	}
	cout << "Total barang yang terjual ditoko adalah: " << totalpenjualan << endl;
	return 0;
}
	