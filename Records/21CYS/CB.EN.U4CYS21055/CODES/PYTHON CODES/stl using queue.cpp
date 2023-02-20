#include<iostream>
#include<queue>
using namespace std;

void display(queue <int> a){
    queue <int> a1=a;
    while(!a1.empty()){
        cout<<a1.front();
        a1.pop();
        cout<<a1.empty();
    }
}

int main(){
    queue <int> b;
    b.push(3);
    b.push(4);
    display(b);
}
