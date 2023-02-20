#include<iostream>
using namespace std;
class Triangle
{
	private:
		int l,b;
	public:
		int t;
		void read()
		{
			cin>>l;
			cin>>b;
		}
		void Area()
		{
			cout<<0.5*l*b<<"\n";
		}
};
int main()
{
	Triangle T[2];//Here we are using the structure of arrays to find the area of more than one triangle
	int i;
	T[i].t=9;
	cout<<T[i].t;
	for(i=0;i<2;i++)
	{
		T[i].read();
		T[i].Area();
	}
	
}

