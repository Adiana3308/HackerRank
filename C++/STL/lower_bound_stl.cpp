#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,e,q,y;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }  
    cin>>q;
    int ans=0;
    for(int i=0;i<q;i++)
    {
        cin>>y;
        auto jam=lower_bound(v.begin(),v.end(),y);
        if(*jam==y)
        {
            cout<<"Yes "<<(jam-v.begin()+1)<<endl;
        }
        else
        {
            cout<<"No "<<(jam-v.begin()+1)<<endl;
        }
    }
    return 0;
}
