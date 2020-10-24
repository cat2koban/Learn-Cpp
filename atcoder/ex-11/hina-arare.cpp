#include <bits/stdc++.h>
using namespace std;
int n;
char c;

int main() {
    scanf("%d",&n);
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        scanf("%c", &c);
        if(c=='Y')flag=true;
    }
    if(flag)puts("Four");
    else puts("Three");
}
