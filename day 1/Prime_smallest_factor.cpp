#include<bits/stdc++.h>
#include<conio.h>
#define ll long long 
using namespace std;

void smallest_prime_factor(ll n)
{
  ll i=1;
   while(true)
   {
    i++;

    if(n%i==0){

        cout<<"samllest prime factor is --> "<<i<<endl;
        break;
    }
    
   }




    return ;
}
int main()
{
  
   ll n;
   cout<<"Emter the number ";
   cin>>n;

   smallest_prime_factor(n);

  getch();
    return 0;
}