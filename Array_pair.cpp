
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,j,k,temp[100],count=0;
cin>>n>>k;
int arr[n];
for(i=0;i<n;i++)
    cin>>arr[i];
  //  sort(arr,arr+n);
for(i=0;i<n;i++)
    temp[i]=arr[i]%k;
    for(i=0;i<n;i++)
    for(j=i+1;j<n-i;j++)
   {

   if((temp[i]+temp[j])%k==0)
   {

    count++;
    }}
if(count>1)
    cout<<"True";
else
    cout<<"False";
}
