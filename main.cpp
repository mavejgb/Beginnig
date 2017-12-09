#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

main()
{
   int d=1;
   long double a=1, b=1, w=1;

   cin>>d;
   if (d<1 || d>10)
       {
           return 0;
       }
       else
    cout<<setprecision(10000);
   for(int i=1; i<=d ;i++)
   {
       cin>>a>>b;
       if (a<=0||a>1000000000 || b<0 || b>1000000000)
       {
           return 0;
       }
       else
       w=pow(a,b);
       cout<<w<<endl;
   }
    return 0;
}

