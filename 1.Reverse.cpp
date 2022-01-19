#include <bits/stdc++.h>
#include <vector>
#include<iterator>
using namespace std;
int main()
{
int n=0,a=0;
vector<int>v;
cout<<"Enter size";
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a;
    v.push_back(a);
}
reverse(v.begin(),v.end());
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
return 0;
}