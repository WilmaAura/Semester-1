#include <iostream>
#include <string>

using namespace std;

struct Anak
{
    string NIK, Nama, Sex, Agama, Kewarganegaraan, Alamat, No_Akta, bln, Kelurahan, Kecamatan, Kabupaten, tempat, RTRW;
    int tgl, thn;
} Data_anak, Data_Pemerintah;

struct Keluarga
{
    string Nama_Kepala_Keluarga, Kartu_Keluarga;
} Data_keluarga;

void TanggalLahir()
{
    cout << "Tempat lahir = ";
    getline(cin, Data_anak.tempat);

    cout << "Tanggal =  ";
    cin >> Data_anak.tgl;
    cin.ignore();

    cout << "Bulan = ";
    getline(cin, Data_anak.bln);

    cout << "Tahun = ";
    cin >> Data_anak.thn;
    cin.ignore();
}

void TanggalPemerintahan()
{
    cout << "Tanggal =  ";
    cin >> Data_Pemerintah.tgl;
    cin.ignore();

    cout << "Bulan = ";
    getline(cin, Data_Pemerintah.bln);

    cout << "Tahun = ";
    cin >> Data_Pemerintah.thn;
    cin.ignore();
}

int main()
{
    cout << "NIK    =   ";
    getline(cin, Data_anak.NIK);

    cout << "Nama Lengkap   =   ";
    getline(cin, Data_anak.Nama);

    cout << "Tempat/Tgl. Lahir" << endl;
    TanggalLahir();

    cout << "Jenis Kelamin = ";
    getline(cin, Data_anak.Sex);

    cout << "Nomor Kartu Keluarga = ";
    getline(cin, Data_keluarga.Kartu_Keluarga);

    cout << "Nama Kepala Keluarga   =   ";
    getline(cin, Data_keluarga.Nama_Kepala_Keluarga);

    cout << "Nomor Akta Kelahiran   =   ";
    getline(cin, Data_anak.No_Akta);

    cout << "Agama  =   ";
    getline(cin, Data_anak.Agama);

    cout << "Kewarganegaraan    =   ";
    getline(cin, Data_anak.Kewarganegaraan);

    cout << "RT/RW = ";
    getline(cin, Data_anak.RTRW);

    cout << "Desa/Kelurahan =   ";
    getline(cin, Data_anak.Alamat);

    cout << "Kecamatan  =   ";
    getline(cin, Data_anak.Kecamatan);

    cout << "\nBerlaku s/d " << endl;
    TanggalPemerintahan();

    // Output
    cout << "\n\nKARTU IDENTITAS ANAK REPUBLIK INDONESIA" << endl;
    cout << "=========================================" << endl;
    cout << "NIK                   :   " << Data_anak.NIK << endl;
    cout << "Nama Lengkap          :   " << Data_anak.Nama << endl;
    cout << "Tempat/Tgl. Lahir     :   " << Data_anak.tempat << ", " << Data_anak.tgl << " " << Data_anak.bln << " " << Data_anak.thn << endl;
    cout << "Jenis Kelamin         :   " << Data_anak.Sex << endl;
    cout << "Nomor Kartu Keluarga  :   " << Data_keluarga.Kartu_Keluarga << endl;
    cout << "Nama Kepala Keluarga  :   " << Data_keluarga.Nama_Kepala_Keluarga << endl;
    cout << "Nomor Akta Kelahiran  :   " << Data_anak.No_Akta << endl;
    cout << "Agama                 :   " << Data_anak.Agama << endl;
    cout << "Kewarganegaraan       :   " << Data_anak.Kewarganegaraan << endl;
    cout << "RT/RW                 :   " << Data_anak.RTRW << endl;
    cout << "Desa/Kelurahan        :   " << Data_anak.Alamat << endl;
    cout << "Kecamatan             :   " << Data_anak.Kecamatan << endl;
    cout << "Berlaku s/d           :   " << Data_Pemerintah.tgl << " " << Data_Pemerintah.bln << " " << Data_Pemerintah.thn << endl;

    return 0;
}
