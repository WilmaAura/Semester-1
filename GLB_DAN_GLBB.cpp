#include <iostream>
#include <string>
#include <cmath>
// Program menghitung keceepatan dua orang
using namespace std;
// Kamus
struct kamus
{
    float jam, kec, jarak, waktu, selisih_wak, percepatan;
    int pil;
    float kecA, kecB;
    float waktu1, waktu2;
    float jarak1, jarak2;
};

// Algoritma
void Pilihan(kamus &k)
{ //&k memungkinkan fungsi untuk memodifiasi data struct ukuran
    cout << "1. Menghitung Selisih Waktu" << endl;
    cout << "2. Kapan kedua orang berpapasan" << endl;
    cout << "3. Menghitung Kecepatan" << endl;
    cout << "4. Menghitung Jarak" << endl;
    cout << "5. Menghitung Waktu" << endl;
    cout << "6. Waktu Tempuh dengan Variasi Kecepatan" << endl;
    cout << "==============================" << endl;
    cout << "Pilih dengan angka (Contoh 1): ";
    cin >> k.pil;
    cout << endl;
}

void Selisih_Waktu(kamus &k)
{
    float kecA, kecB, waktuA, waktuB;
    cout << "Sebuah pesawat terbang dari Jakarta ke Surabaya sejauh (km): ";
    cin >> k.jarak;
    cout << "Pesawat A bergerak dengan kecepatan: ";
    cin >> kecA;
    cout << "Sedangkan pesawat B dengan kecepatan: ";
    cin >> kecB;
    waktuA = k.jarak / kecA;
    waktuB = k.jarak / kecB;
    k.selisih_wak = fabs(waktuA - waktuB); // fabs membutuhkan header <cmath> //fabs berfungsi agar nilai selalu postif
    cout << "Hasilnya adalah = " << k.selisih_wak;
}

void Berpapasan(kamus &k)
{
    cout << "Kota A ke kota B berjarak:";
    cin >> k.jarak;
    cout << "Mobil Andi bergerak dari kota B menuju ke kota A dengan kecepatan: ";
    cin >> k.kecA;
    cout << "Budi ingin ke kota A dari kota B dengan kecepatan: ";
    cin >> k.kecB;
    cout << "Pertanyaannya adalah:" << endl
         << endl;
    cout << "1. Berapa waktu yang diperlukan hingga mereka berpapasan?" << endl;
    cout << "2. Pada jarak berapa kilometer dari kota A mereka berpapasan? " << endl;
    cout << "Jawab:" << endl
         << endl;

    cout << "1. Waktu yang diperlukan berpapasan:" << endl;
    cout << "Rumusnya sebagai berikut" << endl;
    cout << "         jarak      " << endl;
    cout << "t = ----------------" << endl;
    cout << "        v1 + v2     " << endl
         << endl;
    k.waktu = k.jarak / (k.kecA + k.kecB);

    cout << "t  = " << k.jarak << " / ( " << k.kecA << "+" << k.kecB << " )" << endl;
    cout << "t = " << k.waktu << endl
         << endl;

    float sDina;
    cout << "2. Jarak dari kota A tempat berpapasan" << endl
         << endl;
    cout << "Jarak yang ditempuh Budi hingga berpapasan: " << endl;
    sDina = k.kecB * k.waktu;

    cout << "Jarak = " << k.kecB << " x " << k.waktu << " = " << sDina << "km";
}

void Kecepatan(kamus &k)
{
    cout << "Sebuah kereta menempuh perjalanan sejauh (dalam km): ";
    cin >> k.jarak;
    cout << "Dalam waktu (format jam): ";
    cin >> k.waktu;
    cout << "Berapa kecepatan rata-rata kereta tersebut?" << endl;

    k.kec = k.jarak / k.waktu;

    cout << "Jawab = " << endl;
    cout << "===========" << endl
         << endl;
    // rumus
    cout << "Rumus: " << endl
         << endl;
    cout << "   ----------- " << endl;
    cout << "   | v = s/t |" << endl;
    cout << "   ----------- " << endl;
    cout << "Keterangan: " << endl;
    cout << "v = kecepatan" << endl;
    cout << "s = jarak" << endl;
    cout << "t = waktu" << endl
         << endl;
    // hasil
    cout << "v = " << k.jarak << " / " << k.waktu << " = " << k.kec << endl
         << endl;

    cout << "Maka kecepatannya = " << k.kec;
}

void Jarak(kamus &k)
{
    cout << "Seorang pelari berlari dengan kecepatan rata rata (km/jam): ";
    cin >> k.kec;
    cout << "Selama (format jam): ";
    cin >> k.waktu;
    cout << "Berapa kecepatan rata-rata kereta tersebut?" << endl;

    // Operator
    k.jarak = k.kec * k.waktu;

    cout << "Jawab = " << endl;
    cout << "===========" << endl
         << endl;
    // rumus
    cout << "Rumus: " << endl
         << endl;
    cout << "   ------------- " << endl;
    cout << "   | s = v * t |" << endl;
    cout << "   ------------- " << endl;
    cout << "Keterangan: " << endl;
    cout << "v = kecepatan" << endl;
    cout << "s = jarak" << endl;
    cout << "t = waktu" << endl
         << endl;
    // hasil
    cout << "s = " << k.kec << " * " << k.waktu << " = " << k.jarak << endl
         << endl;

    cout << "Maka jaraknya = " << k.jarak;
}

void Waktu(kamus &k)
{
    cout << "Sebuah mobil menempuh perjalanan sejauh (dalam km): ";
    cin >> k.jarak;
    cout << "Jika mobil tersebut bergerak dengan kecepatan rata-rata: ";
    cin >> k.kec;
    cout << "Berapa waktu yang dibutuhkan mobil untuk sampai tujuan? " << endl;

    k.waktu = k.jarak / k.kec;

    cout << "Jawab = " << endl;
    cout << "===========" << endl
         << endl;
    // rumus
    cout << "Rumus: " << endl
         << endl;
    cout << "   ----------- " << endl;
    cout << "   | t = s/v |" << endl;
    cout << "   ----------- " << endl;
    cout << "Keterangan: " << endl;
    cout << "v = kecepatan" << endl;
    cout << "s = jarak" << endl;
    cout << "t = waktu" << endl
         << endl;
    // hasil
    cout << "t = " << k.jarak << " / " << k.kec << " = " << k.kec << endl
         << endl;

    cout << "Maka waktu yang dibutuhkan = " << k.waktu;
}

void Percepatan(kamus &k)
{
    // Soal
    cout << "Sebuah bus bergerak selama (dalam jam): ";
    cin >> k.waktu1;
    cout << "Dengan kecepatan rata-rata (km/jam)= ";
    cin >> k.kec;
    cout << "Kemudian mempercepat lajunya menjadi (dalam km/jam)= ";
    cin >> k.percepatan;
    cout << "Selama: ";
    cin >> k.waktu2;
    cout << endl;
    // Pertanyaan
    cout << "Pertanyaannya: " << endl;
    cout << "1. Berapa total jarak yang ditempuh?" << endl;
    cout << "2. Berapa waktu total yang diperlukan?" << endl
         << endl;
    // Jawaban
    cout << "Jawab" << endl;
    cout << "=========" << endl
         << endl;
    cout << "1. Total jarak yang ditempuh: " << endl;
    // Operator Jarak
    k.jarak1 = k.kec * k.waktu1;
    cout << "s = " << k.kec << " * " << k.waktu1 << " = " << k.jarak1 << endl;
    k.jarak2 = k.percepatan * k.waktu2;
    cout << "s = " << k.percepatan << " * " << k.waktu2 << " = " << k.jarak2 << endl;
    // Sum jarak
    float JarTot = k.jarak1 + k.jarak2;
    cout << "Total jarak yang ditempuh yaitu: " << JarTot << endl;
    // No 2
    cout << "2. Total waktu: " << endl
         << endl;
    float WakTot = k.waktu1 + k.waktu2;
    cout << "Total waktu = " << k.waktu1 << " + " << k.waktu2 << " = " << WakTot;
}

// Menampilkan isi void
void Output(kamus &k)
{
    if (k.pil == 1)
    {
        Selisih_Waktu(k);
    }
    else if (k.pil == 2)
    {
        Berpapasan(k);
    }

    else if (k.pil == 3)
    {
        Kecepatan(k);
    }
    else if (k.pil == 4)
    {
        Jarak(k);
    }

    else if (k.pil == 5)
    {
        Waktu(k);
    }

    else if (k.pil == 6)
    {
        Percepatan(k);
    }
    else
    {
        cout << "None";
    }
}

int main()
{
    kamus k; // Variable untuk menyimpan isi dari struct
             // kamus adalah tipe data dan k adalah variablenya

    cout << "Selamat datang di perhitungan Jam, Waktu, dan Kecepatan (GLB dan GLBB)" << endl;
    cout << "Pilih yang ingin kamu hitung" << endl;
    cout << "==============================" << endl;
    Pilihan(k); // parameter k berfungsi agar memiliki akses kepada variable k
    Output(k);

    return 0;
}
