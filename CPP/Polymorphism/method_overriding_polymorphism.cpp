/*  Method overriding : same function names with same type of parameters present in different classes.
    Abstraction : It is a process of hiding the implimentaion or process
   virtual function : virtual functions only works on only heap , doesn't work on stack
   if it is a virtual function in the base class , no need to have the function in the  derived class.
   if it is a pure virtual function in the base class , the same function should be present at the derived class. */
/*#include<iostream>
using namespace std;
class Instrument{
	public:
		virtual void Make_sound(){
			cout<<"Instrument started playing\n";
		}
};
class Guitar{
	public:
		virtual void Make_sound(){
			cout<<"Guitar started playing\n";
		}
};
int main()
{
	
}*/
//if any class have one or more virtual function then it will be abstraction(process hiding).
#include<iostream>
using namespace std;
class Instrument{
	public:
	virtual	void make_sound()=0;
};
class Guitar : public Instrument{
	public:
		void make_sound()
		{
			cout<<"Guitar started playing"<<endl;
		}
};
int main()
{ 
  Instrument *i1=new Guitar();
  i1->make_sound();
	
}
