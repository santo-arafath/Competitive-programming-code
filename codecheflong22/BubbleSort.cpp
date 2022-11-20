#include<bits//stdc++.h>
using namespace std;


void bubbleSort(int arr[],int n) //(n^2)
  {

int l=n;
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<l-1;j++)
       {

         if(arr[j]>arr[j+1])
         {
            swap(arr[j],arr[j+1]);
         }





       }
      l--;
    }
  }








int main()
{
    int arr[]={5,8,9,1,2,3,7,8,45,12,68,685,471,628,631,125,136,741,2589,1,23,65,496};

    int n=sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);




    for(int x:arr)
    {
        cout<<x<<" ";
    }
     cout<<endl;

    return 0;
}
