#include <iostream>
using namespace std;

int main(){
    
    int n=4;
    char a[n];
    char b[n];
    int crt=0;
    int wrg=0;
    cin >> a;
    cin >> b;
    
    for (int i =0;i<n;i++){
        for (int j =0;j<n;j++){
            
            if((a[i]) == (b[j])){
                
                if(i == j){
                    crt++;
                    
                    
                }
                else{
                    wrg++;
                }
            }
        }
    }
    
    cout <<"The hint is : " <<  crt << "-" << wrg;
    
    return 0;
}