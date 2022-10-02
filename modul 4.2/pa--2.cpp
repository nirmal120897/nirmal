/*Define a class to represent a bank account. Include the following members: 
1. Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account 
2. Member Functions 
-To assign values 
-To deposited an amount 
-To withdraw an amount after checking balance 
-To display name and balance*/

#include<iostream>
using namespace std;
class bank{
	private:
		int a ;
		double b;S
		char name[20];
		char type_of_account[20];
		public:
			void getinfo()
			{
				cout<<"enter the name of customer: ";
				cin>>name;
				cout<<endl<<"enter the Account number:";
				cin>>a;
				cout<<"Enter the balance amount in account:";
				cin>>b;
				cout<<"Enter the type of account: ";
				cin>>type_of_account;
				
				
			}
			void display()
			{
				cout<<"the name of customer is:"<<name;
				cout<<endl<<"The available balance in the account is:"<<b <<"Rs";
				
			}
			void deposite(int x)
			{
				cout<<endl<<"The Deposite amount is :"<<x;
			}
	    	void withdraw(int y)
	    	{
	    		cout<<endl<<"The withdraw amount is :"<<y;
			}
	
};
    int main()
    {
    	bank aa;
    	aa.getinfo();
    	aa.display();
    	aa.deposite(20000);
    	aa.withdraw(7000);
    	
	}






