//This program calculates the customers monthly water bill.
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
  int waterdemand=35, galloncharge=20; 
  char unpaidbalance;            
  const double consumptioncharge=1.10;
  double previousbill, currentbill, gallons, bill;        
      
  cout<<"Please indicate your previous water meter reading?: ";
  cin>>previousbill;   

  cout<<"Please indicate your current  water meter reading?: ";
  cin>>currentbill;   
     
  cout<<"Did you pay your previous water bill? ('Y' or 'N'): ";
  cin>>unpaidbalance;        

  gallons=currentbill-previousbill;

  if ((unpaidbalance== 'Y')||(unpaidbalance== 'y'))       
  {
   bill=(consumptioncharge*gallons)+waterdemand;
  }
  else
  {
   bill=(consumptioncharge*gallons)+waterdemand+galloncharge; 
  }
  cout<< setprecision(2)<<fixed;
  cout<<"Your Water Bill for the month"<<" is "<<bill<<" Pesos";    
  
  getch ();  
  return 0;
}
