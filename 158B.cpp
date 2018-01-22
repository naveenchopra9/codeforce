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
    int arr[5]={0};
    int p;
    for(int i =0 ; i< n ; i++)
    {
        cin>>p;
        arr[p]++;
    }
    int a1=arr[1];
    int a2=arr[2];
    int a3=arr[3];
    int a4=arr[4];
    cout<<a1<<a2<<a3<<a4<<endl;
    int temp=0;
    
    temp=a4;
    
    if(a3>a1)
    {
        temp+=a3;
        a1=0;
    }
    else
    {
        temp+=a3;
        a1=a1-a3;
    }
    
    temp+=a2/2;
    
    int x=a2%2;
    
    if(x!=0)
    {
          temp++;
        
        if(a1!=0)
        {
            a1=a1-2*x;
        }
    }
    temp+=(a1+3)/4;
    cout<<temp<<endl;
    return 0;
}

