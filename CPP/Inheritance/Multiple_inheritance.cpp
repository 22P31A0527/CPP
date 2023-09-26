// Types of Inheritance
/*  1.single level inheritance , 2.multiple inheritance , 3.multilevel inheritance , 4.Hyrierchy inheritance,
    5.Hybrid inheritance 
    single inheritance: one child class will inherite the properties from one parent class
    mutliple inheritance: one child class will inherite the properties from two or more parent class
    multilevel inheritance: one child class will inherite the properties from one parent class which inherites the 
                            properties from grandparent class
    Hyrierchy inheritance: Various child classes will inherite the properties from one parent class
    Hybrid inheritance: Hyrierchy and multilevel
*/
//multiple inheritance
#include <bits/stdc++.h>
using namespace std;
class Father{
	public:
		string name;
		int age;
		Father(string myname, int val){
			name = myname;
			age = val;
		}
		
};
class Mother{
	public:
		int id;
		Mother(int data){
			id = data;
		}
		
};
class Child : public Father , public Mother{
	public:
		string college;
		Child(string myname , int val ,int data ,string col):Father(myname,val),Mother(data){
			college = col;
		}
		Display(){
			cout<<name<<" "<<id<<" "<<age<<" "<<college<<endl;
		}
};
int main()
{
	Child bidda("Anju",18,527,"ACET");
	bidda.Display();
}
