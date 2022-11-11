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
     int s=0,l=0;
     for(int i=0;i<n;i++)
     {
        string a;

        cin>>a;

        if(a[0]=='S')
        {
            s++;
        }else if(a[0]=='L')
        {

            l++;
        }


     }


   cout<<s<<" "<<l<<endl;


  }



    return 0;
}
