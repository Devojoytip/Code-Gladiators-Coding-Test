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
    int n,x;
    std::cin>>n;
    std::cin>>x;

    std::vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        std::cin>>v[i];
    }

    sort(v.begin(),v.end());

    if(n-x>0 and v[n-x-1]==v[n-x]) std::cout<< -1;
    else std::cout<< v[n-x];
}
