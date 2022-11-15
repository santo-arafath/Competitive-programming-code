#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
   int div[105]={0};
   int n=10;
   
     ll sum=0;
   

    for(int i=1;i<=n;i++)
    {
       for(int j=i;j<=n;j+=i)
       {

        div[j]++;
       //cout<<div[j]<<endl;
       sum++; 

       cout<<sum<<endl;

       }
        
      
    }

     for(int i=1;i<=n;i++)
       {
       cout<<div[i]<<" ";

        
       }
  
cout<<"\nsum divs :"<<sum;
    return 0;

  }



/// protita i ar jonno tar multiple goler divs count increase kore dilei hoy ..