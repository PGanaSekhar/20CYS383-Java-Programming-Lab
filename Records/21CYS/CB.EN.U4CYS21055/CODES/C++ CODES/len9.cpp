#include<iostream>
using namespace std;
class student 
{
    private:
    int mark;
    public:
    void func()
     {
        mark=10;
        cout<<mark;
     }
};
int main()
{
    student s,T;
    s.func();
    T.func();
    return 0;
}