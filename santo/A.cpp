
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
      int n;
      cin>>n;
      string  s;
      cin>>s;
      int zero=0,one=0;

      for(int i=0;i<n;i++)
      {
          if(s[i]=='0')
          {
           zero++;
          }

          if(s[i]=='1')
          {
           one++;
          }
      }

      zero=zero%4;
      one=one%4;


       char t='E';

      int dir=zero-one;

      if(dir==0)
      {
         t='E';
      }

      else if(dir==1)
      {
         t='S';
      }
      else if(dir==2)
      {
         t='W';
      }
      else if(dir==3)
      {
         t='N';
      }
      else if(dir==-1)
      {
         t='N';
      }
      else if(dir==-2)
      {
         t='W';
      }
      else if(dir==-3)
      {
         t='S';
      }

    cout<<t<<endl;

   }


    return 0;

  }
