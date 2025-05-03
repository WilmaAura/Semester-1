#include <iostream>
#include <string>

using namespace std;

// Kamus
struct Angka
{
    int tgl, thn, rt, rw, no, pos;
    int HH, MM, SS;
};
struct Angka TGL_Lahir, Desa, Kode;

struct Kalimat
{
    string alamat, NIM, email, nama, fakultas, prodi, semester, thn_Akademik, bulan, noHP, namaOrtu;
};
struct Kalimat Kecamatan, Dusun, Biodata, Kabupaten, Kelurahan, Prov;

// Fungsi untuk Menginput dan Menampilkan Tempat, Tanggal Lahir
void TempatTgl_Lahir()
{
    cout << "Tempat Lahir           : ";
    getline(cin, Biodata.alamat);

    cout << "Tanggal Lahir (dd)     : ";
    cin >> TGL_Lahir.tgl;
    cin.ignore();

    cout << "Bulan Lahir            : ";
    getline(cin, Biodata.bulan);

    cout << "Tahun Lahir (yyyy)     : ";
    cin >> TGL_Lahir.thn;
    cin.ignore();
}

// Fungsi untuk Menginput dan Menampilkan Alamat Orang Tua
void AlamatOrtu()
{
    cout << "Dusun                  : ";
    getline(cin, Dusun.alamat);

    cout << "Rt                     : ";
    cin >> Desa.rt;
    cin.ignore();

    cout << "Rw                     : ";
    cin >> Desa.rw;
    cin.ignore();

    cout << "Kelurahan              : ";
    getline(cin, Kelurahan.alamat);

    cout << "Kecamatan              : ";
    getline(cin, Kecamatan.alamat);
}

// Fungsi untuk Menginput dan Menampilkan Provinsi dan Kota Asal
void Provinsi_kota_Asal()
{
    cout << "Provinsi               : ";
    getline(cin, Prov.alamat);

    cout << "Kabupaten              : ";
    getline(cin, Kabupaten.alamat);
}

// Algoritma
int main()
{
    cout << "e-TICKET KTM MAHASISWA UDINUS" << endl;
    cout << "=================================================" << endl
         << endl;

    // Input Biodata Mahasiswa
    cout << "NIM                    : ";
    getline(cin, Biodata.NIM);

    cout << "Fakultas               : ";
    getline(cin, Biodata.fakultas);

    cout << "Nama                   : ";
    getline(cin, Biodata.nama);

    cout << "Program Studi          : ";
    getline(cin, Biodata.prodi);

    cout << "Semester               : ";
    getline(cin, Biodata.semester);

    cout << "Tahun Akademik         : ";
    getline(cin, Biodata.thn_Akademik);

    cout << "No HP Mahasiswa        : ";
    getline(cin, Biodata.noHP);

    cout << "Nama Orang Tua         : ";
    getline(cin, Biodata.namaOrtu);

    // Memanggil Fungsi-Fungsi
    TempatTgl_Lahir();    // Input Tempat, Tanggal Lahir
    AlamatOrtu();         // Input Alamat Orang Tua
    Provinsi_kota_Asal(); // Input Provinsi dan Kabupaten/Kota

    cout << "Alamat Asal Mahasiswa  : ";
    getline(cin, Biodata.alamat);

    cout << "Kode Pos Asal          : ";
    cin >> Kode.pos;
    cin.ignore(); // Mengabaikan karakter newline

    // Menampilkan Output e-TICKET
    cout << "\n\n=================================================" << endl;
    cout << "             e-TICKET KTM MAHASISWA UDINUS\n";
    cout << "=================================================" << endl;
    cout << "NIM                                :   " << Biodata.NIM << endl;
    cout << "Nama                               :   " << Biodata.nama << endl;
    cout << "Semester                           :   " << Biodata.semester << endl;
    cout << "Fakultas                           :   " << Biodata.fakultas << endl;
    cout << "Program Studi                      :   " << Biodata.prodi << endl;
    cout << "Thn. Akademik                      :   " << Biodata.thn_Akademik << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Tempat, Tgl Lahir                  :   " << Biodata.alamat << ", " << TGL_Lahir.tgl << " " << Biodata.bulan << " " << TGL_Lahir.thn << endl;
    cout << "No HP Mhs                          :   " << Biodata.noHP << endl;
    cout << "Nama Ortu                          :   " << Biodata.namaOrtu << endl;
    cout << "Alamat Ortu                        :   " << Dusun.alamat << " RT. " << Desa.rt << " RW. " << Desa.rw
         << " KEL. " << Kelurahan.alamat << " KEC. " << Kecamatan.alamat << endl;
    cout << "Provinsi, Kota Asal                :   Prov. " << Prov.alamat << ", Kab. " << Kabupaten.alamat << endl;
    cout << "Alamat Asal Mhs                    :   " << Biodata.alamat << endl;
    cout << "Kode Pos Asal                      :   " << Kode.pos << endl;

    return 0;
}
