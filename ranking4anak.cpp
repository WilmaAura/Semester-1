#include <iostream>
using namespace std;

int bil1, bil2, bil3, bil4;

int main() {
    

    cout << "Urutan ranking dari 4 anak" << endl;
    cout << "Anak pertama = "; cin >> bil1;
    cout << "Anak kedua = "; cin >> bil2;
    cout << "Anak ketiga = "; cin >> bil3;
    cout << "Anak keempat = "; cin >> bil4;

    // Menentukan urutan dari terkecil ke terbesar menggunakan if-else dengan perbandingan "<"
    if (bil1 < bil2) 
    {
        if (bil1 < bil3) 
        {
            if (bil1 < bil4) 
            {
                cout << bil1 << ", ";
                if (bil2 < bil3) 
                {
                    if (bil2 < bil4) 
                    {
                        cout << bil2 << ", ";
                        if (bil3 < bil4) 
                        {
                            cout << bil3 << ", " << bil4;
                        } else 
                        {
                            cout << bil4 << ", " << bil3;
                        }
                    } else 
                    {
                        cout << bil4 << ", " << bil2;
                    }
                } 
                else 
                {
                    cout << bil3 << ", ";
                    if (bil2 < bil4) 
                    {
                        cout << bil2 << ", " << bil4;
                    } else 
                    {
                        cout << bil4 << ", " << bil2;
                    }
                }
            } 
            else 
            {
                cout << bil4 << ", ";
                if (bil2 < bil3) 
                {
                    cout << bil2 << ", " << bil3;
                } 
                else 
                {
                    cout << bil3 << ", " << bil2;
                }
            }
        } 
        else 
        {
            cout << bil3 << ", ";
            if (bil1 < bil4) 
            {
                cout << bil1 << ", ";
                if (bil2 < bil4) 
                {
                    cout << bil2 << ", " << bil4;
                } 
                else 
                {
                    cout << bil4 << ", " << bil2;
                }
            } 
            else 
            {
                cout << bil4 << ", ";
                if (bil1 < bil2) {
                    cout << bil1 << ", " << bil2;
                } else {
                    cout << bil2 << ", " << bil1;
                }
            }
        }
    } 
    
    else 
    {
        if (bil2 < bil3) 
        {
            if (bil2 < bil4) 
            {
                cout << bil2 << ", ";
                if (bil1 < bil3) 
                {
                    if (bil1 < bil4) 
                    {
                        cout << bil1 << ", ";
                        if (bil3 < bil4) 
                        {
                            cout << bil3 << ", " << bil4;
                        } 
                        else 
                        {
                            cout << bil4 << ", " << bil3;
                        }
                    } 
                    else 
                    {
                        cout << bil4 << ", " << bil1;
                    }
                } 
                else 
                {
                    cout << bil3 << ", ";
                    if (bil1 < bil4) 
                    {
                        cout << bil1 << ", " << bil4;
                    } 
                    else 
                    {
                        cout << bil4 << ", " << bil1;
                    }
                }
            } 
            else 
            {
                cout << bil4 << ", ";
                if (bil1 < bil3) 
                {
                    cout << bil1 << ", " << bil3;
                } 
                else 
                {
                    cout << bil3 << ", " << bil1;
                }
            }
        } 
        else 
        {
            cout << bil3 << ", ";
            if (bil2 < bil4) 
            {
                cout << bil2 << ", ";
                if (bil1 < bil4) 
                {
                    cout << bil1 << ", " << bil4;
                } 
                else 
                {
                    cout << bil4 << ", " << bil1;
                }
            } 
            else 
            {
                cout << bil4 << ", ";
                if (bil2 < bil1) 
                {
                    cout << bil2 << ", " << bil1;
                } 
                else 
                {
                    cout << bil1 << ", " << bil2;
                }
            }
        }
    }

    cout << endl;
    return 0;
}
