#include<iostream>
#include<cstring>
using namespace std;
int main()
{

int i,l,j,n=5;
char *str[5];
char temp[20];
char *t;
for(i=0;i<5;i++)
{
	cout<<"enter name"<<endl;
	cin>>temp;
	
	l=strlen(temp);
	str[i]=new char[l+1];

    strcpy(str[i],temp);
    
}
for(i=0;i<n-1;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
  		if(strcmp(str[i],str[j])>0)
  		{
  			t=str[i];
  			str[i]=str[j];
  			str[j]=t;
		  }
	  }
  }
  for(i=0;i<5;i++)
  {
  	cout<<str[i]<<endl;
  }
  for(i=0;i<5;i++)
  {
  	delete[]str[i];
  }
  return 0;
}
