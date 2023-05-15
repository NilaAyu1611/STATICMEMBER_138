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

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Sri Dadi");
	mahasiswa mhs2("Budi Jamtiko");
	mahasiswa::setNim(9);			//mengakses nim melalui static member function "setNim"
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4("Joko Wahono");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	
	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;		//mengakses nim melalui static member function "getNim"

	return 0;
}