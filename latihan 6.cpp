#include<iostream>
#include<iomanip>


using namespace std;


int main ()

{
    cout <<"penjualan barang elektronik" <<endl;
    char namabarang[15];
    float harga, jumlahjual, totalharga, diskon, totalbayar=0;
    cout<<"namabarang=";
    gets(namabarang);
    cout<<"harga=";
    cin>>harga;
    cout<<"jumlahjual=";
    cin>>jumlahjual;
    totalharga*harga*jumlahjual;
    cout<<"totalharga="<<totalharga<<endl;
    diskon=0.1*totalharga;
    cout<<"diskon="<<diskon<<endl;
    totalbayar=totalharga-diskon;
    cout<<"totalbayar="<<totalbayar<<endl;
    return 0;
}





    