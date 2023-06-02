/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <bits/stdc++.h>
int main(int argc, char *a[])
{
    //Write code here
    int n,m;
    std::cin>>n;
    std::cin>>m;

    std::vector<int> v(n);
    std::vector<int> q(m);
    std::vector<int> res(m,0);

    for(int i=0;i<n;i++)
    {
        std::cin>>v[i];
    }

    for(int i=0;i<m;i++)
    {
        std::cin>>q[i];
    }

    // sort(v.begin(),v.end());

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            res[i]+=abs(q[i]-v[j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        std::cout<<res[i]<<" ";
    }
}
