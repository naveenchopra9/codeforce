#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <cstring>
#include <regex>
using namespace std;
#define IN ({int n; scanf("%d", &n);    n;})
#define CN ({char _char; scanf(" %c",&_char); _char;})a
#define REP(i, a, b) for (int i = int(a); i < int(b); i++)
#define FR freopen("input.txt","r",stdin)
#define FW freopen("output.txt","w",stdout)
int main()
{
    int temp1=0,temp2=0;
    int arr[5][5];
    for(int i =0 ; i < 5; i++)
    {
        for(int j =0 ; j< 5 ; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                temp1=i;
                temp2=j;
            }
        }
    }
    int magic=0;
    magic+=abs(2-temp2);
    magic+=abs(2-temp1);
    cout<<magic<<endl;
}

