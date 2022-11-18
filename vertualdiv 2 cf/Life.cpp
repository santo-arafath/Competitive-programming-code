#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--)
  {
   int n,m;

   cin>>n>>m;

   for(int i=n;i<=m;i++)
   {
       if(i==1)
       {

           continue;
       }
       if(i==2)
       {
           cout<<i<<endl;
           continue;
       }

       if(i==3)
       {
           cout<<i<<endl;
           continue;
       }
       int k=0;

       for(int j=2;j<=sqrt(i)+1;j++)
       {
           if(i%j==0)
           {

               k=1;
               continue;
           }

       }

       if(k==0)
       {cout<<i<<endl;}

   }

    cout<<"\n";

  }




}
