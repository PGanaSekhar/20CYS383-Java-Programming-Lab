#include <iostream>
using namespace std;

class cmb
{
    public:
    	//int n;
    	int lis[10];
};

int main(){

    cmb c;
    for(int i=0;i <10 ;i++){
        cin >>  c.lis[i];
    }
    //cout << "\n";
    for(int i=0;i<10;i++){
        cout <<  c.lis[i] << "\n";
    }

    return 0;
}
