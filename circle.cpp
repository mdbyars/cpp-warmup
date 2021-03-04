// circle.cpp file
#include <iostream> 
#include "circle.h"
//#include "circle.h"

using namespace std;


Circle::Circle() {
	radius = 1;
}//Circle()

Circle::Circle(int rad) {
	if (rad > 0)
		radius = rad;
	else
		radius = 1;

}//Circle(int, int)

void Circle::setRadius(int rad) {
	if (rad > 0)
		radius = rad;
	else
		radius = 1;
}//setRadius

int Circle::getRadius() const
{
	return radius;
}//getRadius

int Circle::computeArea() const
{
	return radius * 6;
}//calculateArea

void Circle::displayCircle() const
{
	cout << endl << "radius" << getRadius();
	cout << ", area = " << computeArea() << endl;
}//displayCircle 

//	Circle onstream operator<<(ostream& output, const radius& D) {
//		output << "raidus : " << D.radius ;
//		return output;
	//}//onstream& operator

Circle Circle::operator+(const Circle& b) {
	Circle circle;
	circle.radius = this->radius + b.radius;
	return circle;
}

ostream& operator << (ostream& strm, const Circle& p) {
	strm << "radius:" << p.radius << ", area:" << p.computeArea();
	return strm;
}
//end 



/*// circle.cpp file
#include <iostream> 
#include "circle.h"
#include "build/circle.h"

using namespace std;


	Circle::Circle() {
		radius = 1;
	}//Circle()

	Circle::Circle(int rad) {
		if (rad > 0)
			radius = rad;
		else
			radius = 1;

	}//Circle(int, int)

	void Circle::setRadius(int rad) {
		if (rad > 0)
			radius = rad;
		else
			radius = 1;
	}//setRadius

	int Circle::getRadius() const
	{
		return radius;
	}//getRadius

	int Circle::computeArea() const
	{
		return radius * 6;
	}//calculateArea

	void Circle::displayCircle() const
	{
		cout << endl << "radius" << getRadius();
		cout << ", area = " << computeArea() << endl;
	}//displayCircle 

//	Circle onstream operator<<(ostream& output, const radius& D) {
//		output << "raidus : " << D.radius ;
//		return output;
	//}//onstream& operator

	Circle Circle::operator+(const Circle& b) {
		Circle circle;
		circle.radius = this->radius + b.radius;
		return circle;
	}

	ostream& operator << (ostream& strm, const Circle& p) {
		strm << "radius:" << p.radius << ", area:" << p.computeArea();
		return strm;
	}
//end 

*/
