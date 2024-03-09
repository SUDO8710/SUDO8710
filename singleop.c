#include <stdio.h>

int main(void)
{
	// your code goes here
	int t;
	scanf("%d", &t);
	// while (t!=0){
	int n;
	int counting = 0;
	scanf("%d", &n);
	char stringused[n];
	scanf("%s", stringused);
	for (int i = 0; stringused[i] != '0'; i++)
	{
		if (stringused[i] == '1')
		{
			counting++;
		}
		else
		{
			break;
		}
	}
	printf("%d", counting);
	// t--;
}

// return 0;
//}
