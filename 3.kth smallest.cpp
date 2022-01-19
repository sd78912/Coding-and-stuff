#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=0,a=0,t=0;;
vector<int>v;
cout<<"Enter size";
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a;
    v.push_back(a);
}
cout<<"No to be smallest";
cin>>t;
sort(v.begin(),v.end());

cout<<"Minimum Element"<<v[t-1];
return 0;
}
