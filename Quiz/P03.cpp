#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	int majElement = INT_MAX, count = 0;
	for(int i=0; i<n; i++)
	{
		if(A[i]==majElement)
		{
			count++;
		}
		else 
		{
			count--;
		}
		
		if(count<=0)
		{
			majElement = A[i];
			count++;
		}
	}
	count = 0;
	for(int i=0; i<n; i++)
	{
		if(A[i]==majElement)
		{
			count++;
		}
	}
	if(count<n/2)
	{
		majElement = -1;
	}
	cout<<majElement;
	
	return 0;
}
