#include <iostream>
using namespace std;
class buku
{
	string judul;

public:
	buku setJudul(string judul)
	{
		this->judul = judul;						//this (sebuah pointer yg berisi alamat sebuah object)
		return *this;			// chain function
	}
	string getJudul()
	{
		return this->judul;
	}

} bukunya;

int main()
{
	//bukunya.setJudul("Matematika");
	//cout << bukunya.getJudul();
	cout << bukunya.setJudul("Matematika").getJudul();		//chain function calls
	return 0;
}