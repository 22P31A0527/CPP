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
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			a[i][j] = ' ';
		}
	}
}
/*00 01 02
10 11 12
20 21 22*/
bool score(char a[3][3]){
	if(a[0][0]==a[0][1] && a[0][1]==a[0][2]  && a[0][0]!=' ' && a[0][1]!=' ' && a[0][2]!=' ')   return 1;
	else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]!=' ' && a[1][1]!=' ' && a[1][2]!=' ' ) return 1;
	else if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]!=' ' && a[2][1]!=' ' && a[2][2]!=' ')  return 1;
	else if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]!=' ' && a[1][0]!=' ' && a[2][0]!=' ')  return 1;
	else if(a[0][1]==a[1][1] && a[1][1]==a[1][2] && a[0][1]!=' ' && a[1][1]!=' ' && a[2][2]!=' ')  return 1;
	else if(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]!=' ' && a[1][2]!=' ' && a[2][2]!=' ')  return 1;
	else if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]!=' ' && a[1][1]!=' ' && a[2][2]!=' ')  return 1;
	else if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[0][2]!=' ' && a[1][1]!=' ' && a[2][0]!=' ')  return 1;
	else return 0;
}
bool play_game(char a[3][3]){
	int s=0;
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			if(a[i][j]==' '){
				s=1;
				break;
			}
		}
	}
	return s;
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
		int row_pos,col_pos;
		if(t == 1){
			create_new(a);
			display_op(a);
			while(1){
				cout<<"position for 1st person : \n ";
				cout<<"enter row position : ";
				cin>>row_pos;
				cout<<"enter column position : ";
				cin>>col_pos;
				a[row_pos][col_pos]='x';
				display_op(a);
				if(score(a)){
					cout<<"1st person wins\n";
					break;
				}
				if(play_game(a) == false) {
					cout<<"No one wins ";
					break;
				}
				cout<<"\nposition for 2nd person : ";
				cout<<"\nenter row position : ";
				cin>>row_pos;
				cout<<"enter column position : ";
				cin>>col_pos;
				a[row_pos][col_pos]='o';
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
			break;
		}
		else{
			cout<<"Invalid output\n";
		}
	}
}
