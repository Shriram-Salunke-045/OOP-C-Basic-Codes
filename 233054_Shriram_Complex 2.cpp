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
        cout<<"\nEnter complex number (real part and imaginary part ) : \n";
        cin>>real>>img;
    }

      complex operator*(complex c);
      complex operator/(complex c);

    void display()
    {
        cout<<"Answer : "<<real<<"+"<<img<<"i"<<"\n";
    }
};


complex complex::operator*(complex c)
{
    complex temp;
    temp.real= real*c.real - img*c.img;
    temp.img = img*c.real + real*c.img;
    return temp;
}


complex complex::operator/(complex c2)
{
    float a,b,c;
    complex temp;

    a=(real*c2.real)+(img*c2.img);
    b=(c2.real*c2.real)+(c2.img*c2.img);
    c= (-real*c2.img)+(img*c2.real);
    cout<<"Answer : ("<<a<<"/"<<b<<")";cout<<" ";cout<<"+";cout<<" ";cout<<"("<<c<<"i"<<"/"<<b<<")\n";
    
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
        cout<<"1.Multiplication of Complex Numbers\n";
        cout<<"2.Division of Complex number\n";
        cout<<"3.Exit\n";

        cout<<"\nEnter your choice : \n";
        cin>>ch;

        switch(ch)
        {
            case 1:
                   c3=c1*c2;
                   c3.display();

                break;

            case 2:
                   c1/c2;

                break;

            case 3:
                   exit(0);

            default:   cout<<"Enter valid choice\n";
        }
        cout<<"Enter 0 to continue ";
        cin>>ch;
    }
     while(ch==0);


    return 0;
}


