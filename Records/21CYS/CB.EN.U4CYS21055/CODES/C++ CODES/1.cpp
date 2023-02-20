/*#include<iostream.h>
using namespace std;

class array_details{
	public:
	int a[10];
	void readarray(){
	for  =(int i=0;i<10;i++){
		cin>>a[i];
	}	
	}
};

class function: public array_details()
*/
#include <iostream>
using namespace std;
class Animal
{ 
public:
   int legs = 4;
 };  
 class Dog : public Animal 
{ 
public: 
int tail = 1; 
};
  int main() 
{ 
Dog d; 
 cout << d.legs; 
 cout << d.tail; 
}
