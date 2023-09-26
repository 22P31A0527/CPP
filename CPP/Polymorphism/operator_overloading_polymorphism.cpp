// It is the type of runtime polymorphism
#include<bits/stdc++.h>
using namespace std;
class Complex{
	private:
		int x,y;
	public:
		Complex(int i=0, int j=0){
			x = i;
			y = j;
		}
		void print(){
			cout<<x<<"+"<<y<<"i"<<endl;
		}
		Complex operator+(Complex &obj){   //when we use + operator like a+b    
			Complex temp;
			temp.x = obj.x + x;
			temp.y = obj.y + y;
			return temp;
		}
		Complex add(Complex &obj){      // if we call it with add() method
			Complex temp;
			temp.x = obj.x + x;
			temp.y = obj.y + y;
			return temp;
		}
};
int main()
{
	Complex obj1(10,20);
	obj1.print();
	Complex obj2(5,5);
	obj2.print();
	Complex obj3 = obj1+obj2;
	obj3.print();
	Complex obj4 = obj2.add(obj3);
	obj4.print();
}
