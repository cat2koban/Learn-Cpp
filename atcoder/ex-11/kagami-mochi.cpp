#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> array(n);
  for (int& element: array)
  {
 cin >> element;

  sort(array.begin(), array.end());

  int ans = 1;
  int array_one = array.at(0);

  for (int i=1; i<array.size(); i++)
  {
      if ((array_one - array.at(i)) != 0)
      {
        ans++;
        array_one = array.at(i);
      }
  }
  cout << ans << endl;
}
