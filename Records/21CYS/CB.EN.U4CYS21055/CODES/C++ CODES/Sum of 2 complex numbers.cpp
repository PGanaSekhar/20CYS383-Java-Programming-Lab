#include<iostream>
using namespace std;
class Complex
{
	private:
		float re,img,y,z;
	public:
		void read()
		{
			cin>>re>>img;
			cout<<re<<"+"<<img<<"i"<<"\n";
		}
		float getreal() {
		return re;
		}
        float getimg() {
		return img;
		}
		void sum(Complex);
};
void Complex::sum(Complex d)
{
	cout<<"Real number addition= "<<this->getreal()+d.getreal();
	cout<<"Imaginary addition= "<<this->getimg()+d.getimg();
};
int main()
{
	Complex C[2];
	for(int i=0;i<2;i++)
	{
		C[i].read();	
	}	
	C[0].sum(C[1]);
	return 0;
}

