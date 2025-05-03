#include <iostream>
#include <string>
#include <cmath>

// Judul =Calculator bangun ruang dan datar
using namespace std;
// Kamus
struct ukuran // sebuah type
{
    float a, b, c, r, p, l, t;       // sisi bangunan
    float vol, sel, sisi, luas, kel; // Besaran geometri
    float pi = 3.14;                 // Nilai pi
    char pil;
};

struct pilihan // type untuk pemilihan
{
    string menu, b_ruang, b_datar;
};

// Algorithm

void Tampilan()
{
    cout << "=========================================================================================" << endl;
    cout << "                Selamat Datang di Perhitungan Bangun Datar dan Bangun Ruang               " << endl;
    cout << "=========================================================================================" << endl
         << endl;
    cout << "Menu bangun datar  " << "              " << "Menu bangun ruang" << endl;
    cout << "1. Persegi         " << "              " << "1. kubus" << endl;
    cout << "2. Persegi Panjang " << "              " << "2. Balok" << endl;
    cout << "3. Segitiga        " << "              " << "3. Tabung" << endl;
    cout << "4. Lingkaran       " << "              " << "4. Bola" << endl;
    cout << endl;
}

void Pemilihan_Menu(pilihan &p)
{
    cout << "Pilih bangun ruang atau bangun datar (Bangun ruang) : ";
    getline(cin, p.menu);
    if ((p.menu == "Bangun ruang") || (p.menu == "bangun ruang"))
    {
        cout << "Menu bangun ruang" << endl;
        cout << "1. Kubus" << endl;
        cout << "2. Balok" << endl;
        cout << "3. Tabung" << endl;
        cout << "4. Bola" << endl;
        cout << "Mau bangun ruang yang mana? Contoh (Kubus): ";
        getline(cin, p.b_ruang);
    }
    else if ((p.menu == "Bangun datar") || (p.menu == "bangun datar"))
    {
        cout << "Menu bangun datar" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga" << endl;
        cout << "4. Lingkaran" << endl;
        cout << "Mau bangun datar yang mana? Contoh (Persegi): ";
        getline(cin, p.b_datar);
    }
    else
    {
        cout << "Tidak ada";
    }
}

// Bangun ruang
//------------------------------------------------------------------------------------------------
void input_kubus(ukuran &u)
{
    cout << "Masukkan sisi kubus: ";
    cin >> u.sisi;
}

int volume_kubus(ukuran &u)
{
    return u.vol = u.sisi * u.sisi * u.sisi;
}

int selimut_kubus(ukuran &u)
{
    return u.sel = 6 * u.sisi * u.sisi;
}

void output_kubus(ukuran &u)
{
    cout << "Volume kubus tersebut adalah = " << u.vol << endl;

    cout << "Apakah kamu ingin mencari luas selimutnya juga? Jika iya ketik (Y/y) : ";
    cin >> u.pil;
    cout << endl;

    if ((u.pil == 'Y') || (u.pil == 'y'))
    {
        cout << "Luas selimut balok tersebut adalah = " << u.sel << endl;
    }
    else
    {
        cout << "Tidak menghitung luas selimut." << endl;
    }
}
void Input_balok(ukuran &u) // & (Pass by reference) menerima referensi dari variable 'u' dengan tipe 'ukuran'
                            // variable u dapat diakses di void ini
{
    // Balok
    cout << "Masukkan panjang balok: ";
    cin >> u.p;
    cout << "Masukkan lebar balok: ";
    cin >> u.l;
    cout << "Masukkan tinggi balok: ";
    cin >> u.t;
    if ((u.p < u.l) || (u.p < u.t))
    {
        cout << "Itu bukan balok kocak" << endl;
        exit(1); // Fungsi exit berfungsi agar program berhenti jika tidak memenuhi kondisi
                 // Angka 1 menandakan bahwa program berhenti karena error
    }
}

int volume_Balok(ukuran &u)
{
    return u.vol = u.p * u.l * u.t;
}

int selimut_Balok(ukuran &u)
{
    return u.sel = 2 * (u.p * u.l + u.p * u.t + u.l * u.t);
}

void output_balok(ukuran &u)
{
    cout << "Volume balok tersebut adalah = " << u.vol << endl;

    cout << "Apakah kamu ingin mencari luas selimutnya juga? Jika iya ketik (Y/y) : ";
    cin >> u.pil;
    cout << endl;

    if ((u.pil == 'Y') || (u.pil == 'y'))
    {
        cout << "Luas selimut balok tersebut adalah = " << u.sel << endl;
    }
    else
    {
        cout << "Tidak menghitung luas selimut." << endl;
    }
}

void input_tabung(ukuran &u)
{
    cout << "Masukkan jari-jari tabung (1/2 D) = ";
    cin >> u.r;
    cout << "Masukkan tinggi tabung: ";
    cin >> u.t;
}

double volume_tabung(ukuran &u)
{
    return u.vol = u.pi * (u.r * u.r) * u.t;
}
double selimut_tabung(ukuran &u)
{
    return u.sel = 2 * u.pi * u.r * u.t;
}

double luas_tabung(ukuran &u)
{
    return u.luas = 2 * u.pi * u.r * (u.r + u.t);
}
void output_tabung(ukuran &u)
{
    cout << "Volume tabung tersebut adalah = " << u.vol << endl;

    cout << "Apakah kamu ingin mencari luas selimutnya juga? Jika iya ketik (Y/y) : ";
    cin >> u.pil;
    cout << endl;

    if ((u.pil == 'Y') || (u.pil == 'y'))
    {
        cout << "Luas selimut tabung tersebut adalah = " << u.sel << endl;
    }
    else
    {
        cout << "Tidak menghitung luas selimut." << endl;
    }

    cout << "Apakah kamu ingin mencari luasnya juga? Jika iya ketik (Y/y) : ";
    cin >> u.pil;
    cout << endl;

    if ((u.pil == 'Y') || (u.pil == 'y'))
    {
        cout << "Luas tabung tersebut adalah = " << u.luas << endl;
    }
    else
    {
        cout << "Tidak menghitung luas." << endl;
    }
}

void input_bola(ukuran &u)
{
    cout << "Masukkan jari-jari bola = ";
    cin >> u.r;
}

double volume_bola(ukuran &u)
{
    return u.vol = 4.0 / 3.0 * u.pi * (u.r * u.r * u.r);
}

double selimut_bola(ukuran &u)
{
    return u.sel = 4 * u.pi * (u.r * u.r);
}

void output_bola(ukuran &u)
{
    cout << "Volume bola tersebut adalah = " << u.vol << endl;

    cout << "Apakah kamu ingin mencari luas selimutnya juga? Jika iya ketik (Y/y) : ";
    cin >> u.pil;
    cout << endl;

    if ((u.pil == 'Y') || (u.pil == 'y'))
    {
        cout << "Luas selimut bola tersebut adalah = " << u.sel << endl;
    }
    else
    {
        cout << "Tidak menghitung luas selimut." << endl;
    }
    cout << "Apakah kamu ingin mencari luasnya juga? Jika iya ketik (Y/y) : ";
    cin >> u.pil;
    cout << endl;
}

void memilihKubus(ukuran &u)
{
    input_kubus(u);
    volume_kubus(u);
    selimut_kubus(u);
    output_kubus(u);
}
void memilihBalok(ukuran &u)
{
    Input_balok(u);
    volume_Balok(u);
    selimut_Balok(u);
    output_balok(u);
}

void memilihTabung(ukuran &u)
{
    input_tabung(u);
    volume_tabung(u);
    selimut_tabung(u);
    output_tabung(u);
}

void memilihBola(ukuran &u)
{
    input_bola(u);
    volume_bola(u);
    selimut_bola(u);
    output_bola(u);
}

void memilihBangunRuang(pilihan &p, ukuran &u)
{
    if (p.b_ruang == "Kubus" || p.b_ruang == "kubus")
    {
        memilihKubus(u);
    }
    else if (p.b_ruang == "Balok" || p.b_ruang == "balok")
    {
        memilihBalok(u);
    }
    else if (p.b_ruang == "Tabung" || p.b_ruang == "tabung")
    {
        memilihTabung(u);
    }
    else if (p.b_ruang == "Bola" || p.b_ruang == "bola")
    {
        memilihBola(u);
    }
    else
    {
        cout << " " << endl;
    }
}

// Bangun datar
//------------------------------------------------------------------------------------------------
void input_persegi(ukuran &u)
{
    cout << "Masukkan sisi persegi = ";
    cin >> u.sisi;
}

int luas_persegi(ukuran &u)
{
    return u.luas = u.sisi * u.sisi;
}

int keliling_persegi(ukuran &u)
{
    return u.kel = 4 * u.sisi;
}

void output_persegi(ukuran &u)
{
    cout << "luas persegi tersebut adalah = " << u.luas << endl;

    cout << "Apakah kamu ingin mencari kelilingnya juga? Jika iya ketik (Y/y) : ";
    cin >> u.pil;
    cout << endl;

    if ((u.pil == 'Y') || (u.pil == 'y'))
    {
        cout << "Keliling persegi tersebut adalah = " << u.kel << endl;
    }
    else
    {
        cout << "Tidak menghitung keliling." << endl;
    }
}

void input_persegi_panjang(ukuran &u)
{
    cout << "Masukkan panjangnya = ";
    cin >> u.p;
    cout << "Masukkan lebar persegi panjang = ";
    cin >> u.l;

    if (u.p < u.l)
    {
        cout << "Mana ada panjang lebih pendek dari lebar bego";
    }
}

int luas_persegi_panjang(ukuran &u)
{
    return u.luas = u.p * u.l;
}

int keliling_persegi_panjang(ukuran &u)
{
    return u.kel = 2 * (u.p + u.l);
}

void output_persegi_panjang(ukuran &u)
{
    cout << "luas persegi panjang tersebut adalah = " << u.luas << endl;

    cout << "Apakah kamu ingin mencari kelilingnya juga? Jika iya ketik (Y/y) : ";
    cin >> u.pil;
    cout << endl;

    if ((u.pil == 'Y') || (u.pil == 'y'))
    {
        cout << "Keliling persegi panjang tersebut adalah = " << u.kel << endl;
    }
    else
    {
        cout << "Tidak menghitung keliling." << endl;
    }
}

void input_segitiga(ukuran &u)
{
    cout << "Masukkan sisi 1 = ";
    cin >> u.a;
    cout << "Masukkan sisi 2 = ";
    cin >> u.b;
    cout << "Masukkan sisi 3 = ";
    cin >> u.c;
}

double keliling_segitiga(ukuran &u)
{
    return u.kel = u.a + u.b + u.c;
}

double luas_segitiga(ukuran &u)
{
    double keliling = keliling_segitiga(u);
    double s = keliling / 2;                                     // Setengah keliling
    return u.luas = sqrt(s * (s - u.a) * (s - u.b) * (s - u.c)); // sqrt = akar kuadrat
}
void output_segitiga(ukuran &u)
{
    cout << "luas segitiga tersebut adalah = " << u.luas << endl;

    cout << "Apakah kamu ingin mencari kelilingnya juga? Jika iya ketik (Y/y) : ";
    cin >> u.pil;
    cout << endl;

    if ((u.pil == 'Y') || (u.pil == 'y'))
    {
        cout << "Keliling segitiga tersebut adalah = " << u.kel << endl;
    }
    else
    {
        cout << "Tidak menghitung keliling." << endl;
    }
}

void input_lingkaran(ukuran &u)
{
    cout << "Masukkan jari-jari lingkaran (1/2 D) = ";
    cin >> u.r;
}

double luas_lingkaran(ukuran &u)
{
    return u.luas = u.pi * (u.r * u.r);
}

double keliling_lingkaran(ukuran &u)
{
    return u.kel = 2 * u.pi * u.r;
}

void output_lingkaran(ukuran &u)
{
    cout << "luas lingkaran tersebut adalah = " << u.luas << endl;

    cout << "Apakah kamu ingin mencari kelilingnya juga? Jika iya ketik (Y/y) : ";
    cin >> u.pil;
    cout << endl;

    if ((u.pil == 'Y') || (u.pil == 'y'))
    {
        cout << "Keliling lingkaran tersebut adalah = " << u.kel << endl;
    }
    else
    {
        cout << "Tidak menghitung keliling." << endl;
    }
}

void memilihPersegi(ukuran &u)
{
    input_persegi(u);
    luas_persegi(u);
    keliling_persegi(u);
    output_persegi(u);
}

void memilihPersegiPanjang(ukuran &u)
{
    input_persegi_panjang(u);
    luas_persegi_panjang(u);
    keliling_persegi_panjang(u);
    output_persegi_panjang(u);
}

void memilihSegitiga(ukuran &u)
{
    input_segitiga(u);
    luas_segitiga(u);
    keliling_segitiga(u);
    output_segitiga(u);
}

void memilihLingkaran(ukuran &u)
{
    input_lingkaran(u);
    luas_lingkaran(u);
    keliling_lingkaran(u);
    output_lingkaran(u);
}
void memilihBangunDatar(pilihan &p, ukuran &u)
{
    if (p.b_datar == "Persegi" || p.b_datar == "persegi")
    {
        memilihPersegi(u);
    }
    else if (p.b_datar == "Persegi panjang" || p.b_datar == "persegi panjang")
    {
        memilihPersegiPanjang(u);
    }
    else if (p.b_datar == "Segitiga" || p.b_datar == "segitiga")
    {
        memilihSegitiga(u);
    }
    else if (p.b_datar == "Lingkaran" || p.b_datar == "lingkaran")
    {
        memilihLingkaran(u);
    }
    else
    {
        cout << "Bangun datar tidak ditemukan." << endl;
    }
}

int main()
{
    // Variable untuk menyimpan isi dari struct
    ukuran u;
    pilihan p;

    Tampilan();
    Pemilihan_Menu(p);
    memilihBangunRuang(p, u);
    memilihBangunDatar(p, u);
    return 0;
}
