#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;			//Member yang bersifat Static itu bisa diakses langsung melalui class
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*Definisi Fungction*/ }
	static int getNim() { return nim; /*Definisi Fungction*/ }

	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;			//Akses melalui class (nilai=0)

void mahasiswa::setID() {		//method setID 
	id = ++nim;					//Ada operasi pengubah (++nim)
}

