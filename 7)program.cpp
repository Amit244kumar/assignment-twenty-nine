#include<conio.h>
#include<iostream>

using namespace std;

class Minute
{
   private:
     int minutes;
   public:
    void display()
    {
        cout<<"Minutes "<<minutes<<endl;
    }
    void setData(int s)
    {
        minutes=s;
    }
};

class Time
{
     private:
       int hr,min;
     public:
        Time(int h,int m)
        {
            hr=h;
            min=m ;

        }
        void display()
        {
            cout<<hr<<":"<<min<<endl;
        }
        operator Minute()
        {
            Minute m;
            m.setData(hr*60+min);
            return m;
        }
};

int main()
{
     Time t1(2,30);
     t1.display();
     Minute m1;
     m1=t1; // Fetch minute from time
     m1.display();
     return 0;
}
