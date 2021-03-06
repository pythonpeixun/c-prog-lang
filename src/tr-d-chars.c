#include <stdio.h>

#define	CHARS_TO_DEL	"ro"

int
main(void)
{
	int c;
	char a[] = CHARS_TO_DEL;

	while ((c = getchar()) != EOF) {
		int found = 0;
		/*
		 * This lecture 05 is also about why you should not use "int i"
		 * with sizeof.  Try to use int and then use "gcc -Wall -Wextra"
		 * to see what it gives you.
		 */
		size_t i = 0;

		while (i < sizeof (CHARS_TO_DEL) - 1) {
			if (c == a[i]) {
				found = 1;
				break;
			}
			++i;
		}

		if (!found)
			putchar(c);
	}
}
