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

mahasiswa::mahasiswa() {
	nim = 0;				//Pemberi nilai awal
	nama = "";
}

mahasiswa::mahasiswa(int iNim) {
	nim = iNim;
}

mahasiswa::mahasiswa(int iNama) {
	nim = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
	nim = iNim;					//pentingnya inisialisasi pemberi nilai awal, karena kita tidak tahu dialamat tsb sudah ada isi/belum (jadi harus di set. 0 kan/)
	nama = iNama;
}
void mahasiswa::cetak() {
	cout << endl << "Nim =" << nim << endl;
	cout << "Nama =" << nama << endl;
}

