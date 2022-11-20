

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
    int a,b,c,d;
    int mx=-1;

    cin>>a;
    if(a>mx)
    {
        mx=a;
    }

    cin>>b;
    if(b>mx)
    {
        mx=b;
    }

    cin>>c;
    if(c>mx)
    {
        mx=c;
    }

    cin>>d;
    if(d>mx)
    {
        mx=d;
    }

   cout<<mx<<endl;


 }


    return 0;

  }
