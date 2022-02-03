#include <stdio.h>
int main(void) {
	int length = 0;
	int breadth = 0;
		printf("Type the length\n");
		scanf_s("%10d", &length);
		printf("Type the breadth\n");
		scanf_s("%10d", &breadth);
		int size = length * breadth;
		printf("The area is %d\n", size);
		printf("I am going to tell you the perimeter.\n");
		int perimeter = 2 * (length + breadth);
		printf("It is %d\n", perimeter);
}