/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function*/

#include<iostream>
 using namespace std;
 
 class person{
 	protected:
 		char student_name[100];
 		int student_age;
 		char teacher_name[100];
 		int teacher_age;
 		
 		public:
 			void info()
 			{
 		     cout<<"Enter the student name:";
			 cin>>student_name;
			 cout<<"Enter the teacher name:";
			 cin>>teacher_name;
			 cout<<"enter the age of student:";
			 cin>>student_age;
			 cout<<"Enter the age of teacher:";
			 cin>>teacher_age;		
			 }
 	
 };
 
  class teacher:public person{
  	private:
  		double salary;
  		public:
  			void salary1(){
			  
  	cout<<endl<<"enter the salary of the teacher:";
  	cin>>salary;
  }
  	void teacher1(){
  		
  	cout<<"THe name of the teacher :"<<teacher_name<<endl;
	cout<<"The age of the teacher  :"<<teacher_age<<endl;
	cout<<"the salary of the teacher:"<<salary<<"Rs"<<endl;	
	  }
  };
  
  class student: public person{
  	private:
  		float percentage;
  		public:
  			void percent()
  			{
  				cout<<endl<<"Enter the student percentage :";
  				cin>>percentage;
			  }
  	void student1()
  	{
  		cout<<"the name of the student:"<<student_name<<endl;
  		cout<<"The age of the student:"<<student_age<<endl;
  		cout<<"The percentage of the student :"<<percentage<<endl;	
	}

  };
  
  int main()
  {
  	student aa;
  	aa.info();
  	aa.percent();
  	aa.student1();
  	teacher bb;
  	bb.salary1();
  	
  	bb.teacher1();
  	
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
