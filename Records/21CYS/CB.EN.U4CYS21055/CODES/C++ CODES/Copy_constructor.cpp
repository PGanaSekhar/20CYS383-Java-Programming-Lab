// C++ program to demonstrate the working
// of a COPY CONSTRUCTOR
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x1, int y1)//Here we do the parameterised constructor first because we need to create an object to copy the constructor to another object variable
	{
		x = x1;
		y = y1;
	}

	// Copy constructor
	Point(const Point &p1)//Const keyword means that the source will not change The qualifier const tells the compiler that the function should not modify the argument .The 
//compiler will generate an error when this condition is violated
	{
		x = p1.x;
		y = p1.y;
	}

	int getX() { return x; }
	int getY() { return y; }
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here(Implicit)
	Point p2 = p1; // Copy constructor is called here(Copying the attributes of the first object p1 to the second object p2)

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX();
	cout<< ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX();
	cout<< ", p2.y = " << p2.getY();

	return 0;
}

