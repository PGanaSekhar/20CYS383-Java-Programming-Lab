#include<iostream>
using namespace std;
int main()
{
	int n,i,a[20];
	cout<<"Enter the number:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter array element:\n";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
