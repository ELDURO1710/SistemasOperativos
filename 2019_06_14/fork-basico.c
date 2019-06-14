#include <unistd.h>
#include <stdio.h>
/**este programa en c, debe imprimir lo siguiente:
soy el hijo, mi identificador es 34567
soy el padre, mi identificador es 34566 y el de mi hijo es 34567
hacer uso de la funcion 'getpid()'
*/

int main (int argc, char** argv)
{
	pid_t pid;
	
	
	pid = fork();
	if(pid==0)
	{
		int hijo = (int) getpid();
		printf("soy el hijo y mi identificador es:: %d\n", 			(int) getpid());
	}
	else

	{
		printf("soy el padre, mi identificador es: %d y el de 			mi hijo es: %d\n", (int) getpid(), pid);

	}



}
