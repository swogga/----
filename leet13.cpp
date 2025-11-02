#include <iostream>
using namespace std;


int main()
{

	const int n = 10;
	int count = 0;
	int ar[n];
	for (int i = 0; i < n; ++i) 
	{
		cin >> ar[i];
	}
	for (int i = 0; i < n-1; ++i)
	{
		if (ar[i] != ar[i + 1])
		{
			++count;
		}
		else
		{

		}
	}
	
	cout << count << endl;
	system("pause");
	return 0;
}