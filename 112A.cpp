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
    string str1,str2;
    cin>>str1>>str2;
    size_t l1=str1.length();
    size_t l2=str2.length();
    for(int i =0 ; i< l1 ; i++)
    {
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    for(int j =0 ; j< l2 ; j++)
    {
        
    }
    if(l1>l2)
    {
        cout<<"1"<<endl;
    }
    else if(l1<l2)
    {
        cout<<"-1";
    }
    else{
        int t=str1.compare(str2);
        if(t>0)
            cout<<"1"<<endl;
        else if(t==0)
            cout<<"0"<<endl;
        else
            cout<<"-1";
    }
    return 0;
}

