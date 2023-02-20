#include<iostream>
using namespace std;
class student 
{
    public:
    int mark;
};
int main()
{
    student t;
    t.mark=10;
    cout<<t.mark;
    return 0;
}
/*default access specifier for attributes is private.we should use access modifiers while using class instead of struct*/
//if we use public we can access attribute outside of the class otherwise we will get error
//we can access private attributes with the help of member functions.
