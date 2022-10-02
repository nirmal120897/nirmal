/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students.*/





#include<iostream>
using namespace std;

class student
{
	protected:
		int roll_no[4];
		int i;
		public:
			void getroll(){
				cout<<"Enter the roll of the students"<<endl;
				for(i=0;i<4;i++)
				{	
				cin>>roll_no[i];
		         }	
			}
};

class test:public student{
	protected:
		int mark_maths[4];
		int mark_phy[4];
		public:
			void getmarks()
        {
		cout<<"Enter the marks of maths sub:"<<endl;
		for(i=0;i<4;i++)
		{
			cin>>mark_maths[i];
		}
		cout<<"Enter the marks of physics sub:"<<endl;
		for(i=0;i<4;i++)
		{
			cin>>mark_phy[i];
		}
	    }
	void display(){
		
		for(i=0;i<4;i++)
		{
			cout<<"Roll no :"<<roll_no[i]<< "Marks in maths is :"<<mark_maths[i]<<"and marks in physics is :"<<mark_phy[i]<<endl;
		}
			
	}
	
};

class result:public test{
	public:
		void total()
		{
			cout<<"The total marks of two subject of each students is :"<<endl;
			for(i=0;i<4;i++)
			{
				cout<<"Roll no :"<<roll_no[i]<<"Total marks is :"<<mark_phy[i]+mark_maths[i]<<endl;
			}
		}
	
};

int main()
{
	result aa;
	aa.getroll();
	aa.getmarks();
	aa.display();
	aa.total();
}










