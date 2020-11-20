/******************************************************************************

Name:- Shriram Hemant Salunke 
Roll no.:-233054
Div:-C
Batch:-C3

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class sdata
{
    private:
        string nm, ad;
        int roll, dob[6], marks[5];
        long int phnm;
        float per;
    public:
        void inp();
        void disp();
        int vali(long int b, int a, int flag)
        {
            if(flag == 0 && a > 0 && a <= 100)
            {
                return 1;
            }
            else if(flag == 0)
            {
                cout<<"\nInvalid Input\n";
                return 0;
            }
            else if(b - 1000000000 < 0)
            {
                cout<<"\nInvalid Input\n";
                return 0;
            }
            return 1;
        }
        int vali1(int a[])
        {
            if((((a[0] <= 2) && (a[0] >= 0)) || ((a[0] == 3) && (a[1] == 0) || (a[1] == 1))) && (((a[2] == 0) && (a[3] > 0)) || ((a[2] == 1) && (a[3] <=2) && (a[3] >= 0))) && ((a[4] == 0) || (a[4] == 1) || (a[4] == 9) && (a[5] >=0)))            
            {
                return 1;
            }
            cout<<"\nInvalid Input\n";
            return 0;
        }
};
void sdata::inp()
{
    int i, a;
    cin.ignore();
    //fflush(stdin);
    cout<<"\nEnter the Name of student:\t";
    getline(cin, nm);
    Loop: cout<<"\nEnter the Roll no. of Student:\t";
    cin>>roll;
    if(roll <= 0)
    {
        cout<<"\nInvalid Input\n";
        goto Loop;
    }
    cout<<"\nEnter the DOB(ddmmyy by pressing enter after every digit) of Student:\n";
    Loop1: for(i = 0; i < 6; i++)
    {
        cin>>dob[i];
    }
    a = vali1(dob);
    if(a == 0)
    {
        goto Loop1;
    }
    Loop2: cout<<"\nEnter the Phone no. of Student:\t";
    cin>>phnm;
    a = vali(phnm, 0, 1);
    if(a == 0)
    {
        cout<<"\nEnter Phone No. again\n";
    }
    cout<<"\nEnter the marks of 5 subjects of Student:\n";
    Loop3: for(i = 0; i < 5; i++)
    {
        cin>>marks[i];
        a = vali(0, marks[i], 0);
        if(a == 0)
        {
            break;
        }
    }
    if(i != 5)
    {
        cout<<"\nEnter All Marks Again\n";
        goto Loop3;
    }
    cin.ignore(200, '\n');
    cout<<"\nEnter the address of Student:\t";
    getline(cin, ad);
    //cin.ignore();
}
void sdata::disp()
{
    int sum = 0, i;
    cout<<"\nThe Name of student is: "<<nm<<"\n";
    cout<<"\nThe Roll no. of student is: "<<roll<<"\n";
    cout<<"\nThe Phone no. of student is: "<<phnm<<"\n";
    cout<<"\nThe marks of 5 subjects of student is:\t";
    for(i = 0; i < 5; i++)
    {
        cout<<marks[i]<<"\t";
        sum += marks[i];
    }
    per = sum / 5;
    cout<<"\nPercentage of Student is: "<<per<<"\n";
    cout<<"\nThe DOB of student is:\t";
    for(i = 0; i < 6; i++)
    {
        cout<<dob[i];
        if(i % 2 != 0 && i != 5)
        {
            cout<<"-";
        }
    }
    cout<<endl;
    cout<<"\nThe address of student is: "<<ad<<"\n";
    //cin.ignore();
}
int main()
{
    int n;
    sdata abd[10];
    cout<<"\nEnter Number of Students\n";
    cin>>n;
    //cin.ignore();
    if(n > 0)
    {
        for(int i = 0; i < n; i++)
        {
            abd[i].inp();
        }
        for(int i = 0; i < n; i++)
        {
            abd[i].disp();
        }
    }
    else
    {
        cout<<"\nInvalid Input\n";
    }
    return 0;
}


/************* OUTPUT ******************

Enter Number of Students                                                                                                        
2                                                                                                                               
                                                                                                                                
Enter the Name of student:      shriram salunke                                                                                 
                                                                                                                                
Enter the Roll no. of Student:  233054                                                                                          
                                                                                                                                
Enter the DOB(ddmmyy by pressing enter after every digit) of Student:                                                           
1                                                                                                                               
2                                                                                                                               
1                                                                                                                               
1                                                                                                                               
0                                                                                                                               
1                                                                                                                               
                                                                                                                                
Enter the Phone no. of Student: 7666818311                                                                                      
                                                                                                                                
Enter the marks of 5 subjects of Student:                                                                                       
89                                                                                                                              
98                                                                                                                              
90                                                                                                                              
87                                                                                                                              
86                                                                                                                              
                                                                                                                                
Enter the address of Student:   at post karjat, ahmadnagar,414402     
Enter the Name of student:      gaurav salunke                                                                                  
                                                                                                                                
Enter the Roll no. of Student:  233069                                                                                          
                                                                                                                                
Enter the DOB(ddmmyy by pressing enter after every digit) of Student:                                                           
1                                                                                                                               
3                                                                                                                               
                                                                                                                                
1                                                                                                                               
1                                                                                                                               
0                                                                                                                               
1                                                                                                                               
                                                                                                                                
Enter the Phone no. of Student: 8600131518                                                                                      
                                                                                                                                
Enter the marks of 5 subjects of Student:                                                                                       
76                                                                                                                              
87                                                                                                                              
98                                                                                                                              
90                                                                                                                              
87                                                                                                                              
                                                                                                                                
Enter the address of Student:   at post alsunde , Taluka karjat 414402 
The Name of student is: shriram salunke                                                                                         
                                                                                                                                
The Roll no. of student is: 233054                                                                                              
                                                                                                                                
The Phone no. of student is: 7666818311                                                                                         
                                                                                                                                
The marks of 5 subjects of student is:  89      98      90      87      86                                                      
Percentage of Student is: 90                                                                                                    
                                                                                                                                
The DOB of student is:  12-11-01                                                                                                
                                                                                                                                
The address of student is: at post karjat, ahmadnagar,414402                                                                    
                                                                                                                                
The Name of student is: gaurav salunke                                                                                          
                                                                                                                                
The Roll no. of student is: 233069                                                                                              
                                                                                                                                
The Phone no. of student is: 8600131518                                                                                         
                                                                                                                                
The marks of 5 subjects of student is:  76      87      98      90      87                                                      
Percentage of Student is: 87                                                                                                    
                                                                                                                                
The DOB of student is:  13-11-01 
The address of student is: at post alsunde , Taluka karjat 414402   

                                
******************/



