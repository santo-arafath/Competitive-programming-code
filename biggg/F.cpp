#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int sz=s.length();
      int k=sz/2;
      if(sz%2!=0){k=sz/2+1;}




      int con=0;
      for(int i=0;i<k;i++)
      {

         for(int j=(k);j<sz;j++)
         {

            if(s[i]==s[j])
                {

                  con++;
                  s[j]='-';
                  break;
                 }




         }




      }

    if((sz/2)==con){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}

    }

    return 0;
}
