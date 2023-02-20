#include<iostream>
using namespace std;
class Triangle
{
	private:
		int l,b;
		float Area()
		{
			return(0.5*l*b);
		}
	public:
		int t;
		void read()
		{
			cin>>l;
			cin>>b;
		}
		void Display();//We declare here as a prototype
};
void Triangle::Display()//if we want to create a function outside the class, but need to access the variables inside the class, we have to use the class object and access the function prototype
{
    
	cout<<Area()<<endl;
		
}
int main()
{
	Triangle T[2];
	int i;
	for(i=0;i<2;i++)
	{
		T[i].read();
		T[i].Display();
//		T[i].t=9;
//		cout<<T[i].t<<endl;	
	}
}
