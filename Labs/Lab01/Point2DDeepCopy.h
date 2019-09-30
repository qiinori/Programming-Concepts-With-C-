class Point2DDeepCopy {
private:
 	double d_x;
   	double d_y;
	double *ptr;
public:
	// Default copy constructor
	Point2DDeepCopy();

	//Method set for three attributes of the class
	void setInfo(double _x, double _y, double _p );

	// Deep copy constructor developed manually
	void DeepCopy(Point2DDeepCopy &dc);

	// Printing the information of the objects
	void displayInfo();

	//Destructor of the class
	~Point2DDeepCopy(){}
};