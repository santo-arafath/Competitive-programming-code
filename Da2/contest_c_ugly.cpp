#include<bits/stdc++.h>
#define endl   "\n"
#define ll  long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
void ugly_monkey(ll n)
{
  set<ll>ugl;
  
  ugl.insert(1);

  for(ll i=1;i<n;i++)
  {

    auto it=ugl.begin();

    ll a=*it;
    ugl.erase(it);

     ugl.insert(a*2);
     ugl.insert(a*3);
     ugl.insert(a*5);

  }

  cout<<"The 1500'th ugly number is "<<*ugl.begin()<<".\n";


   

}


void ugly_number(int n)
  {
    vector<ll>res;
    res.push_back(1);

    ll i2=0,i3=0,i5=0;

    ll two=res[i2],three=res[i3],five=res[i5];
    ll x,y,z;
    ll result=1;

    for(int i=1;i<1500;i++)
      {

        x=2*res[i2];y=3*res[i3];z=5*res[i5];

        if((2*res[i2])==(min(x,min(y,z))))
           { 
            result=2*res[i2];
            res.push_back(result);
            if((result)==3*res[i3]){i3++;}
            if((result)==5*res[i5]){i5++;}
            i2++;
            //cout<<"A "<<result<<endl;
           } 

        else if((3*res[i3])==(min(x,min(y,z))))
          { 
          result=3*res[i3];
          res.push_back(result);
          if((result)==2*res[i2]){i2++;}
          if((result)==5*res[i5]){i5++;}
          i3 ++;
          //cout<<"B "<<result<<endl;
          }

        else if((5*res[i5])==(min(x,min(y,z))))
        { 
          result=5*res[i5];
          res.push_back(result);
          if((result)==2*res[i2]){i2++;}
          if((result)==3*res[i3]){i3++;}
          i5 ++;
          //cout<<"C "<<result<<endl;
        }  
        
      }
      
   cout<<"The 1500'th ugly number is "<<result<<".\n";

  }



 int main()
  {

    Boost;
   
   int n=1500;
   
   //ugly_monkey(n);

   ugly_number(n);

     


    return 0;

  }
