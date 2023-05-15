#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;			//member variabel
	string nama;
public:											//Konstruktor dibuat sesuai kebutuhan (
	mahasiswa();					//Member yang tidak berparameter
	mahasiswa(int);					
	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();						//Method
};

