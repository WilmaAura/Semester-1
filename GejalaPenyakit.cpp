#include <iostream>
#include <string>
using namespace std;

// Program
// Membuat program kemungkinan penyakit dari gejala yang ada

// Kamus
string gejala1, gejala2, gejala3;

// Algoritma
int main() {
    cout << "Program untuk mengetahui kemungkinan penyakit yang anda alami\n";
    cout << "Sebutkan 3 gejala yang anda alami!\n"; 
    cout << "Gejala Pertama: "; getline(cin, gejala1);
    cout << "Gejala Kedua: "; getline(cin, gejala2);
    cout << "Gejala Ketiga: "; getline(cin, gejala3);

    if ((gejala1 == "Demam" || gejala2 == "Demam" || gejala3 == "Demam") && 
        (gejala1 == "Sakit kepala" || gejala2 == "Sakit kepala" || gejala3 == "Sakit kepala") && 
        (gejala1 == "Hidung tersumbat" || gejala2 == "Hidung tersumbat" || gejala3 == "Hidung tersumbat"))  
    {
        cout << "Kemungkinan Penyakit anda Rhinitis atau flu biasa.\n";
    } 
    else if ((gejala1 == "Diare" || gejala2 == "Diare" || gejala3 == "Diare") && 
             (gejala1 == "Kram perut" || gejala2 == "Kram perut" || gejala3 == "Kram perut") && 
             (gejala1 == "Mual" || gejala2 == "Mual" || gejala3 == "Mual")) 
    {
        cout << "Kemungkinan Penyakit anda Radang lambung dan usus.\n";
    } 
    else if ((gejala1 == "Kulit gatal" || gejala2 == "Kulit gatal" || gejala3 == "Kulit gatal") && 
             (gejala1 == "Kemerahan pada kulit" || gejala2 == "Kemerahan pada kulit" || gejala3 == "Kemerahan pada kulit") && 
             (gejala1 == "Pembangkitan ringan di area tertentu" || gejala2 == "Pembangkitan ringan di area tertentu" || gejala3 == "Pembangkitan ringan di area tertentu")) 
    {
        cout << "Kemungkinan Penyakit anda reaksi alergi.\n";
    } 
    else if ((gejala1 == "Nyeri sendi" || gejala2 == "Nyeri sendi" || gejala3 == "Nyeri sendi") && 
             (gejala1 == "Bengkak pada sendi" || gejala2 == "Bengkak pada sendi" || gejala3 == "Bengkak pada sendi") && 
             (gejala1 == "Kaku saat pagi hari" || gejala2 == "Kaku saat pagi hari" || gejala3 == "Kaku saat pagi hari")) 
    {
        cout << "Kemungkinan Penyakit anda radang sendi.\n";
    } 
    else if ((gejala1 == "Lelah berkepanjangan" || gejala2 == "Lelah berkepanjangan" || gejala3 == "Lelah berkepanjangan") && 
             (gejala1 == "Penurunan berat badan tanpa sebab" || gejala2 == "Penurunan berat badan tanpa sebab" || gejala3 == "Penurunan berat badan tanpa sebab") && 
             (gejala1 == "Keringat malam" || gejala2 == "Keringat malam" || gejala3 == "Keringat malam")) 
    {
        cout << "Kemungkinan Penyakit anda adalah Tuberkulosis (TBC) atau penyakit kronis lainnya.\n";
    } 
    else 
    {
        cout << "Gejala yang anda sebutkan tidak sesuai dengan data.\n";
    }

    return 0;
}
