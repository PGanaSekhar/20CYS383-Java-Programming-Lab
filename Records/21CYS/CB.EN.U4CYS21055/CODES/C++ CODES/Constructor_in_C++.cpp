//In case of normal member function, we need to call it...but in case of constructor it will invoke automatically (put into effect automatically)
// defining the constructor within the class
//A constructor will have exact same name as the class and it does not have any return type at all, not even void
#include <iostream>
using namespace std;

class student {
	int rno;
	char name[10];
	double fee;

public:
	student()//We are calling the object in public so that it is invoked automatically 
	{
		cout << "Enter the RollNo:";
		cin >> rno;
		cout << "Enter the Name:";
		cin >> name;
		cout << "Enter the Fee:";
		cin >> fee;
	}

	void display()
	{
		cout << endl << rno << "\t" << name << "\t" << fee;
	}
};

int main()
{
	student s; // constructor gets called automatically when
			// we create the object of the class
	s.display();

	return 0;
}

