#include<conio.h>
#include<iostream>

using namespace std;

class Invent1
{
   private:
       float x,y;
   public:
    Invent1(float a,float b):x(a),y(b)
    {
    }

    void display()
    {
        cout<<"first "<<x<<" second "<<y<<endl;
    }
    operator float()
    {
        return x;
    }
    int getF(){return x;}
    int getS(){return y;}

};

class Invent2
{
 private:
    float a,b;
 public:
    void display()
    {
        cout<<"first "<<a<<" second "<<b<<endl;
    }
    Invent2(){}
    Invent2(Invent1 i)
    {
        a=i.getF();
        b=i.getS();
    }
};

int main()
{
     Invent1 s1(4,5);
     Invent2 d1;
     s1.display();
     float tv;
     tv=s1;
     cout<<tv<<endl;
     d1=s1;
     d1.display();
     getch();
     return 0;
}
