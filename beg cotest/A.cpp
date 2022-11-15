#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int prime_count(int a,int b)
{
   int count=0;
   int n=500;
   int arr[504]{0};

   arr[1]=1;
    
    for(int i=2;i<=n;i++)
    {
       if(arr[i]==0) {
       for(int j=i*i;j<=n;j+=i)
        {
          
           arr[j]=1;    
        }
       }
    }


    for(int i=a;i<=b;i++)
    {
        if(arr[i]==0){cout<<i<<endl;
            count++;
            }
    }


   return count;

}

 int main()
  {

    Boost;
  int t,k=1;
   cin>>t;
   while(t--)
   {

    int a,b,count;
    cin>>a>>b;
    count=prime_count(a,b);

      
     cout<<"Case "<<k<<": There are "<<count<< " numbers between "<<a <<" and "<<b<<endl;
     k++;

   }


    return 0;

  }
