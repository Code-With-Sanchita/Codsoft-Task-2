#include<iostream>
using namespace std;
class cal{
	private:
		double a,b;
	public:
		void input(){
			cout<<"Enter 1st number:"<<endl;
			cin>>a;
			cout<<"Enter 2nd number:"<<endl;
			cin>>b;
		}
			
			void add(){
				cout<<"Answer is :"<<a+b<<endl;
			}     
			void sub(){
				cout<<"Answer is :"<<a-b<<endl;
			}
			void mul(){
				cout<<"Answer is :"<<a*b<<endl;
			}
			void div(){
				if(b!=0)
				cout<<"Answer is :"<<a/b<<endl;
				else
				cout<<"Error! Division by Zero!";
			}
	};
	
int main(){
	cal c;
	int choice;
	cout<<"Simple Calculator"<<endl;
	do{
	    cout<<".............................................." <<endl;
	     cout<< "you want Addition press 1"<<endl;
	     cout<< "you want Subtraction press 2"<<endl;
	     cout<< "you want Multiplication press 3"<<endl;
	     cout<< "you want division press 4"<<endl;
	     cout<< "you want Exit press 5"<<endl;
	     cout<< "Enter(1-5)"<<endl;
	     cout<<"enter your choice:";
	     cin>>choice;
	     cout<<"................................................."<<endl;
	     if(choice >= 1 && choice <=4)
	     c.input();
	     
				switch(choice){
					case 1:
						c.add();
						break;
				    case 2:
						c.sub();
						break;
					case 3:
						c.mul();
						break;
					case 4:
						c.div();
						break;
					case 5:
						cout<<"Exiting calculatar"<<endl;
						break;
					default:
						cout<<"Invalid choice! please try again"<<endl;
					}
						
	
	
			}while(choice !=5);

 return 0;
}

