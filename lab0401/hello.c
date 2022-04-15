#include <stdio.h>

int main()
{
	int a;
	fscanf(stdin, "%d", &a);
	fprintf(stdout,"Hello stdout %d\n",a);
	fprintf(stderr,"Hello stderr %d\n",a+100);
	return a;
}
