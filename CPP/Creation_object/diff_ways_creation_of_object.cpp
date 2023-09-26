//Different ways to create an object
#include<iostream>
using namespace std;
class Human{
	public:         //public access specifiers
		string name;
		void Intro(){
			cout<<"Hi I am "<<name<<endl;
		}
		void Introduction();
};
//scope resolution operator
void Human::Introduction(){
	cout<<"Hello "<<Human::name<<endl;
}
int main()
{
	Human obj1;   //stores in stack memory
	obj1.name="Anju";
	obj1.Intro();
	Human *obj2=new Human();  //stores in heap memory
	obj2->name="sana";
	obj2->Intro();
	Human (*obj3) =  &obj2;
	//(*obj3).Intro();
	(*obj3)->Intro();
    obj1.Introduction();
}
