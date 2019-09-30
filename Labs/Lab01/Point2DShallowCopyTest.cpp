#include <iostream>
#include "Point2DShallowCopy.h"
using namespace std;

int main() {

	Point2DShallowCopy pd1;
	pd1.ShallowCopy(10, 20);


	cout << "-----------------------------------" << endl;
	cout << "-         Original values         -" << endl;
	cout << "-----------------------------------" << endl;

	pd1.displayInfo();
	
	// Copy Constructor : Compiler writes the code. We don't need here to write code manually. 
	// This assignment copies all member field values and the pointer also is copied.
	// But the memory it points to will not be copied -- the field in both the original object and the copy 
	// will then point to the same dynamically allocated memory, which is not usually what you want.
	// The default copy constructor and assignment operator make shallow copies.
	Point2DShallowCopy pd2 = pd1; 

	cout << endl; cout << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "-         Shallow copy of original values         -" << endl;
	cout << "---------------------------------------------------" << endl;
	pd2.displayInfo();

	cout << endl; cout << endl;
	system("PAUSE");
	return 0;
}
