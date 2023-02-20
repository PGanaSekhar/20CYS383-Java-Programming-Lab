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
    student s;
    s.func();
    return 0;
}
//func is a member function for student
//wrapping of data and functions into a single unit which is called encapsulation