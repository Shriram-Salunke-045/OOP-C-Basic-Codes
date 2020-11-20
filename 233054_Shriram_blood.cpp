/**********************************************
 Name:-Shriram Hemant Salunke 
 GR.No.:-21910486
 Roll.No.:-233054
 Topic - OOP data store program 
 Under the guidance:- Aniket Katade Sir
 **********************************************/
#include<iostream>
#include<string>
using namespace std;
class A
{
protected:
    string name,dob,bg;

};
class B
{
protected:
    int ht,wt;
};
class C
{
protected:
    string ipn,adr;
};
class D:public C, public B, public A
{
    string mb_no,lic_no;
public:
    void get_data();
    void display();
    int insert_data(D d[],int n);
    void edit(D d[],int n);
    int delete_data(D d[],int n);
    void search_data(D d[],int n);


};
void D::get_data()
{
   cout<<"\nEnter the following details";
   cin.ignore();
   cout<<"\nname of the person:";
   getline(cin,name);
   cout<<"\ndate of birth(dd/mm/yyyy):";
   getline(cin,dob);
   cout<<"\nblood group:";
   getline(cin,bg);
   cout<<"\nheight:";
   cin>>ht;
   cout<<"\nweight:";
   cin>>wt;
   cin.ignore();
   cout<<"\ninsuarance policy number:";
   getline(cin,ipn);
   cout<<"\naddress:";
   getline(cin,adr);
   cout<<"\nmobile no.:";
   getline(cin,mb_no);
   cout<<"\nlicense no.:";
   getline(cin,lic_no);

}
void D::display()
{

    cout<<endl<<name<<"\t\t"<<dob<<"\t\t"<<bg<<"\t\t"<<ht<<"\t\t"<<wt<<"\t\t"<<ipn<<"\t\t"<<adr<<"\t\t"<<mb_no<<"\t\t"<<lic_no;
}
void D::edit(D d[10],int n)
{
    string a;
    int i;
    cout<<"enter liscence number of the record you want to edit";
    getline(cin,a);
     for(i=0;i<n;i++)
    {
        if(a==d[i].lic_no)
        d[i].get_data();
    }

}
void D::search_data(D d[10],int n)
{
    string a;
    int flag=0;
    cout<<"enter the license number you want to search: ";
    getline(cin,a);
    for(int i=0;i<n;i++)
    {
        flag=1;
        if(a==d[i].lic_no)
        {
            cout<<"\person details\n";
            cout<<endl<<d[i].name<<"\t\t"<<d[i].dob<<"\t\t"<<d[i].bg<<"\t\t"<<d[i].ht<<"\t\t"<<d[i].wt<<"\t\t"<<d[i].ipn<<"\t\t"<<d[i].adr<<"\t\t"<<d[i].mb_no<<"\t\t"<<d[i].lic_no;
            break;
        }

    }

     if(flag==0)
        {
            cout<<"enter valid product number";
        }
}
int D::insert_data(D d[10],int n)
{
    int x;
    cout<<"enter the number of entries you want to add: ";
    cin>>x;
    for(int i=0;i<x;i++)
    {
        d[i+n].get_data();
    }return n+x;
}
int D::delete_data(D d[10],int n)
{
     string a;
     int flag=0,i;
    cout<<"enter the product number you want to delete: ";
    getline(cin,a);
    for(i=0;i<n;i++)
    {
        flag=1;
        if(a==d[i].lic_no)
        {
            break;
        }

    }
     if(i==n)
   {
       cout<<"\nItem not found\n";
   }
   while(i<n)
   {
       d[i]=d[i+1];
       i++;
   }
   cout<<"\nRecord deleted successfully\n";
   n--;
   return n;
}
int main()
{
    int i,n,choice;
    D d[10];
    D d1;
    cout<<"\nenter the number of person:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        d[i].get_data();
    }
    do
    {


    cout<<"\n\tMenu"<<"\n1.display data"<<"\n2. insert data"<<"\n3. edit data"<<"\n4. delete data"<<"\n5. search data"<<"\n6. exit";
    cout<<"\nenter your choice:";
    cin>>choice;

    switch(choice)
    {
        case 1:
             cout<<"****MASTER TABLE*****";
             cout<<endl<<"Name"<<"\t\t"<<"Date of birth"<<"\t\t"<<"blood group"<<"\t\t"<<"height"<<"\t\t"<<"weight"<<"\t\t"<<"insuarance policy no"<<"\t\t"<<"address"<<"\t\t"<<"mobile no"<<"\t\t"<<"license no";
           for(i=0;i<n;i++)
         {
              d[i].display();
         }
         break;
        case 2:
             n = d1.insert_data(d,n);
             cout<<"****MASTER TABLE*****";
             cout<<endl<<"Name"<<"\t\t"<<"Date of birth"<<"\t\t"<<"blood group"<<"\t\t"<<"height"<<"\t\t"<<"weight"<<"\t\t"<<"insuarance policy no"<<"\t\t"<<"address"<<"\t\t"<<"mobile no"<<"\t\t"<<"license no";
            for(i=0;i<n;i++)
         {
              d[i].display();
         }
           break;
        case 3:
            d1.edit(d,n);
            break;
        case 4:
             n = d1.delete_data(d,n);
             cout<<"****MASTER TABLE*****";
             cout<<endl<<"Name"<<"\t\t"<<"Date of birth"<<"\t\t"<<"blood group"<<"\t\t"<<"height"<<"\t\t"<<"weight"<<"\t\t"<<"insuarance policy no"<<"\t\t"<<"address"<<"\t\t"<<"mobile no"<<"\t\t"<<"license no";
            for(i=0;i<n;i++)
         {
              d[i].display();
         }
            break;
        case 5:
            d1.search_data(d,n);
            break;
    }
    }while(choice!=6);

}
