#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void prime_factor(ll n ) 
{
   vector<int>fact;  //size 10^6 max
   for(int i=2;i*i<=n;i++)
     {
       if(n%i==0)
       {
          while(n%i==0)
          {
            fact.push_back(i);
            n/=i;

          }
         
       }
      
     }
   if(n>1)fact.push_back(n);
   for(auto x:fact) cout<<x<<" "; 

}







int main()
{
   ll n;
   cout<<"Enter a number ";
   cin>>n;

   
   prime_factor(n);
   
   



    return 0;
}