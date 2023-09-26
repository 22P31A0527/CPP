// constructor overloading 
/*  contructor bydefault called in several ways based on the arguements and type of arguements we passed 
    we have 3 types of constructors  . 1.default 2.paramaterised 3.copy*/
#include<iostream>
using namespace std;
class Human{
	private:
		string name;
		int age;
	public:
		//Default constructor
		Human(){            
			name = "No name";
			age = 0;
		}
		//paramaterised constructor
		Human(string word ){   //one parameter of type int
			name = word;
			age = 0;
		}
		Human( int val){   // one parameter of string type
			name = "No name";
			age = val;
		}
		Human(string word , int val){   //passing two parameters of int and string type
			name = word;
			age = val;
		}
		//copy constructor
		Human(Human &obj4){
			name = obj4.name;
			age = obj4.age;
		}
		
		void Display(){
			cout<<name<<"  "<<age<<endl;
		}
};


int main()
{
	Human obj1;   
	obj1.Display();
	Human obj2("Anjali");   
	obj2.Display();
	Human obj3(18);   
	obj3.Display();
	Human obj4("Anju",18);   
	obj4.Display();
	//copy
	Human obj5(obj4);
	obj5.Display();
	
}
