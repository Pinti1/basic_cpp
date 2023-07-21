#include<bits/stdc++.h>
using namespace std;

class student
{
    private:

    int RollNu;
    int mathsmark,physicsmark,chemistrymark;
    string Name;

    public:

    student(int r ,string n ,int mm,int pm ,int cm )
    {
        RollNu = r;
        Name = n;
        mathsmark = mm;
        physicsmark = pm;
        chemistrymark = cm;
    }

    int total();
    char gread();

};

int student::total()
{
    return mathsmark+physicsmark+chemistrymark;
}

char student::gread()
{
    float av = total()/3;
    if(av >= 80) 
    {
        return 'A';
    }
    else if(av < 79 && av > 50)
    {
        return 'B';
    }
    else
    {
        return 'F';
    }
}

int main()
{
   // student r1,r2,r3;
   int Roll;
   int m, p,c;
   string name;
   int ts;
   cout<<"total student:";
   cin>>ts;
   cout<<endl;
   for(int i = 0; i < ts; i++)
   {
    cout<<"enter Roll nu:";
    cin>>Roll;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter math mark:";
    cin>>m;
    cout<<"enter physics mark:";
    cin>>p;
    cout<<"enter chemistry mark:";
    cin>>c;
    cout<<endl;

    student r(Roll,name,m,p,c);
    cout<<"marks of "<<i+1<<" student : "<<r.total()<<endl;
    cout<<"rank of "<<i+1<<" student : "<<r.gread()<<endl;
    cout<<endl;

   }
  // cin>>Roll>>name>>m>>p>>c;
//    student r(Roll,name,m,p,c);
//    cout<<"total marks:"<<r.total()<<endl;
//    cout<<"rank :"<<r.gread()<<endl;
    return 0;
}