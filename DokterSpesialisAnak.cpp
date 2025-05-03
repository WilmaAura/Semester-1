#include <iostream>
#include <string>

using namespace std;
char pilihan;
string gejala;
char ulangi;

main ()
{ 
cout << "Ini adalah program Dokter anak. " << endl;
cout << "Masukkan gejala penyakit yang dialami oleh anak anda = "; getline(cin, gejala);
 

do
{
cout << "Apakah ada Gejala lain? Ketik (Y/y) jika masih ada gejala penyakit = "; cin >> pilihan;    

    if(pilihan == 'Y' || pilihan == 'y')
    {      
        cin.ignore();
        cout << "Masukkan gejala penyakit yang lain = "; 
        getline (cin, gejala);
    }
    
    else
    {
        cout << "Penyakit anak yaitu = ";
    }

}
while (pilihan == 'y' || pilihan == 'Y');
    return 0;   
}