
/*
vector::erase() ==> erase() function is used to remove elements from a container from the specified position or range in a vector.
Syntax:
1. vectorname.erase(position)
2. vectorname.erase(startingposition, endingposition)
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,e,x,a,b;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }  
    cin>>x>>a>>b;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    int size=v.size();
    cout<<size<<endl;
  for(auto &e1:v)
    {
        cout<<e1<<" ";
    }
    return 0;
}
