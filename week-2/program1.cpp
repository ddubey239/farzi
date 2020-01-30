#include<iostream>
#include"program2.cpp"

using namespace std;

void merge(int *A, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 

    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = A[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = A[m + 1+ j]; 
  
    i = 0; 
    j = 0;
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            A[k] = L[i]; 
            i++; 
        } 
        else
        { 
            A[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        A[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        A[k] = R[j]; 
        j++; 
        k++; 
    }
}
void sort(int *A, int start, int end)
{
	if(start<end)
	{
		int mid = (start+end)/2;
		
		sort(A, start, mid);
		sort(A, mid+1, end);
		
		merge(A, start, mid, end);
	}	

}

int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}
    sort(A, 0, n-1);	
	for(int i=0; i<n; i++)
	{
		cout<<A[i]<<' ';
	}
	check(A, n);
	return 0;
}
