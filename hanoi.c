#include <stdio.h>

void printMove (char from, char to)
{
	printf("Moving from %c to %c\n", from, to);
}

void hanoi(int n, char from, char to, char spare) //'d' stands for destination, 's' is for start, 'o' for other
{
	if (n == 1) //the base case
	{
		printMove(from, to);
	}
	else
	{
		hanoi(n-1, from, spare, to);
		hanoi (1, from, to, spare); //these are the 3 moves you can make to move the rings
		hanoi(n-1, spare, to, from);
	}
}

int main()
{
	int n;
	printf("How many discs would you like?: ");
	scanf("%d", &n);
	hanoi(n, 's', 'd', 'o');
}