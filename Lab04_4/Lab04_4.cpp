#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, xp, xk, dx, R, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;

    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "----------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x <= -8)
            y = -R;
        else {
            if (x <= -R)
                y = (R * (R + x)) / (-R + 8);
            else {
                if (x <= R)
                    y = -sqrt(R * R * x * x);
                else {
                    if (x <= 5)
                        y = (2 * (x - R)) / (5 - R);
                    else
                        y = 3;
                }
            }
        }
        cout << "|" << setw(7) << setprecision(2) << x << " |" << setw(10) << setprecision(3) << y
           << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;
}

