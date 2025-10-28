#include "types.h"
#include "user.h"

int main(int argc, char* argv[])
{
	int pid;
	shc(-1);
	for(int i = 0; i < 4; ++i)
	{
		switch(pid = fork())
		{
			case -1:
				break;
			
			case 0:
				for(int j = 0; j < 10000; j++)
				{
					shc(1);
				}
				exit(0);
			
			default:
				break;
		}
	}
	for(int i = 0; i < 4; ++i)
	{
		wait(0);
	}
	printf(1, "Valeur : %d\n", shc(0));
	exit(0);
}
