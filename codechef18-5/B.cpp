#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
    int t;
    cin>>t;
    while(t--)
    {

       int x,y;
       cin>>x>>y;

       int a=0,b=0;


       a=(500-(x*2));
       b=(1000-((y+x)*4));

       int c,d;

       c=(500-(y*4));
       d=(1000-((y+x)*2));



       if((a+b)>c+d)
       {
         cout<<a+b<<endl;

       }
       else{
        cout<<c+d<<endl;
       }


    }



    return 0;

  }

