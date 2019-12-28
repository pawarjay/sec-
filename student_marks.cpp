#include<iostream>
using namespace std;

int main()
{
	int *p,n;
	int sum=0,i; 
	float avg=0.0;
	p=new int[n];
	 
	  cout<<"enter how many marks :"<<endl;
	  cin>>n;
	 cout<<"enter marks of student :"<<endl;
	 
	 for(i=0;i<n;i++)
	 {
	 		cin>>p[i];
	 }
	 for(i=0;i<n;i++)
	 {
	 	cout<<p[i]<<" ";
	 
	 }
	 for(int i=0;i<n;i++)
	 {
	 	sum=sum+p[i];
	 	avg=sum/n;
	 	
	 }
	 cout<<"sum is:"<<sum;
	 
	 //avg=sum/n;
	 
	 cout<<"Average is :"<<avg;
	 
	 delete []p;
}
