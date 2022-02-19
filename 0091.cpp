//Author: R.U.S.T.E.A.M
#include <bits/stdc++.h>
 
using namespace std;
double Pow(double x, double y)
{
  double P = 1;
  for (int i = 0; i < y; i++)
  {
    P *= x;
  }
  return P;
}
 
 
double a, b, c, d;
double S, P = 1, SP = 0, P1 = 1;
 
int main()
{
  cin >> a >> b >> c >> d;
  for (double m = 1; m <= a; m++)
    S += (3 * m * m * m + 4 * m + 5) / (m * m * m + log(m));
  for (double k = 1; k <= b; k++)
    P *= (k / (k * k * k + 7 * k + 5));
  for (double i = 1; i <= c; i++)
  {
    for (double m = 1; m <= d; m++)
    {
      P1 *= (log(i) + Pow(m, i)) / Pow(m, i);
    }
    SP += P1; P1 = 1;
  }
  
  printf ("%.2f %.2f %.2f", S, P, SP);
  return 0;
}
