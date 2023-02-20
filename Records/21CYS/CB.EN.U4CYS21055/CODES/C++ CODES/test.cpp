#include <iostream> 
using namespace std;

int main() 
{
	int choice,n,x,r;
	int g[20],j=0,i;
	cin>>choice>>n;
	for(i=0;i<100000;i++){
		int a=i/100;
		int t=i/10;
		int b=i%10;
		int c=i%10;
		g[j]=i;
		j=j+1;
	}
	for(i=0;i<n;i++){
		cout<<g[i]<<" ";
	}
	

	return 0; 
} 

