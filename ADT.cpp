#include <iostream>
#include <string>

using namespace std;

struct BioSiswa {
    int NIS;
    int NISN;
    int tglLahir, thnLahir;
    string Nama, Agama, Alamat, tempatLahir, bulan;
};
struct BioSiswa data_siswa;

struct Sekolah {
    string Nama, Jl, email, website, No_Tlp;
    int No_Jln,  Kode_pos;
};
struct Sekolah Alamat, data_sekolah;

// Fungsi untuk input Tanggal Lahir
void TanggalLahir() {
    cout << "Tempat lahir = "; getline(cin, data_siswa.tempatLahir);
    cout << "Tanggal =  "; cin >> data_siswa.tglLahir;
    cin.ignore();
    cout << "Bulan = "; getline(cin, data_siswa.bulan);
    cout << "Tahun = "; cin >> data_siswa.thnLahir;
    cin.ignore();
}

int main() {
    // Input Data Sekolah
    cout << "Nama Sekolah = "; getline(cin, data_sekolah.Nama);
    cout << "Alamat = "; getline(cin, data_sekolah.Jl);
    cout << "Kode Pos = "; cin >> data_sekolah.Kode_pos;
    cin.ignore();
    cout << "No telepon = "; getline (cin, data_sekolah.No_Tlp);
    cout << "Email = "; getline(cin, data_sekolah.email);
    cout << "Website = "; getline(cin, data_sekolah.website);

    // Input Data Siswa
    cout << "NIS = "; cin >> data_siswa.NIS;
    cin.ignore();
    cout << "NISN = "; cin >> data_siswa.NISN;
    cin.ignore();
    cout << "Nama = "; getline(cin, data_siswa.Nama);
    cout << "TTL: " << endl;
    TanggalLahir();  // Memanggil fungsi TanggalLahir
    cout << "Agama = "; getline(cin, data_siswa.Agama);
    cout << "Alamat = "; getline(cin, data_siswa.Alamat);

    // Output Data
    cout << "=====================================================" << endl;
    cout << "       " << data_sekolah.Nama << endl;
    cout << data_sekolah.Jl << " " << data_sekolah.Kode_pos << " Telp. " << data_sekolah.No_Tlp << endl;
    cout << data_sekolah.email << " " << data_sekolah.website << endl;
    cout << "=====================================================" << endl << endl;

    cout << "NIS         : " << data_siswa.NIS << endl;
    cout << "NISN        : " << data_siswa.NISN << endl;
    cout << "Nama        : " << data_siswa.Nama << endl;
    cout << "TTL         : " << data_siswa.tempatLahir << ", " << data_siswa.tglLahir << " " << data_siswa.bulan << " " << data_siswa.thnLahir << endl;
    cout << "Agama       : " << data_siswa.Agama << endl;
    cout << "Alamat      : " << data_siswa.Alamat << endl;

    return 0;
}
