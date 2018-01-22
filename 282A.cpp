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
    int n;
    cin>>n;
    int temp=0;
    for(int i =0 ; i < n ; i++)
    {
        string s;
        cin>>s;
        if(s.find('-')<s.length()-1)
        {
            temp--;
        }
        if(s.find('+')<s.length()-1)
        {
            temp++;
        }
    }
    cout<<temp<<endl;
    return 0;
}

