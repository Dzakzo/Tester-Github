#include <iostream>
using namespace std;

void pindah(int,int,int,int);
	
int main()
{

	int angka;
	cout << "     |            |            |     " << endl;
	cout << "     |            |            |     " << endl;
	cout << "     |            |            |     " << endl;
	cout << "     |            |            |     " << endl;
	cout << "     |            |            |     " << endl;
	cout << "     |            |            |     " << endl;
	cout << " ---------    ---------    --------- " << endl;
	cout << " Menara 1     Menara 2     Menara 3  " << endl;
	cout << "Masukkan jumlah Disk : "; cin >> angka;
	cout << endl;
	pindah(angka,1,3,2);
	system("PAUSE");
	return 0;
}

void pindah(int hitung, int n1, int n3, int n2) {
	if (hitung > 0) {
		pindah(hitung - 1,n1,n2,n3);
		cout << "Pindah Disc " << hitung << " dari menara " << n1 << " ke menara " << n3 << ".\n";
		pindah(hitung - 1,n2,n3,n1);
	}
}
