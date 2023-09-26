/*#include<iostream>
using namespace std;
void rec_print(int n,int m)
{
	if(n<=m)
	{
		cout<<n<<" ";
		rec_print(n+1,m);
	}
}
int main()
{
	int n;
	cin>>n;
	rec_print(n,n+10);
}
#include<bits/stdc++.h>
using namespace std;
int fact(int i, int n, int f)
{
	if(i>n) return f;
	else{
		f=f*i;
		fact(++i,n,f);
	}
}
int main()
{
	int n;
	cin>>n;
	int factorial=fact(1,n,1);
	cout<<factorial;
}
int main()
{
	int n;
	cin>>n;
	int q,r,c=0;
	while(n!=0){
		r=n%10;
		c++;
		n=n/10;
	}
	cout<<c;
}
#include<iostream>
using namespace std;
int count(int n)
{
	if(n==0) return 0;
	return 1+count(n/10);
}
int main()
{ 
    int n;
	cin>>n;
	cout<<count(n);
}*/
#include<bits/stdc++.h>
using namespace std;
int sum(int n, int *a, int i)
{
	if(i==n) return 0;
	return a[i]+sum(n,a,i+1);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int s=sum(n,a,0);
	cout<<s;
}

