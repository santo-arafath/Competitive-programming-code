#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
  ll t;
   cin>>t;
   while(t--)
   {
      string a1,b1;
      char a,b;
      cin>>a1>>b1;

     int al=a1.length();
     int bl=b1.length();

     a=a1[al-1];
     b=b1[bl-1];

     if(a=='S' && b=='S')
     {
        if(al>bl)cout<<"<"<<endl;
        else if(al==bl)cout<<"="<<endl;
        else{
            cout<<">"<<endl;
        }
     }
     else if(a=='L' && b=='L')
     {
        if(al<bl)cout<<"<"<<endl;
        else if(al==bl)cout<<"="<<endl;
        else{
            cout<<">"<<endl;
        }
     }

     else 
     {
        if(a<b)
        {cout<<">"<<endl;}
        else if(a>b){cout<<"<"<<endl;}
        else cout<<"="<<endl;
     }

     
      

   }


    return 0;

  }
