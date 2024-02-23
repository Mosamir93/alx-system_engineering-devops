#include <stdio.h>
#include <fcntl.h>

/**
 * infinite_while - infinite while loop
 * Return: always returns 0
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - entry point creates 5 zombie processes
 * Return: always returns 0
 */

int main(void)
{
	int i;
	pid_t pid;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (!pid)
			break;
		printf("Zombie process created, PID: %i\n", pid);
	}
	if (pid)
		infinite_while();
	return (0);
}
