#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
    
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {

       if(s[i]=='.')
       {
        cout<<'0';
       }
       else if(s[i]=='-')
       {
        if(s[i+1]=='.')
        {cout<<'1';
        i++;
        }
        else if(s[i+1]=='-')
        {cout<<'2';
        i++;
        }
       }

    }


  }
