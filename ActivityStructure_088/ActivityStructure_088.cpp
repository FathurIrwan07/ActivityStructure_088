#include <iostream>
using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	Mahasiswa mhs, mhs2;

	mhs.nim = "20220140088";
	mhs.umur = 20;
	mhs.nama = "Muhamad Fathur";
	mhs.alamat = "Wonosobo";

	cout << "Masukan NIM : ";
	cin >> mhs2.nim;
	cout << "Masukan Umur : ";
	cin >> mhs2.umur;
	cout << "Masukan Nama : ";
	cin >> mhs2.nama;
	cout << "Masukan Alamat : ";
	cin >> mhs2.alamat;

	cout << "NIM : " << mhs.nim;
	cout << "\nUmur : " << mhs.umur;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : " << mhs.alamat;

	cout << "\n\nNIM : " << mhs2.nim;
	cout << "\n\nUmur : " << mhs2.umur;
	cout << "\n\nNama : " << mhs2.nama;
	cout << "\n\nAlamat : " << mhs2.alamat;
	
}
