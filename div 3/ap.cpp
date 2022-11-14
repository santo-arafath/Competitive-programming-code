#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
  int t;
   cin>>t;
   while(t--)
   {
   

    int a;
    cin>>a;

    if(a<=9)
    {
        cout<<a<<endl;
        
    }
    else{

       int k=a;
       int t=0;
       int f=0;

       while(k>0)
       {
         f++;
         t=k;
         k/=10;
       }
         cout<<"t "<<t<<endl;
    }


   }


    return 0;

  }
