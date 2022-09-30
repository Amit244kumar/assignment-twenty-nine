#include<conio.h>
#include<iostream>

using namespace std;

class Dollar
{
   private:
     float d;
   public:
     Dollar(){}
     Dollar(float s):d(s)
     {

     }
     void display()
     {
         cout<<"Dollar "<<d<<endl;
     }
     float getDollar()
     {
         return d;
     }
};

class Rupee
{
    private:
      float r;
    public:
        Rupee(Dollar d)
        {

            r=d.getDollar()*100;
        }
        Rupee(float a):r(a)
        {
        }
        void display()
        {
            cout<<"Rupee "<<r<<endl;
        }
        operator float()
        {
            return r;
        }
        operator Dollar()
        {
            return r/100.0;
        }
};


int main()
{
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
