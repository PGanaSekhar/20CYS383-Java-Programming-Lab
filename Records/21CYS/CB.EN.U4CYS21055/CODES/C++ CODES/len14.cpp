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
    void read ()
    {
        cin  >> l;
        cin  >> b;
    }
    void Display();
};
void  Triangle :: Display ()
/* :: -> scope resolution operator
  we can write any member function (public,private) outside of the class
  definition should be outside but prototype should be inside the class */
{
    cout << Area() << endl;
}
int main()
{
    Triangle T[2];
    int i;
    for(i=0;i<2;i++)
    {
        T[i].read();
        T[i].Display();
        T[i].t=9;
        cout<<T[i].t<<endl;
    }
return 0;
}