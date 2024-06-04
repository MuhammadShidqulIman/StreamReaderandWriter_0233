#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamatkan Belajar di Prodi TI UMY" << endl;
		throw 0.5; //Melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
}
