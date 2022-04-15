#include <stdio.h>

int main()
{
	int a;
	fscanf(stdin, "%d", &a);
	fprintf(stdout,"%d\n",a+100);
	fprintf(stderr,"Hello stderr %d\n",a+100);
	fflush(stdout);
	fflush(stderr);
	return 0;
}
