#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void display(list <int> a){
    list <int> :: iterator i;
    for(i=a.begin();i!=a.end();i++){
        cout<<*i;
    }
}

int main(){
    list <int> b;
    b.push_back(4);
    b.push_front(5);
    b.push_back(6);
    display(b);
}
