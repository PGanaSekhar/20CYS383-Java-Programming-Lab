#include<iostream>
using namespace std;
class Triangle
{
    private :
    int l;
    int b;
    public :
    void read ()
    {
        cin  >> l;
        cin  >> b;
    }
void Area ()
{
    cout << (0.5*l*b) << endl;
}
};
int main()
{
    Triangle T[2];
    int i;
    for(i=0;i<2;i++)
    {
        T[1].read();
        T[1].Area();
    }
return 0;
}