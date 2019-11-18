
#include <iostream>
using namespace std;

int main()
{
	int *iX, iY, *iZ;
	int *iArr;
	iX = NULL;
	iZ = NULL;
	iArr = NULL;
	iArr = new int[10];
	cout << iX << endl;
	cout << &iX << endl;
	iX = &iY;
	cout << iX << endl;
	*iX = 20;
	cout << *iX << ' ' << iY << endl;
	iY = 30;
	cout << *iX << ' ' << iY << endl;
	iZ = iX;
	iX = new int(40);
	cout << *iX << endl;
	cout << *iZ << endl;
	delete iX;
	iX = new int(100);
	delete iX;
	delete iArr;
	return 0;
}
