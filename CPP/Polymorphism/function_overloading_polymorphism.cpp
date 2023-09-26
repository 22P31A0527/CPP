//   polymorphism
/* It is deivided into 2 types   1.compile polymorphism  2.runtime polymorphism
   compiletime polymorphism is divided into 2 types  1.funtion overloading   2.operator overloadinng
   runtime overloading is divided into 1 type  1.function overriding*/
//It is a type of compile time polymorphism
#include<bits/stdc++.h>
using namespace std;
class classA{
	public:
	void Display(int a, int b){
		cout<< a+b <<endl;
	}
	void Display(int a, int b, int c){
		cout<< a+b+c<<endl;
	}
};
int main()
{
	classA obj1;
	obj1.Display(10,20);
}
