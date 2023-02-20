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
    Triangle T;
    T.read();
    T.Area();
return 0;
}