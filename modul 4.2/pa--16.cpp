/*Write a program of to sort the array using templates*/

#include<iostream>
using namespace std;
template <typename T>
class A{
	private:
		T temp,i,j;
    	T *a;
		int n;
		public:
			
			void getdata(int no)
			{
		    
		     n=no;
		    delete[]a;
		    a=new T[n];
		     
			 for(i=0;i<n;i++)
			 {
			 	
			 	cin>>a[i];	
			 }
			}
			void sort()
			{ 
				for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
					{
			        	if(a[i]>a[j])
			    	{
                        temp=a[i];
						a[i]=a[j];
						a[j]=temp;					
			     	}
				
		    	}
					
					for(i=0;i<4;i++)
					{
						cout<<a[i]<<endl;
				    }
				
		        }	
		        
		}
};

 
 
 int main()
 {
 	int num;
 	cout<<"enter the no of data:";
 	cin>>num;
 	A <int>obj1;
 	A <char>obj2;
 	A <double>obj3;
 	cout<<"Enter integer data: "<<endl;
 	obj1.getdata(num);
 	cout<<"Enter character data :"<<endl;
 	obj2.getdata(num);
 	cout<<"Enter double data :"<<endl;
 	obj3.getdata(num);
 	
 	cout<<"Sorted integer :"<<endl;
 	obj1.sort();
 	cout<<"Sorted character :"<<endl;
 	obj2.sort();
 	cout<<"sorted double value :"<<endl;
 	obj3.sort();	
 	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
