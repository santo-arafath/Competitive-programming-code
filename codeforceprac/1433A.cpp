#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
  int t;
   cin>>t;
   while(t--)
   {
    
    int num,number,count=0;
    cin>>number;
    num=number;

    while(num>10)
    {
     
     num/=10;
     count++;

    }
    
    
    int c=count;
    int res=num;
    while(c--)
    {
     res=res*10+num;
 
    }

    if(res>number)
    {
       count--; 
    }

    count++;


    

   

   
     int l=(num-1)*10;

     

     if(count==4)
     {
        cout<<l+10<<endl;
     }
     else if(count==3)
     {
        cout<<l+6<<endl;
     }
     else if(count==2)
     {
        cout<<l+3<<endl;
     }
     else if(count==1)
     {
        cout<<l+1<<endl;
     }



   }


    return 0;

  }
