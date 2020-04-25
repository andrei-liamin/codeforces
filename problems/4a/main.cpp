#include <iostream>
#include <string>

using namespace std;

int main()
{
  int weight;
  cin >> weight;
  if (weight % 2 == 1)
  {
    cout << "NO" << endl;
  }
  else if (weight == 2)
  {
      cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
  }
  return 0;
}