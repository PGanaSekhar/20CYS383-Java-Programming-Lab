#include<iostream>
//using namespace std; //A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it
int main()
{
	int a;
	std::cin>>a; // Here std is the C++ standard library namespace , :: is the scope resolution operator
	std::cout<<a;
	return 0;
}
