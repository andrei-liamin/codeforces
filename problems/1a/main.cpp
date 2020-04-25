#include <iostream>
#include <string>

using namespace std;

int main()
{
  uint64_t n, m, a;
  cin >> n >> m >> a;
  uint64_t n_count, m_count;
  n_count = n / a;
  if (n % a != 0) {
    n_count++;
  }
  m_count = m / a;
  if (m % a != 0) {
    m_count++;
  }
  uint64_t count = n_count * m_count;
  cout << count << endl;
  return 0;
}