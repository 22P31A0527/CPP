// Multilevel inheritance
#include <bits/stdc++.h>
using namespace std;
class GrandFather{
	public:
		string surname;
		int property;
		GrandFather(string myname, int val){
			surname = myname;
			property = val;
		}
		
};
class Father:public GrandFather{
	public:
		int pocket_money;
		Father(string myname , int val , int data): GrandFather(myname,val){
			pocket_money = data;
		}
		
};
class Child :  public Father{
	public:
		string name,college;
		Child(string myname,string name, int val ,int data ,string col):Father(myname,val,data){
			this->name = name;  
			//this is used to point to the name,when the 2 arguement names we are passing and assigning are same name
			college = col;
		}
		Display(){
			cout<<surname<<" "<<name<<" "<<property<<" "<<pocket_money<<" "<<college<<endl;
		}
};
int main()
{
	Child bidda("Noolu","Anjali",1000000,50,"ACET");
	bidda.Display();
}
