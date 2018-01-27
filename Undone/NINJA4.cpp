#include <bits/stdc++.h> 
using namespace std;
#define ll long

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll x, y, n, i, chk;
		cin >> n;
		i = n/5;
		x = 3 * i;
		y = (-2) * i;
		chk = n%5;
		switch(chk)
		{
			case 1:
				x = x + 1;
				break;
			case 2:
				x = x + 1;
				y = y + 2;
				break;
			case 3:
				x = x - 2;
				y = y + 2;
				break;
			case 4:
				x = x -2;
				y = y - 2;
				break;
			case 0:
				x = x + 3;
				y = y - 2;
				break;
		}
		cout << x << " " << y << endl;
	}
	return 0;
}