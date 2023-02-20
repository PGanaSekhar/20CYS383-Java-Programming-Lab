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
		void read(int l,int b)
		{
			this->l=l;//this operator happens if it is 2 variables
			this->b=b;
		}
		void Display()
		{
			cout<<Area()<<endl;
			
	    }
	    void compare(Triangle);
};
void Triangle::compare(Triangle t)
{
	if(this->Area()>t.Area())
	{
		cout<<this->Display()<<"is greater than"<<t.Display()<<endl;
	}
	else if
	{
		cout<<this->Display()<<"is less than"<<t.Display()<<endl;
	}
	else
	{
		cout<<this->Display()<<"is equal to"<<t.Display()<<endl;
	}
}

int main()
{
	Triangle T[2];
	int i,a,b;
	for(i=0;i<2;i++)
	{
	    cin>>a;
	    cin>>b;
		T[i].read(a,b);
		T[i].Display();
		
//		T[i].t=9;
//		cout<<T[i].t<<endl;	
	}
	T[0].compare(T[1]);
}
