#include<bits/stdc++.h>

#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
  int t;
   cin>>t;
   while(t--)
   {
       int a,b;
       cin>>a>>b;
       bool pos=false;

       /*if(b%2==0)
       {
           pos=true;
       }*/









     while(a<b)
     {

        if(a%2==0)
        {
            a+=2;
        }
        else if(a%2!=0)
        {
            a++;
        }
       if(a==b)
       {
          pos=true;
       }
     }




     cout<<(pos?"YES":"NO")<<'\n';


   }


    return 0;

  }
