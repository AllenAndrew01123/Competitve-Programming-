#include<bits/stdc++.h>
using namespace std;
main()
{
  long long n;
  int k;
  cin>>n>>k;
  while(k--)
  {
    if(n%10!=0)
    n-=1;
    else
    n/=10;
  }
  cout<<n;

}