#include <iostream>

using namespace std;

int a, b, c;

int main ()
{
cout << "Masukkan sisi segitiga 1 = "; cin >> a;
cout << "Masukkan sisi segitiga 2 = "; cin >> b;
cout << "Masukkkan sisi segitiga 3 = "; cin >> c;

if (a == b && a == c && b == c)
    {
        cout << "Segitiga sama sisi";
    }

    else if (a == b || a == c || b == c)
        {
            cout << "Segitiga sama kaki";
        }   
else

    {
        cout << "Segitiga Sembarang";
    }   
    return 0;
}