#include<iostream>
#include<iomanip>

using namespace std;

int main()

{

    char namamhs[20],nim[10],nhuruf;
    float nhadir,ntugas,nuts,nuas,nakhir;
    
    cout<< "DAFTAR NILAI MAHASISWA" <<endl;
    cout<< "mata kuliah : Algoritma pemrograman"<<endl;
    cout<< "-----------------------------------"<<endl;
    cout<< "NAMA MAHASISWA : ";
    gets(namamhs);
    cout<< "NIM : ";
    cin>> nim;
    cout<< "NILAI HADIR : ";
    cin>> nhadir;
    cout<< "NILAI TUGAS :";
    cin>>ntugas;
    cout<< "NILAI UTS :";
    cin>>nuts;
    cout<< "NILAI UAS :";
    cin>>nuas;
    nhadir=(0.1*nhadir)+(0.15*ntugas)+(0.35*nuts)+(0.4*nuas);
    if(nakhir>=85 && nakhir <100) {
    nhuruf='A';//jika begini maka ini adalah if tunggal
    }else if(nakhir>=70 && nakhir<85){
    nhuruf='B'; //jika ditambah else maka adalah if jamak
                // && adalah dan
                
     }else if (nakhir>=60 && nakhir<70){
             nhuruf='C';
     }else if (nakhir>=50 && nakhir<60){
             nhuruf='D';
     }else if (nakhir>=0 && nakhir<50){
             nhuruf='C';
     }else {
             nhuruf='-';
     }
     cout<<"NILAI AKHIR ="<<nakhir<<endl;
     cout<<"NILAI HURUF ="<<nhuruf<<endl;
     return 0;
 }    