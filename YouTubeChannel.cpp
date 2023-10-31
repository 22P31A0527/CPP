#include<bits/stdc++.h>
using namespace std;
class Youtube_Channel{
	private:
		int subscribers_count = 0;
	public:
		string channel_name;
		string owner_name;
		vector<string> play_list;
	public:
		Youtube_Channel(string channel , string owner ){
			channel_name = channel;
			owner_name = owner;
		}
		void subscribe(){
			subscribers_count ++ ;
		}
		void unsubscribe(){
			if(subscribers_count != 0){
				subscribers_count -- ;
			}
		}
		void adding_playlist(string new_list){
			play_list.push_back(new_list);
		}
		void display(){
			cout<<"channel name : "<<channel_name<<endl;
			cout<<"owner name : "<<owner_name<<endl;
			cout<<"subscribers : "<<subscribers_count<<endl;
			cout<<"play list : ";
			for(int i=0 ; i<play_list.size() ; i++ ){
				cout<<play_list[i]<<endl;
			}
		}
};
int main()
{
	Youtube_Channel s1("coding","anjali");
	s1.subscribe();
	s1.unsubscribe();
	s1.adding_playlist("CPP introduction");
	s1.adding_playlist("CPP functions");
	s1.display();
}

#include<bits/stdc++.h>
using namespace std;
void modify(char* s,int i){
	if(s[i]=='\0' or s[i+1]=='\0'){
		return;
	}
	if(s[i]=='p',s[i+1]=='i'){
		int j=strlen(s)-1;
		while(j > i+1){
			s[j+2]=s[j];
			j--;
		}
		s[i]='3';
		s[i+1]='.';
		s[i+2]='1';
		s[i+3]='4';
		modify(s,i+4);
	}
	else{
		modify(s,i+1);
	}
}
int main()
{
	char s[100];
	cin>>s;
	modify(s,0);
	cout<<s;
}

