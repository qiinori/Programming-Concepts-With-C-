#include <iostream>
#include "Point2DDeepCopy.h"
using namespace std;

int main() {

	//Point2DDeepCopy dc1(10, 20, 30);

	Point2DDeepCopy dc1;
	dc1.setInfo(10, 20, 30);

	cout << "-----------------------------------------" << endl;
	cout << "- Original values of the created object -" << endl;
	cout << "-----------------------------------------" << endl;
	
	dc1.displayInfo();
	

	// Deep Copy Constructor : Compiler will not write the code. We have here to write the code manually. 
	// This assignment of two objects copies all member field values and the pointer and 
	// the memory it points to will be copied.
	// But the -- the field in both the original object and the copy 
	// will not then point to the same dynamically allocated memory.
	// The Deep copy constructor and assignment operator make deep copies.
	Point2DDeepCopy dc2;
	dc2.DeepCopy(dc1);



	cout << endl; cout << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "-          Deep copy of original object           -" << endl;
	cout << "---------------------------------------------------" << endl;
	dc2.displayInfo();

	cout << endl; cout << endl;

	system("PAUSE");
	return 0;
}
