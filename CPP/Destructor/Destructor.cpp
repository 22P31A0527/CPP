// Destructor
/*   when the object is tried to delete, then the destructor is called by default , we no need to pass arguements*/
#include<iostream>
using namespace std;
class Human{
	private:
		string *name;
		int *age;
	public:
		//constructor
		Human(string word=" No name", int val=2){     
		    name = new string; 
			age = new int;      
			*name = word;
			*age = val;
		}
		
		//Destructor
		~Human(){
			cout<<*name<<"  "<<*age<<endl;
			/*delete name;
			delete age;*/
		}
};


int main()
{  
	Human *obj1=new Human(); 
	delete obj1;
	
}
