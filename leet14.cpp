#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int t, x, count = 0;
	cin >> x;
	
	t = x;
	while (x != 0)
	{
		count++;
		x /= 10;

	}
	--count;
	while (t > 0)
	{
		x = x + (t % 10) * pow(10, count--);
		t /= 10;
	}
	cout << x << endl;
	system("pause");
	return 0;
}