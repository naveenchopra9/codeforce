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
    
    string str;
    cin>>str;
    size_t l=str.length();
    int temp=0,temp1=0;
    if(str[0]>96)
            temp=1;
    for(int i =0 ; i< l; i++)
    {
        if(str[i]<91)
            temp1++;
    }
    if(temp1==l-1&&temp==1)
    {
        str[0]=toupper(str[0]);
        for(int i =1 ; i< l ; i++)
        {
            str[i]=tolower(str[i]);
        }
    }
    if(temp1==l)
    {
        for(int i =0 ; i< l ; i++)
        {
            str[i]=tolower(str[i]);
        }
    }
    cout<<str<<endl;
        
}

