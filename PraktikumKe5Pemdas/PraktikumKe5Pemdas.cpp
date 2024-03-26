#include <iostream>
using namespace std;

int luas; 

void prosedurluas(int p, int l)
{
	luas = p * l;

}
int fungsiluas(int p, int l)
{
	return p * l;
}



int main()
{
	int panjang, lebar;
	cout << "Masukan Panjang: ";
	cin >> panjang;
	cout << "Masukan Lebar: ";
	cin >> lebar;

	prosedurluas(panjang, lebar);
	cout << "Luas persegi panjang: " << luas << endl;
	cout << "Luasn persegi panjang dengan fungsi: " << fungsiluas(panjang, lebar) << endl;

	return 0;
}

