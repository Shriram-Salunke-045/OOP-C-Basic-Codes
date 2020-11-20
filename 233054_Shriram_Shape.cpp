/**********************************************
 Name:-Shriram Hemant Salunke 
 GR.No.:-21910486
 Roll.No.:-233054
 Topic - Area
 Under the guidance:- Aniket Katade Sir
 **********************************************/
 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class shape
{
    public:
        double l, b;

        void inp()
        {
            cout<<"\nEnter Length/Height and Breadth/Base(mini 0.01)\n";
            cin>>l>>b;
            
            if(l < 0.01 || b < 0.01)
            {
                cout<<"\nInvalid Input\nRe-Enter Data\n";
                inp();
            }
            
        }
        
        virtual double compute_area() = 0;
};

class rect: public shape
{
    public:
        double compute_area()
        {
            double area = l * b;
            return area;
        }

};

class tri: public shape
{
    public:
        double compute_area()
        {
            double area = 0.5 * l * b;
            return area;
        }

};

int main()
{
    double q;
    rect a;
    tri b;
    a.inp();
    q = a.compute_area();
    cout<<"\nRect Area\n"<<q<<endl;
    b.inp();
    q = b.compute_area();
    cout<<"\nTri Area\n"<<q<<endl;
    return 0;
}
