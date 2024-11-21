#include <iostream>
#include <conio.h>

using namespace std;

void hitung() ; // mendeklarasikan (prototype) fungsi yang tidak menghasilkan nilai 

int main()

{
	
cout << "\n Menghitubg Volume KUBUS" ;
hitung () ; // memanggil fungsi hitung;
return 0;
}

void hitung()
{
float sisi, volume ;
cout << "\n sisi KUBUS : " ;
cin >> sisi ;
volume = sisi * sisi * sisi ;
cout << "\n Volume KUBUS yaitu : " << volume ;
}
	
