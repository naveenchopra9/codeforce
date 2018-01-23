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
    int arr[4]={0};
    string str;
    cin>>str;
    for(int i =0 ; i < str.length(); i++)
    {
    
        if(str[i]=='H')
            arr[0]++;
        else if(str[i]=='Q')
            arr[1]++;
        else if(str[i]=='9')
            arr[2]++;
    }
    int temp=0;
    for(int i =0 ; i< 3 ; i++)
    {
        if(arr[i]>0)
            temp=1;
    }
    if(temp==1)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

