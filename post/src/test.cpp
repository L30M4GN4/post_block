/* system example : DIR */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i;
	printf ("Executing file...\n");
	i = system ("/home/leo/Programming/Aes256/build/utils/encrypt 123 /home/leo/Programming/post/lol 						result");                                               
	printf ("The value returned was: %d.\n",i);

	getchar();
	return 0;
}
