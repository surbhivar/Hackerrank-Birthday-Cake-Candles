#include <bits/stdc++.h>

using namespace std;


int main()
{
int a[1000000],i,max=0,count=0,j,n;

cin>>n;
for(i=1;i<=n;i++)
{
cin>>a[i];
if(a[i]>=max)
{
max=a[i];
}
}
for(i=1;i<=n;i++)
{
if(a[i]==max)
{
count++;
}

}
cout<<count;
} 
