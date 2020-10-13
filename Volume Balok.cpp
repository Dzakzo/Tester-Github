#include <iostream>
using namespace std;

// Menghitung volume balok

int main()
{
    int p;
    int l;
    int t;
    int volume;
    
    cout << "masukkan variabel p : ";
    cin  >>p;
    cout << "masukkan variabel l : ";
    cin  >>l;
    cout << "masukkan variabel t : ";
    cin  >>t;
    
    volume = p * l * t;
    
    cout << "panjang : " << p << endl;
    cout << "lebar : "   << l << endl;
    cout << "tinggi : "  << t << endl;
    cout << "\nVolume Balok : " << volume << endl;
    
    return 0;
}

