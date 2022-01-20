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

 int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            if (i != j)
                swap(v[i], v[j]);
            j++;
        }
    }
for(int i=0;i<v.size();i++)
cout<<v[i];
return 0;
}
