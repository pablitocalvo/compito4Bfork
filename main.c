//************************************************************************+
//  1)
//  modificare il presente programma in modo che :
//
//   il processo figlio stampi i numeri da 1 a 5
//   il processo padre stampi i numeri  da 6 a 10
//  segnalando chi ha stampato il numero
//
//  esempio di output :
//   figlio 6
//   figlio 7
//   figlio 8
//   figlio 9
//   figlio 10
//padre 1
//padre 2
//padre 3
//padre 4
//padre 5
//
//   2) lanciarlo molte volte ed inserire i vostri commenti in fondo al file


#include <stdio.h>

int main( void ) {
	int pid = fork();

	if ( pid == 0 )
        {
		printf( "hello world dal figlio \n" );
        }
	else
        {
		printf( "hello world dal padre \n" );
        }

	return 0;
}

/* COMMENTI SULL'ESECUZIONE DEL PROGRAMMA:


*/
