
#include<bits/stdc++.h>
#include <sstream>
#include <string>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
 int ispal(int a,int b)
 {
     if(a==b)
     {
         return 1;
     }


    return 0;
 }

 int time(string s,int m)
  {
      bool flag=false;
      int total=0;
      int hour=s[1]-'0'+((s[0]-'0')*10);
      int mn=s[4]-'0'+((s[3]-'0')*10);

     int tm,th;
      th=hour;
while(true)
{






     mn+=m;
     if(mn>59)
     {
         th+=(mn%60);
         mn=mn%60;
     }


     if(th>23)
     {
         return total;
     }
     tm=(mn%10)*10+(mn/10);

     total+=ispal(th,tm);
     int p=ispal(th,tm);
     int finalh,finalm;

     if(flag ==false &&p==1)
     {
         flag=true;
       finalh=th;
       finalm=tm;
     }

}
//return total;
  }

 int main()
  {

    Boost;
  int t;
   cin>>t;

   while(t--)
   {

     int total=0;
     string s;
     int m;

     cin>>s;
     cin>>m;

     int k=time(s,m);

cout<<k<<endl;


   }


    return 0;

  }
