#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;



 ll lpf(ll n)   
   {
 
   ll i=2;
     while(i<=n)
     {
       if(n%i==0)
       {
          return i;

       }
      i++;

     }

   return -1;
    
   }








   ll gpf(ll n)
   {
       
       ll facc;
      for(ll i=2;i*i<=n;i++)
      {
        if(n%i==0)
        {
            
            n/=i;
            while(n%i==0)
            {
             
              n/=i;

            }

            facc=i;
        }

      }

      if (n > 1) 
        {
            if(n>facc){facc=n;}
        }
      
    return facc;
   }







   ll distinct_pf(ll n)
   {

     ll count=0;
      for(ll i=2;i*i<=n;i++)
      {

        
        if(n%i==0)
        {
            n/=i;
            while(n%i==0)
            {
              
              n/=i;

            }

            
            count++;
            
        }
       
      }
      if (n > 1) {count++;}
           
      return count;
   }





   ll total_pf(ll n)
   {
   ll count =0;
      for(ll i=2;i*i<=n;i++)
      {
       if(n%i==0)
        {
         n/=i;
         count++;
         while(n%i==0)
          {
         count++;
         n/=i;


          }

         }
      }
      if (n > 1){count++;}

    return count;
   }

     ll total_divs(ll n)
     {
        
        ll f=0;
        vector<ll>arr(1000004,0);

        for(ll i=2;i*i<=n;i++)
          {
             if(n%i==0)
             {
                
                arr[i]++;
                n/=i;

                while(n%i==0)
                  {
                    
                    arr[i]++;
                    n/=i;
                   

                  }
               f=i;
             }

          }

          if (n > 1) 
          {
            arr[n]++;
             if(n>f){f=n;}
          }
          f++;
          ll count =1;
          for(ll i=2;i<=f;i++)
             {
                if(arr[i]!=0)
                {
                 count = count*(arr[i]+1);

                }


             }



        return count;
     }





     ll sum_divs(ll n)
        {
              
           ll f=0;
        
        vector<ll>arr(1000004,0);

        for(ll i=2;i*i<=n;i++)
          {
             if(n%i==0)
             {
                arr[i]++;
                n/=i;

                while(n%i==0)
                  {
                    arr[i]++;
                    n/=i;
                    f=i;

                  }
               f=i;
             }

          }

          if (n > 1) 
          {
            arr[n]++;
             if(n>f){f=n;}
          }

          ll sum =1;
          f++;
          for(ll i=2;i<=f;i++)
             {
                if(arr[i]!=0)
                {
                  sum*=((pow(i,(arr[i]+1))+0.5-1)/(i-1));

                }


             }



        return sum;



           
        }


 int main()
   {

    Boost;
   ll t;
   cin>>t;
   while(t--)
   {
     ll n;
     cin>>n;

     
     ll llpf, ggpf, dpf, npf, ndiv, sdiv;

     llpf=lpf(n);
     ggpf=gpf(n);
     dpf=distinct_pf(n);
     npf=total_pf(n);
     ndiv=total_divs(n);
     sdiv=sum_divs(n);

     printf("%lld %lld %lld %lld %lld %lld\n", llpf, ggpf, dpf, npf, ndiv, sdiv); 
   }


    return 0;

   }
