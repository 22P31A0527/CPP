#include<iostream>
using namespace std;
template<class T>
class Pair{
	private:
		T first;
		T second;
	public:
		Pair(T a , T b){
			first = a;
			second = b;
		}
		T GetMAx(){
			return (first > second) ? first : second;
		}
};
int main()
{
	//Pair<int>p(10,20);
	int a=10,b=20;
	Pair p(a,b);
	cout<<p.GetMAx();
}
