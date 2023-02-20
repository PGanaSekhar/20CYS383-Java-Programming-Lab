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
		void Display()
		{
			cout<<Area()<<endl;
		}
};
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
