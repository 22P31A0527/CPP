// friend function
#include<iostream>
using namespace std;
class HumanBeing{
    private:
    	string name;
    	int age;
    public:
	   HumanBeing(string word,int val)
	   {
	   	 name=word;
	   	 age=val;
	   }
	   friend void Display(HumanBeing Anju);	
};
void Display(HumanBeing Anju)
{
	cout<<Anju.name<<" "<<Anju.age<<endl;
}
int main()
{
	HumanBeing Anju("Anju",18);
	Display(Anju);
}
