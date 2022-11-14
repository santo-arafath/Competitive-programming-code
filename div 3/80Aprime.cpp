#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

bool prime(int n)
  {
   
     for(int i=2;i*i <=n;i++)
     {

        if((n%i)==0)
        {

            return false;

        }

     }
return true;
  
  }
 int main()
  {

    Boost;
  int n,m;

  cin>>n>>m;

  int f=-1;
  while(true)
  {
    n++;
   if(prime(n))
   {
       f=n;
       break;
   }


  }


  if(f==m){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }

  
   


    return 0;

  }
