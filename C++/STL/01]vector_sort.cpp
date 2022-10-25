#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    vector<int>v;
    int numbs;
    // while(cin>>numbs)
    // {
    //  v.push_back(numbs);   
    // }
    for(auto i=0;i!=n;i++)
    {
        cin>>numbs;
        v.push_back(numbs);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
