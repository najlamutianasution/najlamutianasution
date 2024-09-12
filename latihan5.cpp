#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  cout<<"GAJI KARYAWAN PELITA NUSANTARA"<<endl;
  char npeg[20],njab[20];
  float gaji,pajak,pinjaman,gajibersih=0;
  cout<<"MASUKKAN NAMA PEGAWAI:";
  cin>>npeg;
  cout<<"MASUKKAN JABATAN:";
  cin>>njab;
  cout<<"gaji:";
  cin>>gaji;
  cout<<setprecision(13);
  pajak=0,15*gaji;
  cout<<"pajak:"<<pajak<<endl;
  cout<<"pinjaman:";
  cin>>pinjaman;
  gajibersih=gaji-(pinjaman+pajak);
  cout<<"gaji bersih:"<<gajibersih<<endl;
  
  return 0;
}  
  