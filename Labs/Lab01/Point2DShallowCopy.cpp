#include <iostream>
#include "Point2DShallowCopy.h"
using namespace std;

// Use initializer list to initialize class variables
Point2DShallowCopy::Point2DShallowCopy() : d_x(3.0), d_y(0.0) {}

Point2DShallowCopy::Point2DShallowCopy(double _x, double _y) : d_x ( _x) , d_y ( _y) {}

double Point2DShallowCopy::getDX() {
	return d_x;
}

double Point2DShallowCopy::getDY(){
	return d_y;
}

void Point2DShallowCopy::setDX(double _x){
	d_x = _x;
}

void Point2DShallowCopy::setDY(double _y){
	d_y = _y;
}

void Point2DShallowCopy::ShallowCopy(double _x, double _y){
	d_x = _x;
	d_y = _y;
}

Point2DShallowCopy Point2DShallowCopy::add( Point2DShallowCopy _oPoint ) {
	Point2DShallowCopy res;
	res.d_x = d_x + _oPoint.d_x;
	res.d_y = d_y + _oPoint.d_y;
	return res;
}

Point2DShallowCopy Point2DShallowCopy::subtract( Point2DShallowCopy _oPoint ) {
	Point2DShallowCopy res;
	res.d_x = d_x - _oPoint.d_x;
	res.d_y = d_y - _oPoint.d_y;
	return res;
}

double Point2DShallowCopy::dot( Point2DShallowCopy _oPoint ) {
	double res = _oPoint.d_x * d_x + _oPoint.d_y * d_y;
	return res;
}

void Point2DShallowCopy::displayInfo(){
	cout << "d_x = " << d_x << "  d_y = " << d_y << endl;
}
