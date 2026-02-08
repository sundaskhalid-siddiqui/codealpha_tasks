#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Authentication{
	private:
		string userName;
		string Password;
		public:
		void login(){
			string uName;
			string pass;
			cout<<"Enter User Name:";
			getline(cin,uName);
			cout<<"Enter Password:";
			getline(cin,pass);
			cout<<"----------------"<<endl;
		    ifstream  fin ((uName+ ".txt").c_str());
	if(fin.is_open()){
	if(getline(fin,userName) && getline(fin,Password)) {
			if(Password==pass){
			cout<<"You are being Logged in"<<endl;
		}	else
			cout<<"Invalid Password"<<endl;
					
		}
			
		
			fin.close();
			}else{
				cout<<"Wrong User Name"<<endl;
		}
			}
		void Registration(){
			cout<<"---------------------"<<endl;
			cout<<"Enter User Name:";
			getline(cin,userName);
			cout<<"Enter Your Password:";
			getline(cin,Password);
			cout<<"----------------------"<<endl;
			ofstream fout((userName + ".txt").c_str());
			if(fout.is_open()){
				fout<<userName<<"\n";
				fout<<Password<<"\n";
				fout.close();
			}else
			cout<<"Error in Data"<<endl;
			
				
			}
};
int main(){
	Authentication a1;
	while(true){
		int x;
		cout<<"Enter a 1 for Login"<<endl;
		cout<<"Enter a 2 for Registration"<<endl;
		cin>>x;
		cin.ignore();
		if(x==1){
			a1.login();
			}else if(x==2)
				a1.Registration();
		}	
}
