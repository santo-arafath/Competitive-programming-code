
#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    int p1,p2,p3,p4;
    int l=0;
    cin>>p1>>p2>>p3>>p4;

    if(p4>9)
    {
      l++;
    }
    if(p1>9)
    {
      l++;
    }
    if(p2>9)
    {
      l++;
    }
    if(p3>9)
    {
      l++;
    }
cout<<l<<endl;

    return 0;

  }

