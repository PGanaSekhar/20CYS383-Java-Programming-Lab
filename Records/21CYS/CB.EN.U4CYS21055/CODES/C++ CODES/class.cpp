#include<iostream>
class student
{
	public:
		int mark; //If we are not giving any access specifier, the default specifier is Private and error will be displayed as the output as we cannot publicly access it
};
int main()
{
	student t;
	std::cin>>t.mark;
	std::cout << t.mark;
	return 0;
}


