#include<iostream>
using namespace std;
void swap(const int *a,int *b) //If we use const, value in the original object will not change and compiler error will happen
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int x=6;
	int y=7;
	swap(&x,&y);
	cout<<x<<" "<<y;
	return 0;
}

