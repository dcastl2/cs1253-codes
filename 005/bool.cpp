#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  for (a=0; a<=1; a++)
  for (b=0; b<=1; b++)
  for (c=0; c<=1; c++) 
  for (d=0; d<=1; d++) {
    cout << a << b << c << d << ": ";
    if ( a  && !b  ||  c  && !d) cout << "1";
    else                         cout << "0";
    if (!a  ||  b  && !c  ||  d) cout << "1";
    else                         cout << "0";
    if ( a  || !b  &&  c  || !d) cout << "1";
    else                         cout << "0";
    if (!a  &&  b  || !c  &&  d) cout << "1";
    else                         cout << "0";
    cout << endl;
  }
  return 0;
}
