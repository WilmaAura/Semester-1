#include <iostream>

using namespace std;
int a,c;
char b;

main ()

{
 cout << "Menentukan bilangan genap positif dan negatif atau ganjil positif dan negatif." << endl;
cin >> a; 

do { 
if (a % 2 == 0)
{
    if (a >= 0)
    {
        cout << "bilangan " << a << " adalah bilangan genap positif" << endl; 
    }
    else 
    {
        cout << "bilangan " << a << " adalah bilangan genap negatif" << endl;
    }
}
else
{
    if (a >= 0)
    {
        cout << "bilangan " << a << " adalah bilangan genap positif" << endl; 
    }
    else 
    {
        cout << "bilangan " << a << " adalah bilangan genap negatif" << endl;
    }
}
cout << "apakah ingin mengulang lagi? Ketik (y/Y) jika ingin mengulang: "; cin >> b;

}

while (b =='y' ||b == 'Y');

    return 0;
}