#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int newfile = creat("newfile.txt", 0600);

	if (newfile == 0)
		return (-1);

	printf("newfile returns %d\n", newfile);

	return (0);
}
