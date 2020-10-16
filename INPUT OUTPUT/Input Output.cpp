#include <iostream>
using namespace std;

int main()
{
	string nama;
	int nim;
	float uts,uas,rata_rata;
	
	cout << "DATA PRIBADI\n";

	cout << "Nama\t: ";
	cin >> nama; 
	cout << "NIM\t: "; 
	cin >> nim;
	
	cout << "\nINPUT NILAI\n";
	cout << "masukkan nilai uts\t: ";
	cin >> uts;
	cout << "masukkan nilai uas\t: ";
	cin >> uas;

	rata_rata = (uts + uas)/2;

	cout << "rata-rata nilai\t: " << rata_rata;

	return 0;	
}
