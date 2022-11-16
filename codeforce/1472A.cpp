
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

       int w,h,n;

       cin>>w>>h>>n;
       int i=1;


       while(w%2==0)
       {
           w/=2;
           i*=2;
       }

        while(h%2==0)
       {

           h/=2;
           i*=2;
       }




       if(i>=n)
       {
           cout<<"YES"<<endl;

       }
       else{
        cout<<"NO"<<endl;
       }
    }



    return 0;

  }

