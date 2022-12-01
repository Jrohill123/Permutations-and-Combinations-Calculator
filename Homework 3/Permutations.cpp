#include "Permutations.h"

void Permutations::calculation(int n, int r)
{
	top = n;
	for (int i = n - 1; i >= 1; i--)
	{
		top *= i;
	}
	bottom = n - r;
	for (int j = 1; j < n-r; j++)
	{
		bottom *= j;
	}
	answer = top / bottom;
	cout << answer;
}