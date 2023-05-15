#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int);		//Construktor
	~angka();		//Destructor
	void cetakdata();
	void isiData();
};

//Definis member Function
angka::angka(int i) {		//Constructor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() {		//Destructor
	cout << endl;
	cetakdata();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

