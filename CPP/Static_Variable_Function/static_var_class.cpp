//creation of class and object

/*#include<iostream>
using namespace std;

struct Student{
	public: 
	   string name="sana",rollno,branch,college;
	   int bc=100;
	   float per=99.54;
};

int main()
{
	Student s1,s2;
	cout<<s1.bc<<endl;
	cout<<s2.per<<endl;
	cout<<s2.bc<<endl;
	cout<<s1.name<<endl;
	return 0;
}*/

//default cons
/*#include<iostream>
using namespace std;

struct Student{
	public: 
	   string name="sana",rollno,branch,college;
	   int bc=100;
	   float per=99.54;
	   Student() // default constructrer
	   {
	   	 cout<<"hai"<<"\n";
	   }
};

int main()
{
	Student s1,s2;  //here we create two objects ,it defaultly calls the constructer to print the values we don't need to 
                    //send any args..
}*/


//parameterized constructer
/*#include<iostream>
using namespace std;

struct Student{
	public: 
	   string name,rollno,branch,college;
	   int bc;
	   float per;
	   Student(string n,string r,string br,string coll,int bc,float pe ) //parameterized constructer
	   {
	   	  this->name=n;
	   	  this->rollno=r;
	   	  this->branch=br;
	   	  this->college=coll;
	   	  this->bc=bc;
	   	  this->per=pe;
	   }
	   void display()
	   {
	   	cout<<name<<" "<<rollno<<" "<<branch<<" "<<college<<endl;
	   	cout<<bc<<endl;
	   	cout<<per<<endl;
	   }
};

int main()
{
	Student s1("sana","521","CSE","aditya",0,100.0);  
	s1.display();
	Student s2("sana","521","CSE","aditya",0,100.0);  
	s2.display();
}*/
/*#include<iostream>
using namespace std;

struct Student{
	public: 
	   string name,rollno,branch,college;
	   int bc;
	   float per;
	   Student(string n,string r,string br,string coll,int bc,float pe );
	   void display();
};//class end
void Student::display()
{
	    cout<<name<<" "<<rollno<<" "<<branch<<" "<<college<<endl;
	   	cout<<bc<<endl;
	   	cout<<per<<endl;
}
Student::Student(string n,string r,string br,string coll,int bc,float pe )
{
	      this->name=n;
	   	  this->rollno=r;
	   	  this->branch=br;
	   	  this->college=coll;
	   	  this->bc=bc;
	   	  this->per=pe;
}
int main()
{
	Student s1("sana","521","CSE","aditya",0,100.0);  
	s1.display();
}*/

#include<iostream>
using namespace std;

struct Student{
	public: 
	   static string eduins,course; //static variable ,,,,it provides same output for all objects we created 
	   string name,rollno,branch,college;
	   int bc;
	   float per;
	   Student(string n,string r,string br,string coll,int bc,float pe);//constructer`1
	   void display(); 
	   static void display_static()//static method
	   {
	      cout<<eduins<<" "<<course<<endl;
       }
};//class end

//defining static variable outside the class
string Student::eduins="Aditya";
string Student::course="CPP";

//accesing static variables in static method

void Student::display()//instance method 
{
	    cout<<name<<" "<<rollno<<" "<<branch<<" "<<college<<endl;
	   	cout<<bc<<endl;
	   	cout<<per<<endl;
	   	cout<< eduins<<" "<<course<<endl;   //static variables also printed
	   	//displaying static variables
	   	//cout<<eduins<<" "<<course<<endl;
}
Student::Student(string n,string r,string br,string coll,int bc,float pe )
{
	      this->name=n;
	   	  this->rollno=r;
	   	  this->branch=br;
	   	  this->college=coll;
	   	  this->bc=bc;
	   	  this->per=pe;
}
int main()
{
	Student s1("sana","521","CSE","aditya",0,100.0);  
	s1.display();
	//s1.display_static();
}

