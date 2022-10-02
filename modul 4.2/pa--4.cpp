/* Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/


#include<iostream>
using namespace std;

class cricketer {
	protected:
		int First_score=56;
		int second_score=89;
		int third_score=102;
		int fourth_score=150;
		char name_of_cricketer[20]="Nirmal_Umarvanshi";	
};

class batsman: cricketer{
	protected:
		int Total_runs;
		int Average_runs;
		int best_performance;
		public:
			
			void Totalrun()
			{
				cout<<"The total of runs: "<<(First_score+second_score+third_score+fourth_score)<<endl;
			}
			
			void average()
			{
				cout<<"The Average of runs: "<<(float)(First_score+second_score+third_score+fourth_score)/4<<endl;
			}
			
			void display()
			{
				cout<<"The name of batsman: "<<name_of_cricketer<<endl;
				cout<<"First match score: "<<First_score<<endl;
				cout<<"second match score: "<<second_score<<endl;
				cout<<"third match score: "<<third_score<<endl;
				cout<<"fourth match score: "<<fourth_score<<endl;
		    }
			
};

int main()
{
	
	batsman aa;
	aa.display();
	aa.Totalrun();
	aa.average();
	
	
}









