#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char arr[5]="ello";
	char name='a';
	char *p=&name;
	char *ptr=arr;
	//address of string 
	//&arr[i] gives the address of each character in the array
	//(void*)&str[i] ensures proper address formatting
	cout<<arr<<"\n";
	cout<<ptr<<"\n";
	for(int i=0;i<5;i++)
	{
		cout<<(void*)&arr[i]<<"\n";
		
	}
	//printing address of character
	{
		cout<<(void*)&p<<"\n";
		
	}
	//printing character at the fourth index
	cout<<*(ptr+3);
	cout<<"\n";
	//printing address by using static caste
	char grade='a';
	char *pointer=&grade;
	cout<<static_cast<void*>(arr)<<endl;
}
	
