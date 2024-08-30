int	max(int* tab, unsigned int len)
{
	int max = tab[0];
	unsigned int i = 1;

	if (len == 0)
		return 0;

	while (i < len)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	return max;
}

#include <stdio.h>
int main() {
    int arr[] = {2, 3, 4, 1, 7, 6};
    unsigned int len = sizeof(arr) / sizeof(arr[0]);
    int result = max(arr, len);
    printf("The maximum value in the array is: %d\n", result);
    printf("The length is: %d", len);
    return 0;
}
