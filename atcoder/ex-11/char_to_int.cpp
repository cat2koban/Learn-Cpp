#include <bits/stdc++.h>
using namespace std;
string n;
int sum=0;
int main()
{
    cin >> n;
    for (int i=0; i<n.length(); i++)
    {
        sum += (n.at(i) - '0');
    }
    cout << "\nn.at(i) - '0' の書き方\n";
    cout << sum << endl;

    sum = 0;
    for (int i=0; i<n.length(); i++)
    {
        sum += ((int)n.at(i) - 48);
    }
    cout << "\n(int)n.at(i) - 48 の書き方\n";
    cout << sum << endl;
}
