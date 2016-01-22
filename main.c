//************************************************************************+
//  1)
//  modificare il presente programma in modo che :
//
//   il processo figlio stampi i numeri da 1 a 5
//   il processo padre stampi i numeri  da 6 a 10
//  segnalando chi ha stampato il numero
//
//  esempio di output :
//   figlio 1
//   figlio 2
//   figlio 3
//   figlio 4
//   figlio 5
//   padre 6
//   padre 7
//   padre 8
//   padre 9
//   padre 10
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
