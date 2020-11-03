#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> cards(n);
    for(int& elem : cards)
        cin >> elem;

    int alice=0;
    int bob=0;
    sort(cards.begin(), cards.end());
    for (int i=0;i<n;i++) {
        if (i==0||i%2==0){
            alice+=cards.at(i);
        } else {
            bob+=cards.at(i);
        }
    }
    cout << abs(alice - bob) << endl;
}
