//  Contructor
/*    constructor is same as method which is called by default when we create an object . Constructor name is a class name .
      it is not an return type ( it doesn't return anything ) , but it takes the arguements 
	  (  types of constructors are in constuctor_overloading ) */
#include<iostream>
using namespace std;
class Human{
	private:
		string name;
		int age;
	public:
		Human(string word , int val){
			name = word;
			age = val;
		}
		void GetData(){
			cout<<name<<" is a little girl with age "<<age<<endl;
		}
};


int main()
{
	Human obj1("Anju",2);   
	obj1.GetData();
	
}
