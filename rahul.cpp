#include <iostream>
using namespace std;

int main()
{
    int n,i,arr[100],a,b,a1,b1,c1,c2,c3,sum=0;
    float d1,d2,d3;
    int c11,c22,c33,co1,co2,co3;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>a1>>b1;
    co1=0;
    co2=0;
    co3=0;
    for(i=0;i<n;i++)
    {

    //	if(arr[i]>=1&&arr[i]<=10)

    //a=arr[i]%10;
    //b=arr[i]/10;
    if(arr[i]>=1&&arr[i]<=9)
   { c1=arr[i]*arr[i];
    c11=c1*(a1*b1);
    d1=c11*0.25;
    co1=c11-d1;
    sum=sum+co1;

   }
    else
    if(arr[i]==10)
    {c1=arr[i];
    c11=c1*(a1*b1);
    d1=c11*0.25;
    co1=c11-d1;
    sum=sum+co1;

    }
    else
    if(arr[i]>=11&&arr[i]<=20)
    {
    	 a=arr[i]%10;
    b=arr[i]/10;
    c2=arr[i]*(a+b);
    c22=c2*(a1*b1);
    d2=c22*0.30;
    co2=c22-d2;
sum=sum+co2;
    }

    else
    //if (arr[i]>=21&&arr[i]<=50)
     {a=arr[i]%10;
    b=arr[i]/10;
    c3=arr[i]*(a+b);
    c33=c3*(a1*b1);
    d3=c33*0.20;
    co3=c33-d3;
    sum=sum+co3;
     }
    }

   cout<<sum;


    return 0;
}
