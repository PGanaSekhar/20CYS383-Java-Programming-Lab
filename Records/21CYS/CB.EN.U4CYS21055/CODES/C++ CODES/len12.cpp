#include<iostream>
using namespace std;
class Triangle
{
    private :
    int l;
    int b;
    public :
    int t;
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
        T[i].t=9;
        cout<<T[i].t<<endl;
    }
return 0;
}