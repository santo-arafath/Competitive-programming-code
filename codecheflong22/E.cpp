
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
    string s;
    cin>>s;

     int j=n-1;
     int i=0,caase=0;
    while(i<j)
    {


      if(s[i] != s[j])


        caase++;
        i++;
        j--;

    }
    cout<<caase<<endl;
 }


    return 0;

  }

