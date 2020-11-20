/******************************************************************************

Name:- Shriram Hemant Salunke 
Roll no.:-233054
Div:-C
Batch:-C3
/
*******************************************************************************/

#include<iostream>


using namespace std;

class weather
{
    private:
        int no_of_days, s_no[31], days[31];
        float temp_h[31], temp_l[31], amt_rain[31], amt_snow[31];
    public:
        weather()           //Default Constructor
        {
            int yy,mm;
            cout<<"\nEnter the year(yy):\n";
            cin>>yy;
            cout<<"\nEnter the month(mm)\n";
            cin>>mm;
            no_of_days = leap(yy,mm);
            for(int i = 0; i < no_of_days; i++)   //initialization of values
            {
                s_no[i]=i+1;
                days[i]=99;
                temp_h[i]=999;
                temp_l[i]=-999;
                amt_rain[i]=0;
                amt_snow[i]=0;
            }
        }
    public:
        void data();
        void display();
        int leap(int,int);
};

void weather::data()
{
    int day;
    char ch;
    do
    {
        L: cout<<"\nEnter the day of the month:";
        cin>>day;
        if(day > 0 && day <= no_of_days)
        {
            days[day-1] = day;
            cout<<"\nEnter the highest temperature(in degrees):\n";
            cin>>temp_h[day-1];
            cout<<"\nEnter the lowest temperature(in degrees):\n";
            cin>>temp_l[day-1];
            cout<<"\nEnter the amount of snow(mm):\n";
            cin>>amt_snow[day-1];
            cout<<"\nEnter the amount of rain(cm):\n";
            cin>>amt_rain[day-1];
            cout<<"\nTHE ENTRY IS UPDATED SUCCESSFULLY\n";
        }
        else
        {
            cout<<"\nInvalid Input\n";
            goto L;
        }
        cin.ignore();
        cout<<"\nDo You Want to enter more records?(Press y/Y to continue)\n";
        cin>>ch;
    }while(ch=='y'|| ch=='Y');
}

int weather::leap(int yy,int mm)            //Function to check for leap year
{

    if(((yy % 4 == 0) && (yy % 100 != 0)) || (yy % 400 == 0))
    {
        cout<<"\n"<<yy<<" is a leap year!\n";
        if(((mm % 2 != 0) && (mm < 9)) || ((mm % 2 == 0) && (mm > 9)))
        {
            cout<<"\nThe month has 31 days\n";
            return(31);
        }
        else if(mm != 2)
        {
            cout<<"\nThe month has 30 days\n";
            return(30);
        }
        else
        {
            cout<<"\nThe month has 29 days\n";
            return 29;
        }
    }
    else
    {
        cout<<"\n"<<yy<<" is not a leap year!\n";
        if(((mm % 2 != 0) && (mm < 9)) || ((mm % 2 == 0) && (mm > 9)))
        {
            cout<<"\nThe month has 31 days\n";
            return(31);
        }
        else if(mm != 2)
        {
            cout<<"\nThe month has 30 days\n";
            return(30);
        }
        else
        {
            cout<<"\nThe month has 28 days\n";
            return(28);
        }
    }
}

void weather::display()
{
    double avg_h=0.0, avg_l=0.0, avg_snow=0.0, avg_rain=0.0, avg_days=0.0;
    for(int i = 0; i < no_of_days && days[i] != 0; i++)
    {
        avg_h += temp_h[i];
        avg_l += temp_l[i];
        avg_snow += amt_snow[i];
        avg_rain += amt_rain[i];
        avg_days += days[i];
    }
    avg_h /= no_of_days;                  //Finding average
    avg_l /= no_of_days;
    avg_snow /= no_of_days;
    avg_rain /= no_of_days;
    avg_days /= no_of_days;
    cout<<"Serial_no\tDay\tamt_rain\tamt_snow\thigh_temp\tlow_temp\n";
    /*for(int i = 0; i < no_of_days; i++)
    {
        cout<<s_no[i]<<days[i]<<amt_rain[i]<<amt_snow[i]<<temp_h[i]<<temp_l[i]<<"\n";
    }*/
    cout<<"AVERAGE\n"<<avg_days<<"\t"<<avg_rain<<"\t"<<avg_snow<<"\t"<<avg_h<<"\t"<<avg_l<<"\n";
}

int main()
{
    int ch;
    weather w;
    do
    {
        cout<<"\nEnter your choice:\n1. Enter the data records.\n2. Display the weather report.\n3. Exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                w.data();
                break;
            }
            case 2:
            {
                w.display();
                break;
            }
            case 3:
            {
                break;
            }
            default:
            {
                cout<<"\nInvalid Input\n";
                break;
            }
        }
    }while(ch != 3);
    return 0;
}


/************* OUTPUT ******************

Enter the year(yy):                                                                                                             
2019                                                                                                                            
                                                                                                                                
Enter the month(mm)                                                                                                             
3                                                                                                                               
                                                                                                                                
2019 is not a leap year!                                                                                                        
                                                                                                                                
The month has 31 days                                                                                                           
                                                                                                                                
Enter your choice:                                                                                                              
1. Enter the data records.                                                                                                      
2. Display the weather report.                                                                                                  
3. Exit                                                                                                                         
                                                                                                                                
1                                                                                                                               
                                                                                                                                
Enter the day of the month:3                                                                                                    
                                                                                                                                
Enter the highest temperature(in degrees):                                                                                      
45                                                                                                                              
                                                                                                                                
Enter the lowest temperature(in degrees):                                                                                       
17                                                                                                                              
                                                                                                                                
Enter the amount of snow(mm):  
4

Enter the amount of rain(cm):                                                                                                   
20                                                                                                                              
                                                                                                                                
THE ENTRY IS UPDATED SUCCESSFULLY                                                                                               
                                                                                                                                
Do You Want to enter more records?(Press y/Y to continue)                                                                       
y                                                                                                                               
                                                                                                                                
Enter the day of the month:4                                                                                                    
                                                                                                                                
Enter the highest temperature(in degrees):                                                                                      
47                                                                                                                              
                                                                                                                                
Enter the lowest temperature(in degrees):                                                                                       
19                                                                                                                              
                                                                                                                                
Enter the amount of snow(mm):                                                                                                   
5                                                                                                                               
                                                                                                                                
Enter the amount of rain(cm):                                                                                                   
25                                                                                                                              
                                                                                                                                
THE ENTRY IS UPDATED SUCCESSFULLY                                                                                               
                                                                                                                                
Do You Want to enter more records?(Press y/Y to continue)                                                                       
n                                                                                                                               
                                                                                                                                
Enter your choice:                                                                                                              
1. Enter the data records.   
2. Display the weather report.                                                                                                  
3. Exit                                                                                                                         
2                                                                                                                               
Serial_no       Day     amt_rain        amt_snow        high_temp       low_temp                                                
AVERAGE                                                                                                                         
92.8387 1.45161 0.290323        937.516 -933.387                                                                                
                                                                                                                                
Enter your choice:                                                                                                              
1. Enter the data records.                                                                                                      
2. Display the weather report.                                                                                                  
3. Exit                                                                                                                         
3                                                                                                                               
                                                                                                                                
                                                                                                                                
...Program finished with exit code 0    

******************/

                                                                                                                       
                                                                                                                                
                                        

