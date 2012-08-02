#include<stdio.h>

int main()
{
	char n[] = "Azad Ansari";
	int i=0;

	while(n[i])
	{
		printf("%c %c %c\n ", n[i], *(n+i), *(i+n),i[n] );
		i++;
	}
	return 0;
}
