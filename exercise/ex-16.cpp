#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> array(5);
    for (int& element: array)
      cin >> element;

    int num = array.at(0);
    bool ans = false;
    for (int i=1; i<5; i++)
    {
        if (abs(num - array.at(i)) == 0)
        {
            ans = true;
            break;
        }

        num = array.at(i);
    }
    cout << (ans? "Yes" : "No") << endl;
}
