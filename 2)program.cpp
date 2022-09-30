#include<conio.h>
#include<iostream>

using namespace std;

class Complex
{
     private:
       int r,i;
     public:
        void setData(int a,int b)
        {
           r=a;
           i=b;
        }
        void display()
        {
            cout<<r<<"+"<<i<<"i"<<endl;
        }
        operator int()
        {
            return r;
        }

};

int main()
{
     Complex c1;
     c1.setData(3,4);
     int x;
     x=c1;
     cout<<x;
     getch();
     return 0;
}
