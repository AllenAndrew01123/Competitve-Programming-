#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::toupper);
        if(s[0]=='Y' && s[1]=='E' && s[2]=='S')
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}