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

void angka::cetakdata() {
	for (int i = 1;i <= panjang;i++) {
		cout << i << "=" << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1;i <= panjang;i++) {
		cout << i << "=";cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3);						//Contructor Dipanggil (nilai panjang = 3)
	angka* ptrBelajarcpp = new angka(5);		//Constructor Dipanggil
	delete ptrBelajarcpp;						//Destructor Dipanggil (cetak dulu,tampilkan datanya, baru dia menghpus arrnya)

	return 0;
}					//Donstructor Dipanggil