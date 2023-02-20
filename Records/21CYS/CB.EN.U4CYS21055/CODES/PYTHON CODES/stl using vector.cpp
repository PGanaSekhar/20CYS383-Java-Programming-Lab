#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> a){
    vector <int> :: iterator i;
    for(i=a.begin(); i!=a.end(); i++){
        cout<<*i<<"\n";
    }
}

int main(){
    vector <int> b;
    b.push_back(3);
    b.push_back(4);
    display(b);
}
