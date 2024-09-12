//NAJLA MUTIA NASUTION
//240121058
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	float jkerja, gharian, gaji, glembur, gtotal;
	char nama[20], jabatan[10];
	cout << setprecision(20);
	
	cout<< "PT. NAJLA "<< endl;
	cout<< "-----------------------------------------------" << endl;
	cout<<"MASUKAN NAMA : ";
	gets(nama);
	cout<< "MASUKAN JABATAN: ";
	gets(jabatan);
	cout<<"MASUKAN JUMLAH JAM KERJA: ";
	cin>> jkerja;
	
	
	gaji = 500;
	 if(jkerja > 7){
		glembur = 1.5 * gaji * (jkerja - 7 );	
	}
	
	gharian = jkerja * gaji;
	gtotal = gharian + glembur;
	
	cout<<"GAJI HARIAN = " << gharian << endl;
	cout<< "GAJI LEMBUR= " << glembur << endl;
	cout<<"GAJI TOTAL = " <<  gtotal << endl;

	return 0;
}

