#include <iostream>
using namespace std;

class Mahasiswa {
private:
	string nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "\nMasukkan Nama : ";
		cin >> nama;
		cout << "\nMasukkan Nilai : ";
		cin >> nilai;
	}
	void printData();
};