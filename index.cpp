#include <iostream>
using namespace std;

struct data {
	int nim[10];
	string nama[10],alamat[10];
};
data *mhs, ad;

void input(data *mhs, int *banyak){
	cout << " - - - Input Data - - -" << endl << endl;
	cout << "Masukkan banyak mahasiswa : "; cin >> *banyak;
	for(int i=0; i<*banyak; i++){
		cout << "Mahasiswa ke- " << i+1 << endl;
		cout << "NIM\t\t: ";cin >> (*mhs).nim[i];
		cin.ignore();
		cout << "Nama\t\t: ";cin >> (*mhs).nama[i];
		cout << "Alamat\t\t: ";cin >> (*mhs).alamat[i]; 
		cout << endl;
	}
}

void output(data *mhs, int *banyak){
	cout << " - - - List Data Teregistrasi - - -" << endl << endl;

	for(int i=0; i<*banyak; i++){
		cout << "Mahasiswa ke- " << i+1 << endl;
		cout << "NIM\t\t: " << (*mhs).nim[i] << endl;
		cout << "Nama\t\t: " << (*mhs).nama[i] << endl;
		cout << "Alamat\t\t: " << (*mhs).alamat[i] << endl << endl;
	}
}

void search(data *mhs, int *banyak){
	int pilihcari,carinim;
	string carinama;

	cout << " - - - Cari Data - - -" << endl << endl;
	cout << "Menu:\n1. NIM\n2. Nama" << endl;
	cout << "pilih menu : ";cin >> pilihcari;
	switch(pilihcari){
		case 1:
			cout << "input nama NIM yang dicari : "; cin >> carinim;
			for(int i = 0; i<*banyak; i++){
				if((*mhs).nim[i] == carinim){
					cout << "Mahasiswa ke- " << i+1 << endl;
					cout << "NIM\t\t: " << (*mhs).nim[i] << endl;
					cout << "Nama\t\t: " << (*mhs).nama[i] << endl;
					cout << "Alamat\t\t: " << (*mhs).alamat[i] << endl;
					break;
				}
			}
			break;
		case 2:
			cout << "input nama NIM yang dicari : "; cin >> carinama;
			for(int i = 0; i<*banyak; i++){
				if((*mhs).nama[i] == carinama){
					cout << "Mahasiswa ke- " << i+1 << endl;
					cout << "NIM\t\t: " << (*mhs).nim[i] << endl;
					cout << "Nama\t\t: " << (*mhs).nama[i] << endl;
					cout << "Alamat\t\t: " << (*mhs).alamat[i] << endl;
					break;
				}
			}
			break;
	}
	
}

int main() {
	int menu,banyak;
	char ulang;
	mhs = &ad; // alamat ad ditaruh di mhs

do {
	system("cls");
	cout << "Menu : " << endl;
	cout << "1. Input Data\n2. Lihat Data\n3. Cari Data" << endl;
	cout << "Pilih menu : "; cin >> menu;
	switch(menu){
		case 1:
			system("cls");
			input(mhs,&banyak);
			break;
		case 2:
			system("cls");
			output(mhs,&banyak);	
			break;
		case 3:
			system("cls");
			search(mhs,&banyak);
			break;
	}
	cout << endl;
	cout << "Keluar Database ? ( Y / N )" << endl;
	cin >> ulang;
}while(ulang == 'n' || ulang == 'N');
	return 0;
}
