#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
        cout<<((a^b)^c)<<endl;
    }
}