
#include<bits/stdc++.h>
#define endl   "\n"
//#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

   // Boost;

  int t;
  cin>>t;
  int p=0;
  while(t--)
  {

     int n;
     cin>>n;
     int one=0;
     int two=0;
     for(int i=0;i<n;i++)
     {
         int f;
        cin>>f;

        if(f==1)
        {
            one++;
        }else if (f==2)
        {
         two++;;
        }

     }



if(one>0 && two>0)
     {

     if(two%2==0 && one%2==0)
     {
         cout<<"YES"<<endl;
     }

     else if(two%2!=0 && one%2==0)
     {
         cout<<"YES"<<endl;
     }

     else if(two%2!=0 && one%2!=0)
     {
         cout<<"NO"<<endl;
     }

     else if(one%2==0 && two%2!=0)
     {
         cout<<"NO"<<endl;
     }
   }
   else if(one>0 && two==0)
   {
      if(one%2==0)
     {
         cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
   }

   else if(one=0 && two>0)
   {
     if(two%2==0)
     {
         cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
   }

  }



    return 0;

  }

