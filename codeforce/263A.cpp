#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;

    int n=5,r,c;
     int a;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
         {
           cin>>a;
           if(a==1)
           {
             r=i;
             c=j;
           }
         }
    }

   int l;

   r=3-r;

   if(r<0)
   {
       r*=-1;
   }

   c=3-c;

   if(c<0)
   {
       c*=-1;
   }

   l=r+c;

   cout<<l<<endl;


    return 0;

  }

