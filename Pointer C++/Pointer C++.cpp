#include<iostream>

using namespace std;

struct mahasiswa
{
		char nama[20];
		char NIM[20];
			int umur;
};
int main() 
{
	mahasiswa* ptr, A;
	ptr = &A;

	cout << "Biodata Mahasiswa Jurusan Teknik Informatika" << endl;
	cout << "\tUniversitas Negeri Surabaya" << endl;
	cout << "\tCreated By Reza Kurnia " << endl;
	cout << "===============================================" << endl;
	cout << "Nama \t\t:";
	cin>> ptr->nama;
	cout << "NIM \t\t:";
	cin >> ptr->NIM;
	cout << "Umur \t\t:";
	cin >> ptr->umur;

	cout << "Biodata yang anda masukkan" << endl;
	cout << "Nama \t\t:" << ptr->nama << endl;
	cout << "NIM \t\t:" << ptr->NIM << endl;
	cout << "Umur \t\t:" << ptr->umur << endl;

	cout << "Alamat dari data yang anda masukkan disimpan pada:" << endl;
	cout << "Nama \t\t:" << &A.nama << endl;
	cout << "NIM \t\t:" << &A.NIM << endl;
	cout << "Umur \t\t:" << &A.umur << endl;

	return 0;
}