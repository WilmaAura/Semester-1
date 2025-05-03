#include <iostream>
#include <string>
#include <vector> //Seperti array tetapi mempunyai kelebihan contoh bisa menambah atau mengurangin nilai yang ada secara otomatis
using namespace std;

// Fungsi untuk menampilkan menu dan harga
void tampilkanMenu()
{
    cout << "============================================================================================================" << endl;
    cout << "###                                             ALAMART                                                  ###" << endl;
    cout << "============================================================================================================" << endl
         << endl;
    cout << "============================================== MAKANAN ==================================================" << endl;
    cout << "1. Indomie Goreng              : Rp. 3.000     " << "              " << "2. Pop Mie Ayam                : Rp. 2.400     " << endl;
    cout << "3. Taro Snack Net Seaweed      : Rp. 9.100     " << "              " << "4. Chitato Sapi Panggang       : Rp. 11.900    " << endl;
    cout << "5. Es Krim Aice Strawberry     : Rp. 6.000     " << "              " << "6. Corned Beef                 : Rp. 24.400    " << endl;
    cout << "7. Oreo Mini Original          : Rp. 5.000     " << "              " << "8. Beng-Beng Wafer             : Rp. 2.500     " << endl;
    cout << "9. SilverQueen Chunky Bar      : Rp. 12.000    " << "              " << "10. Roti Tawar Sari Roti        : Rp. 13.000    " << endl;
    cout << "11. Keripik Pisang Balado      : Rp. 7.000     " << "              " << "12. Coklat Batang Ferrero       : Rp. 25.000    " << endl;
    cout << "============================================================================================================" << endl;
    cout << "============================================== MINUMAN ==================================================" << endl;
    cout << "13. Kin Yogurt Drink Blueberry  : Rp. 10.000    " << "              " << "14. Coca-cola 390ml             : Rp. 5.000     " << endl;
    cout << "15. Teh Kotak Jasmine 300ml     : Rp. 4.000     " << "              " << "16. Aqua Botol 600ml            : Rp. 3.500     " << endl;
    cout << "17. Kopi Kapal Api Sachet       : Rp. 1.500     " << "              " << "18. Fruit Tea Apple 350ml       : Rp. 6.000     " << endl;
    cout << "19. Jus Buah Tropicana          : Rp. 8.000     " << "              " << "20. Lemon Tea Sachet            : Rp. 2.000     " << endl;
    cout << "============================================================================================================" << endl;
    cout << "============================================ KEBERSIHAN =================================================" << endl;
    cout << "21. Lux Sabun Mandi 400mL       : Rp. 26.400    " << "              " << "22. Detergen Rinso Cair 360ml  : Rp. 10.000   " << endl;
    cout << "23. Bayclin Pemutih 1L          : Rp. 9.000     " << "              " << "24. Sikat Gigi Formula          : Rp. 8.000     " << endl;
    cout << "25. Pembersih Lantai SuperMop   : Rp. 15.000    " << "              " << "26. Sabun Cuci Piring Sunlight  : Rp. 12.500    " << endl;
    cout << "27. Sabun Muka Ponds Men        : Rp. 18.000    " << "              " << "28. Pengharum Ruangan Stella    : Rp. 22.000    " << endl;
    cout << "============================================================================================================" << endl;
    cout << "============================================ KESEHATAN =================================================" << endl;
    cout << "29. Cdr Vitamin C 10'S         : Rp. 61.400    " << "              " << "30. Facewash Biore Acne Care   : Rp. 16.000    " << endl;
    cout << "31. Masker KF94 (5 pcs)         : Rp. 20.000    " << "              " << "32. Minyak Kayu Putih 120ml    : Rp. 25.000    " << endl;
    cout << "33. Obat Flu Bodrex (10 tablet) : Rp. 18.000    " << "              " << "34. Termometer Digital         : Rp. 50.000    " << endl;
    cout << "35. Suplemen Daya Tahan         : Rp. 45.000    " << "              " << "36. Minyak Angin Cap Lang       : Rp. 12.000    " << endl;
    cout << "============================================================================================================" << endl;
}

void TampilanAwal()
{
    cout << "---------------------------------------------------------------" << endl;
    cout << "                           ALAMART                             " << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "                       SELAMAT DATANG                          " << endl;
    cout << "                     SELAMAT BERBELANJA                        " << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Tekan ENTER untuk melihat menu" << endl;
    cin.get(); // Untuk input enter
    tampilkanMenu();
}
struct pembayaran
{
    string namaPembeli;
    int totalPembelian;
    int diskon;
    int totalBayar;
    int nominalBayar;
    int kembalian;
    int totalPendapatan;
    int jumlahPembeli;
    vector<string> daftarNamaPembeli;
};
// Fungsi untuk menghitung diskon
int hitungDiskon(int total)
{
    if (total >= 50000 && total < 100000)
    {
        return total * 0.05;
    }
    else if (total >= 100000 && total < 250000)
    {
        return total * 0.10;
    }
    else if (total >= 250000 && total < 400000)
    {
        return total * 0.15;
    }
    else if (total >= 400000 && total < 600000)
    {
        return total * 0.20;
    }
    else if (total >= 600000)
    {
        return total * 0.25;
    }
    return 0;
}

void cetak_struk(pembayaran pem)
{
    cout << endl;
    cout << "================================================" << endl;
    cout << "               STRUK PEMBAYARAN                 " << endl;
    cout << "================================================" << endl;
    cout << "Nama Pembeli             : " << pem.namaPembeli << endl;
    cout << "Total Pembelian            : Rp. " << pem.totalPembelian << endl;
    cout << "Total yang harus dibayar   : Rp. " << pem.totalBayar << endl;
    cout << "Nominal Pembayaran         : Rp. " << pem.nominalBayar << endl;
    cout << "Kembalian                  : Rp. " << pem.kembalian << endl;
    cout << "================================================" << endl;
    cout << "Terima kasih telah berbelanja di ALAMART!" << endl;
    cout << "================================================" << endl
         << endl;
}
// Fungsi untuk menangani pembayaran
void prosesPembayaran(int keseluruhan)
{
    pembayaran pem;
    pem.totalBayar = keseluruhan;     // Mengisi total bayar setelah diskon
    pem.totalPembelian = keseluruhan; // Mengisi total pembelian

    while (true)
    {
        cout << endl
             << "Jumlah Bayar: Rp. " << keseluruhan << endl;
        cout << "Masukkan Nominal Bayar Anda : Rp. ";
        cin >> pem.nominalBayar;

        if (pem.nominalBayar > keseluruhan)
        {
            pem.kembalian = pem.nominalBayar - keseluruhan;
            cout << "Kembalian anda adalah : Rp. " << pem.kembalian << endl;
            cout << "Terima Kasih Telah Berbelanja di Alfamart, Kami tunggu pembelian anda selanjutnya" << endl;
            break;
        }
        else if (pem.nominalBayar < keseluruhan)
        {
            cout << "Uang anda kurang! Masukkan nominal yang benar!" << endl;
        }
        else
        {
            pem.kembalian = 0;
            cout << "Uang anda pas!" << endl;
            cout << "Terima Kasih Telah Berbelanja di Alfamart, Kami tunggu pembelian anda selanjutnya" << endl;
            break;
        }
    }

    // Cetak struk setelah pembayaran selesai
    cetak_struk(pem);
}

// Fungsi untuk mendapatkan harga berdasarkan pilihan
int getHarga(int pilihan, string &item)
{
    switch (pilihan)
    {
    case 1:
        item = "Indomie Goreng";
        return 3000;
    case 2:
        item = "Pop Mie Ayam";
        return 2400;
    case 3:
        item = "Taro Snack Net Seaweed";
        return 9100;
    case 4:
        item = "Chitato Sapi Panggang ";
        return 11900;
    case 5:
        item = "Es Krim Aice Strawberry  ";
        return 6000;
    case 6:
        item = "Corned Beef   ";
        return 24400;
    case 7:
        item = "Oreo Mini Original";
        return 5000;
    case 8:
        item = "Beng-Beng Wafer";
        return 2500;
    case 9:
        item = "SilverQueen Chunky Bar";
        return 12000;
    case 10:
        item = "Roti Tawar Sari Roti";
        return 13000;
    case 11:
        item = "Keripik Pisang Balado";
        return 7000;
    case 12:
        item = "Coklat Batang Ferrero ";
        return 25000;
    case 13:
        item = "Kin Yogurt Drink Blueberry";
        return 10000;
    case 14:
        item = "Coca-cola 390ml ";
        return 5000;
    case 15:
        item = "Teh Kotak Jasmine 300ml";
        return 4000;
    case 16:
        item = "Aqua Botol 600ml";
        return 3500;
    case 17:
        item = "Kopi Kapal Api Sachet ";
        return 1500;
    case 18:
        item = "Fruit Tea Apple 350ml";
        return 6000;
    case 19:
        item = "Jus Buah Tropicana";
        return 8000;
    case 20:
        item = "Lemon Tea Sachet";
        return 2000;
    case 21:
        item = "Lux Sabun Mandi 400mL";
        return 26400;
    case 22:
        item = "Detergen Rinso Cair 360ml ";
        return 10000;
    case 23:
        item = "Bayclin Pemutih 1L";
        return 9000;
    case 24:
        item = "Sikat Gigi Formula ";
        return 8000;
    case 25:
        item = "Pembersih Lantai SuperMop";
        return 15000;
    case 26:
        item = "Sabun Cuci Piring Sunlight";
        return 12500;
    case 27:
        item = "Sabun Muka Ponds Men";
        return 18000;
    case 28:
        item = "Pengharum Ruangan Stella";
        return 22000;
    case 29:
        item = " Cdr Vitamin C 10'S";
        return 61400;
    case 30:
        item = "Facewash Biore Acne Care";
        return 16000;
    case 31:
        item = "Masker KF94 (5 pcs)";
        return 20000;
    case 32:
        item = "Minyak Kayu Putih 120ml";
        return 25000;
    case 33:
        item = "Termometer Digital";
        return 18000;
    case 34:
        item = "Kayu Putih Cap Lang 120ml";
        return 50000;
    case 35:
        item = "Suplemen Daya Tahan ";
        return 45000;
    case 36:
        item = "Minyak Angin Cap Lang  ";
        return 12000;

    default:
        return 0;
    }
}

void closingan(pembayaran &pem)
{
    cout << "---------------------------------------------------------------" << endl;
    cout << "                           CLOSINGAN                           " << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Jumlah total pembeli hari ini : " << pem.jumlahPembeli << endl;
    cout << "Nama-nama pembeli: " << endl;
    for (const string &namaPembeli : pem.daftarNamaPembeli)
    {
        cout << "- " << namaPembeli << endl;
    }
    cout << "Terima kasih" << endl;
    cout << "---------------------------------------------------------------" << endl;
}
// Fungsi utama untuk proses belanja
void prosesBelanja(pembayaran &pem)
{
    int pilihan, jumlahBarang, harga, total = 0;
    pem.jumlahPembeli = 0;
    string item;
    char belanjaLagi;
    TampilanAwal();

    do
    {
        pem.jumlahPembeli++;
        total = 0; // Reset total untuk setiap pembeli baru
        cout << "Pembeli ke- " << pem.jumlahPembeli << endl;
        cout << "Masukkan nama pembeli: ";
        cin >> ws; // Membersihkan newline sebelum membaca input
        getline(cin, pem.namaPembeli);
        pem.daftarNamaPembeli.push_back(pem.namaPembeli);
        // push back berguna untuk menambahkan nilai ke dalam vector
        do
        {
            cout << "Masukkan nomor pilihan (0 untuk keluar): ";
            cin >> pilihan;

            if (pilihan >= 1 && pilihan <= 36)
            {
                harga = getHarga(pilihan, item);
                cout << "Jumlah barang: ";
                cin >> jumlahBarang;
                total += harga * jumlahBarang;
                cout << jumlahBarang << " " << item << " = Rp. " << harga * jumlahBarang << endl
                     << endl;
            }
            else if (pilihan != 0)
            {
                cout << "Pilihan anda salah, silakan coba lagi." << endl;
            }
        } while (pilihan != 0);

        cout << "================================================" << endl;
        cout << "Total Pembelian: Rp. " << total << endl;
        int diskon = hitungDiskon(total);
        int keseluruhan = total - diskon;
        pem.totalPendapatan += keseluruhan; // Memperbarui total pendapatan

        if (diskon > 0)
        {
            cout << "Anda mendapatkan diskon sebesar " << (diskon * 100 / total) << "%! Maka jumlah bayar anda adalah : Rp. " << keseluruhan << endl;
        }
        else
        {
            cout << "Anda tidak mendapatkan diskon, maka jumlah bayar anda : Rp. " << keseluruhan << endl;
        }

        // Proses pembayaran
        pem.totalPembelian = total;
        pem.diskon = diskon;
        pem.totalBayar = keseluruhan;
        prosesPembayaran(keseluruhan);

        cout << "Apakah ada pembeli lagi? (y/n): ";
        cin >> belanjaLagi;
    } while (belanjaLagi == 'y' || belanjaLagi == 'Y');
    cout << endl;
    closingan(pem);
}

int main()
{
    pembayaran pem;
    prosesBelanja(pem);
    return 0;
}
