#include<bits/stdc++.h>
using namespace std;
void display_op(char a[3][3]){
	for(int i=0 ; i<3 ; i++){
		cout<<"\t\t";
		for(int j=0 ; j<3 ; j++){
		    cout<<" "<<a[i][j]<<" ";
			if(j<2) cout<<"|";
		}
		cout<<endl;
		if(i!=2)
		cout<<"\t\t----------"<<endl;
	}
}
void create_new(char a[3][3]){
	int l=49;
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			a[i][j] = l;
			l++;
		}
	}
}
bool score(char a[3][3]){
	if(a[0][0]==a[0][1] && a[0][1]==a[0][2]  && a[0][0]=='X' )   return 1;
	else if(a[0][0]==a[0][1] && a[0][1]==a[0][2]  && a[0][0]=='O' )   return 1;
	else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]=='X' ) return 1;
	else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]=='O' ) return 1;
	else if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]=='X')  return 1;
	else if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]=='O')  return 1;
	else if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]=='X')  return 1;
	else if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]=='O')  return 1;
	else if(a[0][1]==a[1][1] && a[1][1]==a[1][2] && a[0][1]=='X')  return 1;
	else if(a[0][1]==a[1][1] && a[1][1]==a[1][2] && a[0][1]=='O')  return 1;
	else if(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]=='X')  return 1;
	else if(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]=='O')  return 1;
	else if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]=='X')  return 1;
	else if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]=='O')  return 1;
	else if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[0][2]=='X')  return 1;
	else if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[0][2]=='O')  return 1;
	else return 0;
}
bool play_game(char a[3][3]){
	int s=0;
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			if(a[i][j]!='X' && a[i][j]!='O'){
				s=1;
				break;
			}
		}
	}
	return s;
}
void insert_pos(char a[3][3] , int pos , char ch){
	if(pos==1 && a[0][0]!='X' && a[0][0]!='O')  a[0][0]=ch;
	else if(pos==2 && a[0][1]!='X' && a[0][1]!='O')   a[0][1]=ch;
	else if(pos==3 && a[0][2]!='X' && a[0][2]!='O')  a[0][2]=ch;
	else if(pos==4 && a[1][0]!='X' && a[1][0]!='O') a[1][0]=ch;
	else if(pos==5 && a[1][1]!='X' && a[1][1]!='O') a[1][1]=ch;
	else if(pos==6 && a[1][2]!='X' && a[1][2]!='O') a[1][2]=ch;
	else if(pos==7 && a[2][0]!='X' && a[2][0]!='O') a[2][0]=ch;
	else if(pos==8 && a[2][1]!='X' && a[2][1]!='O') a[2][1]=ch;
	else if(pos==9 && a[2][2]!='X' && a[2][2]!='O') a[2][2]=ch;
	else if(pos>=1 && pos<=9){
		cout<<"In this position already one move exists \nEnter valid position: ";
		int p;
	    cin>>p;
	    insert_pos(a,p,ch);
	}
	else{
		cout<<"The position is invalid \n Enter position from 1 to 9 : ";
		int p;
	    cin>>p;
	    insert_pos(a,p,ch);
	}
	
}

int main()
{
	char a[3][3];
	create_new(a);
	while(1){
		cout<<"\t\tWELCOME TO TIC TAC TOE GAME \n\n";
		cout<<"\t 1 for PLAY \t 0 for exit \n\t Enter number : ";
		int t;
		cin>>t;
		int pos;
		if(t == 1){
			create_new(a);
			display_op(a);
			while(1){
				cout<<"position for 1st person :  ";
				cin>>pos;
				insert_pos(a,pos,'X');
				system("cls");
				display_op(a);
				if(score(a)){
					cout<<"1st person wins\n";
					break;
				}
				if(play_game(a) == false) {
					cout<<"No one wins ";
					break;
				}
				cout<<"\nposition for 2nd person :  ";
				cin>>pos;
				insert_pos(a,pos,'O');
				system("cls");
				display_op(a);
				if(score(a)){
					cout<<"\n2nd person wins\n";
					break;
				}	
				if(play_game(a) == false) {
					cout<<"No one wins ";
					break;
				}
			}
			cout<<"\n\n\n\n";
		}
		else if(t == 0){
			cout<<"Thank you\n";
			break;
		}
		else{
			cout<<"It is Invalid input enter either 1 or 0\n";
		}
	}
}  
