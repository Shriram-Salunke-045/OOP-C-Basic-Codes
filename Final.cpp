#include<iostream>
#include<string.h>
using namespace std;
class a        //base class
{
 protected :
     string name;
     int id;
    int date,month,year;
    char blood_group[5];
};
class b          //base class
{
 protected :
    float height,weight;
};
class c         //base class
{
 protected :
    char  insurance_id[10] ;
    string address;
};
class employee:public a,public b,public c   //derived class
{

     long long int mobile_no;
     char driving_id[20];
 public:
    void read_data();
    void display();
    int insert_data(employee e[],int n);
    void edit_data(employee e[],int n);
    int delete_data(employee e[],int n);
    void search_data(employee e[],int n);
};


void employee::read_data()
{
             int c;
             cout<<"\nEnter the id of employee : ";
             cin>>id;
    //validation for name
             cout<<"\nEnter the name of employee : ";
             cin.ignore();
             getline(cin,name);

    //validation for date of birth
              do
                 {
                cout<< "\nEnter date of birth in dd/mm/yy format :- ";
                cin>>date>>month>>year;

                if ( month == 2 && ( date < 1 || date > 28))
                {
                    cout<< "\nThe date entered is invalid \n\n";
                    c=0;
                }

                 else if (( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) && ( date < 1 || date > 31) )
                {
                    cout<< "\nThis month has only 31 days, Please enter a date between 1 to 31\n\n";
                    c=0;
                }


                 else if (( month == 4 || month == 6 || month == 9 || month == 11 ) && (date < 1 || date > 30) )
                {
                    cout<< "\nThis month has only 30 days, Please enter a date between 1 to 30\n\n";
                    c=0;
                }

                 else if ( year < 1990 || year > 2002)
                {
                    cout<< "\nThe entered year of birth is not valid for an employee \n\n";
                    c=0;
                }

                else
                    c=1;


                }while(c==0);

    //blood group
  char x;
do
    {

      cout<<"\nEnter Blood group of employee : ";
                cin>>x;

       if(x=='A'||x=='B'||x=='AB'||x=='O')
      {
      cout<<"Blood group is valid"<<endl;
      c=1;
      }
      else{
        cout<<"Blood group not valid";
        c=0;
        }

}while(c==0);
    //validation for height
                do
               {
                cout<<"\nEnter Height of employee(in feet) : ";
                cin>>height ;
                if (height<0)
                {
                    cout<< "\nHeight cannot be negative\n";
                    c=0;
                }
                else
                    c=1;
               }while(c==0);


    //validation for weight
                 do
                   {
                    cout<<"\nEnter Weight of employee (in kg) : ";
                    cin>>weight;
                    if (weight<0)
                    {
                        cout<< "\nWeight cannot be negative\n";
                        c=0;
                    }
                    else
                        c=1;
                   }while(c==0);

    //validation for address
                     cout<<"\nEnter the Address of employee : ";
                     cin.ignore();
                     getline(cin,address);

    //for insurance id
                     cout<<"\nEnter the insurance id of employee : ";
                     cin>>insurance_id;

    //validation for mobile number
                      do
                       {
                        cout<<"\nEnter the mobile no. of employee : ";
                        cin>>mobile_no;
                        if (mobile_no<6999999999 || mobile_no>9999999999)
                        {
                            cout<<"\nmobile no. is not valid ........plz enter valid mobile no. with 10 digits\n";
                            c=0;
                        }
                        else
                            c=1;
                       }while(c==0);

         //for driving license number
                     cout<<"\nEnter the driving license number of employee : ";
                     cin>>driving_id;

   }


 int employee::insert_data(employee e[20],int n)
   {
         int k,i;
         cout<<"\nEnter the no. of entries you want to add : ";
         cin>>k;
         while(n + k > 20)        //checking n+k is greater than 20
            {
            cout<<"\nDatabase capacity exceeded\n";
            cout<<"Enter the no. of entries to insert less than"<<k;
            cin>>k;
            }
         for(i=0;i<k;i++)
            {
             e[i+n].read_data();
            }
        cout<<"\nThe new entry inserted successfully";
        return n+k;
    }

 void employee::edit_data(employee e[20],int n)
 {
     int key,i,ch,c,flag=0;
     cout<<"\nEnter the ID of employee you wants to edit: ";
     cin>>key;
     for(i=0;i<n;i++)
    {
        if(key==e[i].id)            //checking whether the entry is present or not
       {
           flag=1;
        cout<<"\nDo you wants to change the employee name(0/1) : ";
        cin>>ch;
               if(ch==1)
                   {
                    cout<<"\nEnter the name of employee : ";
                   cin.ignore();
                   getline(cin,name);

                   }
        cout<<"\nDo you wants to change the employee Date of birth(0/1) : ";
        cin>>ch;
                if(ch==1)
                    {
                    do
                     {
                    cout<< "\nEnter date of birth in dd/mm/yy format :- ";
                    cin>>date>>month>>year;

                    if ( month == 2 && ( date < 1 || date > 28))
                    {
                        cout<< "\nThe date entered is invalid \n\n";
                        c=0;
                    }

                     else if (( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) && ( date < 1 || date > 31) )
                    {
                        cout<< "\nThis month has only 31 days, Please enter a date between 1 to 31\n\n";
                        c=0;
                    }


                     else if (( month == 4 || month == 6 || month == 9 || month == 11 ) && (date < 1 || date > 30) )
                    {
                        cout<< "\nThis month has only 30 days, Please enter a date between 1 to 30\n\n";
                        c=0;
                    }

                     else if ( year < 1990 || year > 2002)
                    {
                        cout<< "\nThe entered year of birth is not valid for an employee \n\n";
                        c=0;
                    }

                    else
                        c=1;


                    }while(c==0);
                }
        cout<<"\nDo you wants to change the employee blood group(0/1) : ";
        cin>>ch;
                   if(ch==1)
                    {
                   cout<<"enter blood group";
                   cin>>blood_group;
                    }
        cout<<"\nDo you wants to change the employee height(0/1) : ";
        cin>>ch;
                   if(ch==1)
                    {


                        do
                       {
                        cout<<"\nEnter Height of employee (in feet) : ";
                        cin>>height ;
                        if (height<0)
                        {
                            cout<< "\nHeight cannot be negative\n";
                            c=0;
                        }
                        else
                            c=1;
                       }while(c==0);
                    }
        cout<<"\nDo you wants to change the employee weight(0/1) : ";
        cin>>ch;
                   if(ch==1)
                    {
                       do
                           {
                            cout<<"\nEnter Weight of employee (in kgs): ";
                            cin>>weight;
                            if (weight<0)
                            {
                                cout<< "\nWeight cannot be negative\n";
                                c=0;
                            }
                            else
                                c=1;
                           }while(c==0);

                    }
        cout<<"\nDo you wants to change the employee insurance id(0/1) : ";
        cin>>ch;
                   if(ch==1)
                    {

                     cout<<"\nEnter the insurance id of employee : ";
                     cin>>insurance_id;
                    }
        cout<<"\nDo you wants to change the employee Address(0/1) : ";
        cin>>ch;
                   if(ch==1)
                   {
                     cout<<"\nEnter the Address of employee : ";
                     cin.ignore();
                     getline(cin,address);

                   }
        cout<<"\nDo you wants to change the employee mobile no.(0/1) : ";
        cin>>ch;
               if(ch==1)
                   {
                       do
                       {
                        cout<<"\nEnter the mobile no. of employee : ";
                        cin>>mobile_no;
                        if (mobile_no<6999999999 || mobile_no>9999999999)
                        {
                            cout<<"\nmobile no. is not valid ........plz enter valid mobile no. with 10 digits\n";
                            c=0;
                        }
                        else
                            c=1;
                       }while(c==0);

                   }
        cout<<"\nDo you wants to change the employee driving license id(0/1) : ";
        cin>>ch;
               if(ch==1)
                 {
                  cout<<"\nEnter the driving license number of employee : ";
                  cin>>driving_id;

                 }
        break;
       }
   }
   if(flag==0)
   {
       printf("\nEmployee ID not found to edit\n");
   }
}


 int employee:: delete_data(employee e[20],int n)
 {
     int key;
     int flag=0,i;
     cout<<"\nEnter the ID of employee you wants to delete: ";
     cin>>key;
        for(i=0;i<n;i++)
         {
            flag=1;
            if(key==e[i].id)              // checking if the entry is present or not
            {
                cout<<"\nRecord deleted successfully\n";
                break;                          //if present then breaking from the loop
            }

         }
         if(i==n)
         {
           cout<<"\nRecord not found\n";
         }
           while(i<n)
           {
               e[i]=e[i+1];                          //shifting position of entries by 1
               i++;
           }

       n--;
       return n;                           //returning n-1 entries

 }
  void employee:: search_data(employee e[20],int n)
 {
    int key;
    int flag=0;
    cout<<"\nEnter the ID of employee you wants to search: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
       flag=1;
        if(key==e[i].id)       //checking if the entry is present or not
         {
            cout<<"\n Employee details\n";      //displaying the searched entry
    cout<<"\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
  cout<<"\n"<<"ID |"<<"Name        | "<<"\t"<<"Date of Birth |"<<"\t"<<"Blood Group |"<<"\t"<<"Height |"<<"\t"<<"Weight |"<<"\t"<<"Insurance policy no. |"<<"\t"<<"Address |"<<"\t"<<"Driving License no.|"<<"\t"<<"Mobile no.";
    cout<<"\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n"<<e[i].id<<"\t"<<e[i].name<<"\t"<<e[i].date<<"/"<<e[i].month<<"/"<<e[i].year<<"\t\t"<<e[i].blood_group<<"\t\t"<<e[i].height<<"\t\t"<<e[i].weight<<"\t\t"<<e[i].insurance_id<<"\t\t\t"<<e[i].address<<"\t\t\t"<<e[i].driving_id<<"\t\t\t"<<e[i].mobile_no;
            break;
         }
    }
    if(flag==0)
        {
            cout<<"\nRecord not Found!!";               // print statement if entry is not found
        }
}




void employee::display()
     {


    cout<<"\n"<<id<<" "<<name<<"\t"<<date<<"/"<<month<<"/"<<year<<"\t\t"<<blood_group<<"\t\t"<<height<<"\t\t"<<weight<<"\t\t"<<insurance_id<<"\t\t"<<address<<"\t\t"<<driving_id<<"\t\t"<<mobile_no;
     }


int main()
{
    int i,n;

    employee e[20];  //creating object of derived class
    employee e1;
    int choice;
    do
    {
    cout<<"\n\tMENU";
    cout<<"\n1.Accept data"<<"\n"<<"2.Display a database"<<"\n"<<"3.Insert a new entry"<<"\n"<<"4.Delete entry"<<"\n"<<"5.Edit a record"<<"\n"<<"6.Search for a record"<<"\n"<<"7.Exit";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1 ://for accepting input
        cout<<"\nEnter the number of records you wants to add :";
        cin>>n;
        for(i=0;i<n;i++)
        {
            e[i].read_data();
        }
        break;
    case 2 ://for displaying output
        cout<<"\n\t\t\t\t\t\t\t\tWELCOME TO EMPLOYEE DATABASE\t\t\t\t\t\t\t\t";
        cout<<"\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
  cout<<"\n"<<"ID |"<<"Name        | "<<"\t"<<"Date of Birth |"<<"\t"<<"Blood Group |"<<"\t"<<"Height |"<<"\t"<<"Weight |"<<"\t"<<"Insurance policy no. |"<<"\t"<<"Address |"<<"\t"<<"Driving License no.|"<<"\t"<<"Mobile no.";
    cout<<"\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
        for(i=0;i<n;i++)
        {
            e[i].display();
        }
        break;
    case 3 : //Insert a new entry
        n = e1.insert_data(e,n);
        break;
    case 4 : //For delete entry
        n = e1.delete_data(e,n);
        break;
    case 5 : //Edit a record
         e1.edit_data(e,n);
        break;
    case 6 : //search for a record
         e1.search_data(e,n);
        break;
    }
}while(choice!=7);
}




