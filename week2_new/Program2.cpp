#include<math.h>
#include<iostream>
#include "mergesort.h"

using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of Array"<<endl;
	cin>>n;
	cout<<"Enter elements"<<endl;
	int A[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	mergeSort(A, 0, n-1);     // sort the input array
	
	bool result = true;
	if(n<pow(10,9))
	{
		for(int i=0; i<n-1; i++)
	    {
		    if(A[i]>A[i+1])
		    {
			    result = false;
			    break;
	    	}
	    }
		if(result==true)
		{
		    for(int i=0; i<n; i++)
			{
			    cout<<A[i]<<' ';	
			}	
		} 
	}
	else 
	{
		result  = false;
	}

	if(result==true) cout<<endl<<"true"<<endl;     // means algorithm is working
	else cout<<endl<<"false"<<endl;                // means algorithm isn't working
	
	return 0;
}
