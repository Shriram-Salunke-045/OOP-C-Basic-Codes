/**********************************************
 Name:-Shriram Hemant Salunke 
 GR.No.:-21910486
 Roll.No.:-233054
 Topic - complex(overloading) 
 Under the guidance:- Aniket Katade Sir
 ********************************************/
#include<iostream>
using namespace std;

class Complex
{
private:
    int real,imag;
public:
    Complex();                              //default constructor decleration.
    Complex(int ,int );                     //parameterized constructor decleration.
    void showData();
    void setData( );
    friend Complex operator+(Complex,Complex);
    friend Complex operator-(Complex,Complex);
    Complex operator*(Complex);
    Complex operator/(Complex);

};

Complex::Complex()                          //default constructor defination.
{
   real=0;
   imag=0;
}

Complex::Complex(int r,int i)              //parameterized constructor defination.
{
    real=r;
    imag=i;
}

void Complex::setData( )
{
    cout<<"Enter the real and imaginary parts of complex no."<<endl;
    cin>>real>>imag;
}

 void Complex::showData()
{
    if(imag>=0)
      cout<<real<<" + "<<imag<<"i"<<endl;
    else
      cout<<real<<" - "<<-imag<<"i"<<endl;

}


Complex operator-(Complex c1,Complex c2)
{
    Complex result;
    result.real=c1.real-c2.real;
    result.imag=c1.imag-c2.imag;
    return result;
}

Complex operator+(Complex c1,Complex c2)
{
    Complex result;
    result.real=c1.real+c2.real;
    result.imag=c1.imag+c2.imag;
    return result;
}
Complex Complex:: operator*(Complex c2)
{
  Complex result;
  result.real=((real*c2.real)-(imag*c2.imag));
  result.imag=((real*c2.imag)+(imag*c2.real));
  return result;
}
Complex Complex:: operator/(Complex c2)
{
  Complex result;
  result.real=((real*c2.real)+(imag*c2.imag))/(((c2.real)*(c2.real))+((c2.imag)*(c2.imag)));
  result.imag=((imag*c2.real)-(real*c2.imag))/(((c2.real)*(c2.real))+((c2.imag)*(c2.imag)));
  return result;
}


int main()
{
    int choice;
    Complex c1,c2,c3;
    c1.setData();
    c2.setData();
    cout<<"Entered two complex nos are"<<endl;
    c1.showData();
    c2.showData();
    do
    {
    cout<<"Menu:"<<endl;
    cout<<"1) Add complex nos."<<endl;
    cout<<"2) Subtract complex nos"<<endl;
    cout<<"3) Multiply complex nos"<<endl;
    cout<<"4) Divide Complex nos"<<endl;
    cout<<"5) Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:c3=c1+c2;
               c3.showData();
               break;
        case 2:c3=c1-c2;
               c3.showData();
               break;
        case 3:c3=c1*c2;
               c3.showData();
               break;
        case 4:c3=c1/c2;
               c3.showData();
               break;
        case 5:exit(0);
               break;

    }

    }
    while(1);

    return 0;
}
/********************Output:*************************

Enter the real and imaginary parts of complex no.
3
5
Enter the real and imaginary parts of complex no.
4
2
Entered two complex nos are
3 + 5i
4 + 2i
Menu:
1) Add complex nos.
) Subtract complex nos
3) Multiply complex nos
4) Divide Complex nos
5) Exit
Enter your choice
1
7 + 7i
Menu:
1) Add complex nos.
2) Subtract complex nos
3) Multiply complex nos
4) Divide Complex nos
5) Exit
Enter your choice
2
-1 + 3i
Menu:
1) Add complex nos.
2) Subtract complex nos
3) Multiply complex nos
4) Divide Complex nos
5) Exit
Enter your choice
3
2 + 26i
Menu:
1) Add complex nos.
2) Subtract complex nos
3) Multiply complex nos
4) Divide Complex nos
5) Exit
Enter your choice
4
1 + 0i
Menu:
1) Add complex nos.
2) Subtract complex nos
3) Multiply complex nos
4) Divide Complex nos
5) Exit
Enter your choice
5

Process returned 0 (0x0)   execution time : 50.523 s
Press any key to continue.




*****************************************************************/




