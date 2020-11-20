#include <iostream>
 using namespace std;

 int main()
 {
   float mileage,cost,distance;
   int n;

   cout<<"Enter the mileage of vihical : ";
   cin>>mileage;

   cout<<"Enter the distance of one way: ";
   cin>>distance;

    cout<<"Enter the  cost of fuel      : ";
   cin>>cost;
   
   cout<<"\n";
   
   cout<<"Cost paid by each member is  : ";
   n=2 *cost*distance/(mileage*4);

   cout<<n;
   cout<<"\n";
   
   if(n%5==0)
   {
     cout<<"\nTrue\n";
   }
   else
   {
     cout<<"\nfalse\n";
   }
 
   
 

   return 0;
 }

