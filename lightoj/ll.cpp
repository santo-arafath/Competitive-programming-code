
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
      string s;

      cin>>s;
      if(s.length()>10)
      {
      cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
      }
      else{
         cout<<s<<endl;
      }


   }




    return 0;

  }


