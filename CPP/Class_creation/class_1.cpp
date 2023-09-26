#include<iostream>
using namespace std;
class Student{
	protected:
		string name,rollno; //the variables are declared in private mood,so we cant acccess or modify outside the class
    public:
		Student(string n, string r)
		{
			this->name=n;
			this->rollno=r;
		}
		void display()
		{
			cout<<name<<" "<<rollno<<endl;
		}
		void setname(string s)
		{
			name=s;
		}
};
int main()
{
	Student s1("Anju","527");
	Student s2("Sana","521");
	s1.display();
	s2.display();
	s1.name="ammu";
	s1.setname("Papu");  //we call a function setname to modify the name (name is a private atribute ,so we cant modify outside the fun)
	s1.display();
}
