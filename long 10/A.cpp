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

    int a=x-y;

    bool small=false;

    if(x<y){small=true;}

    cout<<(small? 0 : a)<<endl;


   }


    return 0;

  }

