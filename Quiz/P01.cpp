#include <iostream>

using namespace std;

string one[] = { "", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ","thirteen ", "fourteen ", 
				 "fifteen ", "sixteen ", "seventeen ", "eighteen ","nineteen "
               };

string ten[] = { "","", "twenty ", "thirty ", "forty ","fifty ",
                 "sixty ", "seventy ", "eighty ", "ninety "
               };
string other[] = {"","thousand ","million ","billion ","trillion "};
string function(long long n)
{

    string temp;

        if(n % 100 < 20)
		{
            temp = one[n % 100];
            n /= 100;
        }
        else 
		{
            temp = one[n % 10];
            n /= 10;

            temp = ten[n % 10] + temp;
            n /= 10;
        }
        if(n == 0) 
        {
        	return temp;
		}
        
        return one[n] + "hundred " + temp;
}
string words(long long n)
{

    string ans;
    int index = 0;
    while(n > 0)
	{
        int num = n % 1000;
        if (num != 0)
		{
            ans = (function(num) + other[index])+ans;
        }
        index++;
        n /= 1000;
    }
    return ans;
}

int main()
{

    long long n;
    cin>>n;
    string s = words(n);
    cout<<s;

    return 0;
}
