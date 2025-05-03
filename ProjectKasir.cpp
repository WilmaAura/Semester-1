#include <iostream>
#include <string>

int pilihan, jumlBarang, harga, diskon ,bayar ,keseluruhan ,kembalian ,total = 0; // Inisialisasi total
    string item;

using namespace std;

int main() {
    

    cout << "================================================" << endl;
    cout << "###                ALAMART                   ###" << endl;
    cout << "================================================" << endl << endl;
    cout << "================================================" << endl;
    cout << "                 MENU ALAMART                   " << endl << endl;
    cout << "1. Kecap Manis Special         : Rp. 18.500    " << endl;
    cout << "2. Indomie Goreng           50   : Rp. 3.000     " << endl;
    cout << "3. Gula Aren Bubuk Murni 200G  : Rp. 19.900    " << endl;
    cout << "4. Tepung Beras Ketan 500G     : Rp. 17.100    " << endl;
    cout << "5. Corned Beef                 : Rp. 24.400    " << endl;
    cout << "6. Abon Sapi 100G              : Rp. 12.500    " << endl;
    cout << "7. Sari Roti Tawar Gandum      : Rp. 17.600    " << endl;
    cout << "8. Khong Guan Mini             : Rp. 19.900    " << endl;
    cout << "9. Pop Mie Ayam                : Rp. 2.400     " << endl;
    cout << "10. Minyak Goreng 2L           : Rp. 36.500    " << endl;
    cout << "11. Lux Sabun Mandi 400mL      : Rp. 26.400    " << endl;
    cout << "12. Frisian Flag Putih 545G    : Rp. 19.200    " << endl;
    cout << "13. Cdr Vitamin C 10'S         : Rp. 61.400    " << endl;
    cout << "14. Torabika Kopi Creamy Latte : Rp. 18.500    " << endl;
    cout << "15. Pepsodent Pasta Gigi 225G  : Rp. 18.600    " << endl;
    cout << "16. Chitato Sapi Panggang      : Rp. 11.900    " << endl;
    cout << "17. Taro Snack Net Seaweed     : Rp. 9.100    " << endl;
    cout << "18. Kin Yogurt Drink Blueberry : Rp. 10.000    " << endl;
    cout << "19. Alfamart Spons Mandi       : Rp. 16.500    " << endl;
    cout << "20. Nabati Richeese Wafer Keju : Rp. 8.900    " << endl;
    cout << "21. Coklat SilverQueen Chunky  : Rp. 9.800    " << endl;
    cout << "22. Sikat Gigi Oralb 3'S       : Rp. 24.500    " << endl;
    cout << "23. Baygon 600ml               : Rp. 36.500    " << endl;
    cout << "24. Detergen Rinso Cair 360ml  : Rp. 10.000    " << endl;
    cout << "25. Coca-cola 390ml            : Rp. 5.000    " << endl;
    cout << "26. Permen Mentos              : Rp. 7.000    " << endl;
    cout << "27. Es Krim Aice Strawberry    : Rp. 6.000    " << endl;
    cout << "28. Facewash Biore Acne Care   : Rp. 16.000    " << endl;
    cout << "29. Google Play Card 150.000   : Rp. 150.000    " << endl;
    cout << "30. Kayu Putih Cap Lang 120ml  : Rp. 40.000    " << endl;
    cout << "================================================" << endl;

    do {
        cout << "Masukkan nomor pilihan (0 untuk keluar): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 30) {
            switch (pilihan) {
                case 1:
                    item = "Kecap Manis Special";
                    harga = 18500;
                    break;
                case 2:
                    item = "Indomie Goreng";
                    harga = 3000;
                    break;
                case 3:
                    item = "Gula Aren Bubuk Murni 200G";
                    harga = 19900;
                    break;
                case 4:
                    item = "Tepung Beras Ketan 500G";
                    harga = 17100;
                    break;
                case 5:
                    item = "Corned Beef";
                    harga = 24400;
                    break;
                case 6:
                    item = "Abon Sapi 100G";
                    harga = 12500;
                    break;
                case 7:
                    item = "Sari Roti Tawar Gandum";
                    harga = 17600;
                    break;
                case 8:
                    item = "Khong Guan Mini";
                    harga = 19900;
                    break;
                case 9:
                    item = "Pop Mie Ayam";
                    harga = 2400;
                    break;
                case 10:
                    item = "Minyak Goreng 2L";
                    harga = 36500; // Memperbaiki harga Minyak Goreng
                    break;
                case 11:
                    item = "Lux Sabun Mandi 400mL";
                    harga = 26400;
                    break;
                case 12:
                    item = "Frisian Flag Putih 545G";
                    harga = 19200;
                    break;
                case 13:
                    item = "Cdr Vitamin C 10'S";
                    harga = 61400;
                    break;
                case 14:
                    item = "Torabika Kopi Creamy Latte";
                    harga = 18500;
                    break;
                case 15:
                    item = "Pepsodent Pasta Gigi 225G";
                    harga = 18600;
                    break;
                case 16:
                    item = "Chitato Sapi Panggang";
                    harga = 11900;
                    break;
                case 17:
                    item = "Taro Snack Net Seaweed";
                    harga = 9100;
                    break;
                case 18:
                    item = "Kin Yogurt Drink Blueberry";
                    harga = 10000;
                    break;
                case 19:
                    item = "Alfamart Spons Mandi";
                    harga = 16500;
                    break;
                case 20:
                    item = "Nabati Richeese Wafer Keju";
                    harga = 8900;
                    break;
                case 21:
                    item = "Coklat SilverQueen Chunky";
                    harga = 9800;
                    break;
                case 22:
                    item = "Sikat Gigi Oralb 3'S";
                    harga = 24000;
                    break;
                case 23:
                    item = "Baygon 600ml";
                    harga = 36500;
                    break;
                case 24:
                    item = "Detergen Rinso Cair 360ml";
                    harga = 10000;
                    break;
                case 25:
                    item = "Coca-cola 390ml";
                    harga = 5000;
                    break;
                case 26:
                    item = "Permen Mentos";
                    harga = 7000;
                    break;
                case 27:
                    item = "Es Krim Aice Strawberry";
                    harga = 6000;
                    break;
                case 28:
                    item = "Facewash Biore Acne Care";
                    harga = 16000;
                    break;
                case 29:
                    item = "Google Play Card 150.000";
                    harga = 150000;
                    break;
                case 30:
                    item = "Kayu Putih Cap Lang 120ml";
                    harga = 40000;
                    break;
            }

            cout << "Jumlah barang: ";
            cin >> jumlBarang;
            total += harga * jumlBarang; // Hitung total
            cout << jumlBarang << " " << item << " = Rp. " << harga * jumlBarang << endl << endl;
        } else if (pilihan != 0) {
            cout << "Pilihan anda salah, silakan coba lagi." << endl;
        }
    } while (pilihan != 0);

    cout << "================================================" << endl;
    cout << "Total Pembelian: Rp. " << total << endl;

        if (total >= 50000 && total < 100000)
    {
        diskon = total * 0.05;
        keseluruhan = total-diskon;
        cout << "Anda mendapatkan diskon sebesar 5%! Maka jumlah bayar anda adalah : Rp. " << keseluruhan << endl;
    }
    else if (total >= 100000 && total < 250000)
    {
        diskon = total * 0.10;
        keseluruhan = total-diskon;
        cout << "Anda mendapatkan diskon sebesar 10%! Maka jumlah bayar anda adalah : Rp. " << keseluruhan<< endl;
    }
    else if (total >= 250000 && total < 400000)
    {
        diskon = total * 0.15;
        keseluruhan = total-diskon;
        cout << "Anda mendapatkan diskon sebesar 15%! Maka jumlah bayar anda adalah : Rp. " << keseluruhan<< endl;
    }
    else if (total >= 400000 && total < 600000)
    {
        diskon = total * 0.20;
        keseluruhan = total-diskon;
        cout << "Anda mendapatkan diskon sebesar 20%! Maka jumlah bayar anda adalah : Rp. " << keseluruhan<< endl;
    }
     else if (total >= 600000 )
    {
        diskon = total * 0.25;
        keseluruhan = total-diskon;
        cout << "Anda mendapatkan diskon sebesar 25%! Maka jumlah bayar anda adalah : Rp. " << keseluruhan<< endl;
    }
    else
    {
        keseluruhan = total;
        cout << "Anda tidak mendapatkan diskon, maka jumlah bayar anda : Rp." << keseluruhan<< endl;
    }

     while (true) {
     cout << endl << "Jumlah Bayar: Rp. " << keseluruhan << endl;
     cout << "Masukkan Nominal Bayar Anda : Rp. "; cin >> bayar; cout << endl;

     if (bayar > keseluruhan)
     {
         kembalian = bayar - keseluruhan;
         cout << "Kembalian anda adalah : Rp. " << kembalian;
         cout << endl << "Terima Kasih Telah Berbelanja di Alfamart, Kami tunggu pembelian anda selanjutnya" << endl;
         break;
     }
     else if (bayar < keseluruhan)
     {
         cout << "Uang anda kurang! Masukkan nominal yang benar!" << endl;
     }
     else if (bayar = keseluruhan)
     {
         cout << "Uang anda pas!";
         cout << endl << "Terima Kasih Telah Berbelanja di Alfamart, Kami tunggu pembelian anda selanjutnya" << endl;
         break;
     }
    }
    return 0;
}
