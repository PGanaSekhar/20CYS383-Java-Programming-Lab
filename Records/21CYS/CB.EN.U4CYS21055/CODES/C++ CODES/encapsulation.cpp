#include<iostream>
class student
{
	private:
		int mark;
	public:
		void print(int x)
		{
			mark=x;
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


