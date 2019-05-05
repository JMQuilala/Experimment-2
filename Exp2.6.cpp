//This program will generate the sum of all whole numbers starting frrom 1 up to a given number.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, n, sum = 0;

    cout << "Enter any positive integer: ";
    cin >> n;
    if (n<=0)
    {
    	cout<<"Thank you!";
    	
	}
	else
	{
	    for (int i = 1; i <= n; ++i) 
		{
        sum += i;        
        }
    cout << "The sum of all whole numbers from 1 to " << n << " is "<< sum;
    }
    getch();
    return 0;
}
