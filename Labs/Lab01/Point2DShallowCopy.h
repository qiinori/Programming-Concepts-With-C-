class Point2DShallowCopy {
private:
 	double d_x;
   	double d_y;
public:
	Point2DShallowCopy();
	Point2DShallowCopy( double _x, double _y );

	double getDX();
	double getDY();

	void setDX(double _x);
	void setDY(double _y);

	void ShallowCopy(double _x, double _y);

	Point2DShallowCopy add( Point2DShallowCopy _oPoint );
	Point2DShallowCopy subtract( Point2DShallowCopy _oPoint );
	double dot( Point2DShallowCopy _oPoint );

	void displayInfo();

	~Point2DShallowCopy(){}
};
