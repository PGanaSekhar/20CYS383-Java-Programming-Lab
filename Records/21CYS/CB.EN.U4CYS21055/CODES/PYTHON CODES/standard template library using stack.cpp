#include<iostream>
#include<stack>
using namespace std;

void display(stack <int> a){
    while(!a.empty()){
        cout<<a.top();
        a.pop();
    }
}

int main(){
    stack <int> a;
    a.push(2);
    a.push(3);
    display(a);
    cout<<"\n";
    cout<<a.top();
    
}
