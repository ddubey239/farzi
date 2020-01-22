#include<bits/stdc++.h>

using namespace std;

double bill(int units)
{
	if(units>250)
	{
		return (units-250)*1.5 + bill(250);
	}
	else if(units>150)
	{
		return (units-150)*1.2 + bill(150);
	}
	else if(units>50)
	{
		return (units-50)*0.75  + bill(50);
	}
    else
    {
    	return units*0.5;
	}
}
int main()
{
	int units;
	cout<<"Enter units of energy consumed"<<endl;
	cin>>units;
    double ans = bill(units);
	cout<<"Your electricity bill is Rs. "<<ans;
	
	return 0;	
}
