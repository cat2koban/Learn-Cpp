#include <bits/stdc++.h>
using namespace std;
int ans=1;
int n,k;
int main()
{
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        if((ans*2) < (ans+k))
        {
            ans *= 2;
        } else
        {
            ans += k;
        }
    }
    cout << ans << endl;
}
