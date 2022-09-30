#include<conio.h>
#include<iostream>

using namespace std;

class Complex
{
     private:
       int r,i;
     public:
        Complex(){
        }
        Complex(int r):r(r),i(r)
        {

        }
        void display()
        {
            cout<<r<<"+"<<i<<"i"<<endl;
        }
};
int main()
{
     Complex c1;
     int x=5;
     c1=x;
     c1.display();
     getch();
     return 0;
}
