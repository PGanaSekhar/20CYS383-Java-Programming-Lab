#include <iostream>
using namespace std;

class Triangle
{
    private:
    int height, base;
    float area;
    public:
    void getInput()
    {
        cin>>base;
		cin>>height;
    }

    void getArea()
    {
        area = 0.5*height*base;
    }

    int cmp(Triangle another);

};

int Triangle::cmp(Triangle another)
{
    if (this->area > another.area)
        cout<<"First triangle is greater";
    else if(another.area > this->area)
        cout<<"Second triangle is greater";
    else
        cout<<"Both are equal";
}

int main()
{
    Triangle t1, t2;
    t1.getInput();
    t2.getInput();
    t1.getArea();
    t2.getArea();
    int flag = t1.cmp(t2);

    //cout<<flag;
}
