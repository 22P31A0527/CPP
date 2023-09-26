// friend function
#include<iostream>
using namespace std;
class Human{
	private:
		string name;
		int age;
	public:
		Human(string word, int val){          
			name = word;
			age = val;
		}
	friend class Student;
};
class Student{
	private:
		int marks;
	public:
		Student(int data){
			marks = data;
		}
		void Display(Human &h){
			cout<<h.name<<" "<<marks;
		}
};
int main()
{  
	Human obj1("Anju",18);
	Student obj2(100);
	obj2.Display(obj1);
	
}
