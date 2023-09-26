#include <bits/stdc++.h>
using namespace std;

//chaging Access level of Base class members in Drived Class 
class Person{           //parent class
	public:
		string name;
		int age;
	public:
		void SetName(string word){
			name = word;
		}
		void SetAge(int val){
			age = val;
		}
};
class Student : private Person{    //child class
public:
	Person :: SetAge;
	Person :: name;
	int id;
	string college;
	void SetId(int val){
		id = val;
	}
	void SetCollege(string name){
		college = name;
	}
	void Display(){
		cout<<age<<" "<<id<<" "<<name<<endl;
	}
};
int main() {
    
    Student Anju;
    Anju.SetAge(18);
    //Anju.Display();
    Anju.id=527;
    Anju.name="Anju";
    Anju.Display();

}
