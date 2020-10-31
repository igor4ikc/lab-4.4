#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R{}, y;
	cout << "x = "; cin >> x;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(12) << "R" << " |" << endl;
	cout << "---------------------------" << endl;

	for (x = xp; x <= xk; x += dx)
	{
		if (x <= -1 - R)
			y = -(x + 1 + R);
		else
			if (x > -1 - R && x <= -1)
				y = sqrt(R * R - (x + 1) * (x + 1));
			else
				if (x > -1 && x <= 1)
					y = R;
				else
					if (x > 1 && x <= 2)
						y = 2 * R + x - 1 + R * x / 3;
					else
						y = -1;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
	}
	cout << "---------------------------" << endl;
	return 0;
}