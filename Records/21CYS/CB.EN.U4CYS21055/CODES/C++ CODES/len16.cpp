#include<iostream>
using namespace std;
class Triangle
{
    private :
    int l;
    int b;
    float Area()
    {
        return(0.5*l*b);
    }
    public :
    int t;
    void read (int l,int b)
    {
        this ->l=l;
        this ->b=b;
    }
    void Display();
};
void  Triangle :: Display ()
{
    cout << Area() << endl;
}
int main()
{
    Triangle T[2];
    int i,a,b;
    for(i=0;i<2;i++)
    {
        cin >> a;
        cin >> b;
        T[i].read(a,b);
        T[i].Display();
    }
return 0;
}
// problem
// write a program to find sum of real part and imaginary part of a complex number