#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void prime_cheak(ll n ) // O(N) monkey 
{

   for(int i=2;i<n;i++)
     {
       if(n%i==0)
       {

        cout<<n <<" Is a composite number  "<<endl;
        return ;
       } 
      

     }

     cout<<n <<" Is a prime number  "<<endl;

}



void prime_cheak_n(ll n ) // O(sqrt(N)) Human 
{

   for(int i=2;i*i<=n;i++)
     {
       if(n%i==0)
       {

        cout<<n <<" Is a composite number  "<<endl;
        return ;
       } 
      

     }

     cout<<n <<" Is a prime number  "<<endl;

}


/// all prime by seave 


void all_prime(ll n)
{
  

   int seave[100]={0};

   for(int i=0;i<n;i++)
   {
      



   }


}



int main()
{
   ll n;
   cout<<"Enter a number ";
   cin>>n;

   prime_cheak(n);
   prime_cheak_n(n);
   
   



    return 0;
}