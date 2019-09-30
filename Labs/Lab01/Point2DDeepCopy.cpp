#include <iostream>
#include "Point2DDeepCopy.h"
using namespace std;

// Use initializer list to initialize class variables
Point2DDeepCopy::Point2DDeepCopy() : d_x(0.0), d_y(0.0)
	{
		ptr = new double;
	}


void Point2DDeepCopy::setInfo(double _x, double _y, double _p) 
	{
		d_x = _x;
		d_y = _y;
		*ptr = _p;
	}


void Point2DDeepCopy::DeepCopy(Point2DDeepCopy &dc){
	if(ptr == 0)
		ptr = new double;

	d_x = dc.d_x;
	d_y = dc.d_y;
	*ptr = *(dc.ptr);
}

void Point2DDeepCopy::displayInfo(){
	cout << "d_x = " << d_x << "  d_y = " << d_y  << "   Ptr = " << *ptr << endl;

}

Point2DDeepCopy::~Point2DDeepCopy(){
	delete ptr;
}
