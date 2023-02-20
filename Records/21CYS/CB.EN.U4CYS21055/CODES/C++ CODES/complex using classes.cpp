//sum of real and imaginary part of complex number
#include<iostream>
using namespace std;
class complex
{
	private:
		float re,img,y,z;
	public:
		void read()
		{
			cin>>re>>img;
			cout<<re<<"+"<<img<<"i"<<"\n";
		}
		void sum()
		{
			y=re+img;
			cout<<y<<"\n";
		}
};
int main()
{
	complex C[2];
	for(int i=0;i<2;i++)
	{
		C[i].read();
		C[i].sum();	
	}	
	return 0;
}

