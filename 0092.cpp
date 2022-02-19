//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>
 
using namespace std;
 
double x, y, d, b, s, p = 1, P = 1, sp = 0;
 
int main()
{
  cin >> x >> y >> d >> b; 
  for (int a = 1; a <= x; a++)
  s += (a * a + 2 * a) / (a * a * a + a * cos(a) * cos(a) + 1);
  for (int i = 1; i <= y; i++)
  p *= (i * i + 1) / (pow(i, 3. / i) + 2);
  for (int i = 1; i <= d; i++)
  {
    for (int k = 1; k <= b; k++)
    P *= log((pow(k, i) + pow(k, 1. / i)) / (k * k * k + pow(i, 1. / k)));
    sp += P; P = 1;
  }
  printf ("%.2f %.2f %.2f", s, p, sp);
  return 0;
}
