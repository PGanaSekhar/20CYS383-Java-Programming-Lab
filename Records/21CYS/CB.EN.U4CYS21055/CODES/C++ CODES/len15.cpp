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
    void read (int a1,int a2)
    {
        l=a1;
        b=a2;
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
