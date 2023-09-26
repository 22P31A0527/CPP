// Inheritance
/*   the derived class only allows inheritance if the varialbes are in public or protected modes of parent class,
     it doesn't allow private mode to access the values from the parent class */
/* Destructor can be called by default without deleting the object during inheritance*/
#include<iostream>
using namespace std;
class Human{                                //parent class
	public:                      
		int age;
		string name;
	public:
		void SetName(string myname){
			name = myname;
		}
		void SetAge(int val){
			age = val;
		}
};
class Student : public Human{                  //derived or child class
//derived clss only allows public and protected modes
//it changes the mode of the varaibles and functionsfrom the parent class into the given mode in the derived class
	public:                                                        
		int id;
		void SetId(int val){
			id = val;
		}
		void Display(){
			cout<<name<<" "<<age<<" "<<id<<endl;
		}
		void SetData(string myname, int val){
			name = myname;
			age = val;
		}
};
int main()
{
	Student obj1;
	obj1.id=99;
	obj1.SetData("Anju",18);
	/*obj1.name="Anju";          //the values assigned out side the class if they are in public access mode
	obj1.SetAge(18);*/
	obj1.Display();
	
	
}

