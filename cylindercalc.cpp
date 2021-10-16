#include <iostream>
using namespace std;

double cylvol(double, double);

    int main()
    {
    double rad, len, fvol;
    cout <<"enter radius: ";
    cin >> rad;
    cout <<"enter length: ";
    cin >> len;
    
    fvol = cylvol(rad, len);
    cout <<"the volume is: " << fvol << endl;

    return 0;
    }
  
  double cylvol(double crad, double clen) {
    const double p = 3.1416;
    double fvol = p * (crad * crad) * clen;
    return fvol;
  }