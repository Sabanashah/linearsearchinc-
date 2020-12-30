#include<iostream>
using namespace std;
main()
{
	int i,n,search=0,a[5];
	for(i=0;i<5;i++)
	{
	cout<<"enter the elements";
		cin>>a[i];
	}
	cout<<" enetr the element for searching";
	cin>>n;
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			search=1;
			break;
		}
	}
	if(search==0)
	cout<<"not found";
	else
	cout<< "the element is found"<<n;
	
}
