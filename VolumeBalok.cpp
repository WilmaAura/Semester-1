#include <iostream>

using namespace std;

int p, l, t; 
int vol;
main ()
{
cout << "===================================" << endl;
cout << "       Menghitung volume balok     " << endl;
cout << "==============================t====" << endl;

cout << "Masukkan panjang balok = "; cin >> p;
cout << "Masukkan lebar balok = "; cin >> l;
cout << "Masukkan tinggi balok = "; cin >> t;
vol = p * l * t;
cout << "Maka volume balok tersebut adalah = " << vol;
return 0;
}
