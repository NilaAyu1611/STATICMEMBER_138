#include <iostream>
using namespace std;
class buku
{
	string judul;

public:
	buku setJudul(string judul)			//
	{
		this->judul = judul;						//this (sebuah variabel yg berisi alamat sebuah object)...... judul yang pertama itu dari membernya sedangkan yang kedua(setelah = itu yang diparameter)
		return *this;			// chain function
	}
	string getJudul()
	{
		return this->judul;
	}

} bukunya;				//objectnya

int main()
{
	//bukunya.setJudul("Matematika");
	//cout << bukunya.getJudul();
	cout << bukunya.setJudul("Matematika").getJudul();		//chain function calls
	return 0;
}