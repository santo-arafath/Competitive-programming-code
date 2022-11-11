#include<bits/stdc++.h>
using namespace std ;

///monkey div

void monkeyDiv(int n)
{

   for(int i=1;i<=n;i++)
   {

     if(n%i==0)
     {
         cout<<i<<" ";
     }


   }

 cout<<endl;
}





/// Human DIV


void humanDiv(int n)
{

    vector<int>divs;
    for(int i=1;i*i<=n;i++)
    {

      if(n%i==0)
      {
          //cout<<i<<" "<<n/i<<" ";
          divs.push_back(i);
          if (i != n / i) divs.push_back(n / i);
      }

    }
 sort(divs.begin(),divs.end());
   for (auto x: divs) {cout << x << ' ';}

}





int main()
{

   int n;
   cout<<" Enter n : ";
   cin>>n;
   monkeyDiv(n);
   humanDiv(n);


    return 0;
}
