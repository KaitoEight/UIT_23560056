#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = 0;
	int t = 1;
	for (int i = 1; i <= 2*n; i = i + 2)
	{
		t = t * x * x;
		S = S + t;
	}
	cout << S;
	return 0;
}