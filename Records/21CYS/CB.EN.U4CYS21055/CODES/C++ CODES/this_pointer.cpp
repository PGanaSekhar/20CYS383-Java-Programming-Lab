#include<iostream>
class student
{
	private:
		int mark;
	public:
		void print(int mark)//If we are passing the same variable as the argument to the function, we have to use the pointer.
		{
			this->mark=mark;//suppose the attribute variable and local variable are the same, inorder to differentiate it, we use a pointer.
			std::cout<<mark<<'\n';
		}
		
};
int main()
{
	student t,d;
	t.print(99);// As the member function is public, we can access it.
	d.print(97);
	//std::cin>>t.mark;
	//std::cout << t.mark;
	return 0;
}


