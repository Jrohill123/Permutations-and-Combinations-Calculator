#include "Combinations.h"

void Combinations::calculation(int n, int r)
{
	top = n;
	for (int i = n - 1; i >= 1; i--)
	{
		top *= i;
	}
	bottom = n - r; 
	for (int j = 1; j < n - r; j++)
	{
		bottom *= j;
	}
	bottom2 = r; 
	for (int k = r - 1; k >= 1; k--)
	{
		bottom2 *= k;
	}
	answer = (top / (bottom * bottom2));
	cout << answer;
}
