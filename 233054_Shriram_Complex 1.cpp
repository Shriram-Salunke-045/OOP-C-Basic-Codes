/**********************************************
 Name:-Shriram Hemant Salunke 
 GR.No.:-21910486
 Roll.No.:-233054
 Topic - complex(overloading) 
 Under the guidance:- Aniket Katade Sir
 **********************************************/
#include<iostream>
using namespace std;

class complex
{
    int real,img;
    public :
    complex()
    {
        real=0;
        img=0;
    }

    void accept()
    {
        cout<<"\nEnter complex number (real part and imaginary part) : \n";
        cin>>real>>img;
    }

      friend complex operator+(complex a, complex b);
      friend complex operator-(complex a, complex b);
     
    void display()
    {
        cout<<"Answer : "<<real<<"+"<<img<<"i"<<"\n";
    }
};


complex operator+(complex a, complex b)
{
    complex temp;
    temp.real=a.real + b.real;
    temp.img= a.img + b.img;
    return temp;
}


complex operator-(complex a, complex b)
{
    complex temp;
    temp.real=a.real - b.real;
    temp.img= a.img - b.img;
    return temp;
}


int main()
{
    complex c1,c2,c3;
    int ch=0;

    c1.accept();
    c2.accept();

    do
    {
        cout<<"\nMain Menu\n";
        cout<<"1.Addition of Complex Number\n";
        cout<<"2.Subtraction of Complex Number\n";
        cout<<"3.Exit\n";

        cout<<"\nEnter your choice : \n";
        cin>>ch;

        switch(ch)
        {
            case 1:
                   c3=c1+c2;
                   c3.display();

                break;

            case 2:
                   c3=c1-c2;
                   c3.display();

                break;

            case 3:
                   exit(0);

            default:   cout<<"Enter valid choice\n";
        }
        cout<<"Enter 0 to continue";
        cin>>ch;
    }
     while(ch==0);


    return 0;
}


