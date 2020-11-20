 #include <iostream>
 using namespace std;
 class vehicle
 {
   private:
   float mileage,cost,distance;
   int n;
   public:
   void input();
   void display();
   };
   void vehicle::input()
   {

   cout<<"Enter the mileage of vihical : ";
   cin>>mileage;

   cout<<"Enter the distance of one way: ";
   cin>>distance;

    cout<<"Enter the  cost of fuel      : ";
   cin>>cost;
   }
   void vehicle:: display()
   {
   cout<<"Cost paid by each member is  : ";
   n=2 *cost*distance/(mileage*4);

   cout<<n;
   cout<<"\n";
   
   if(n%5==0)
   {
     cout<<"True";
   }
   else
   {
     cout<<"false";
   }
 }
 int main()
 {
   vehicle v;
   v.input();
   v.display ();
   return 0;
 }

