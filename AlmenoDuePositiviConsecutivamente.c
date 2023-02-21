#include <stdio.h>

/* Programma che chiede ripetutamente all'utente di inserire interi fintanto che l'utente
 * non introduce il numero 0. L'applicazione termina stampando un messaggio che dice
 * all'utente se sono stati introdotti almeno due numeri positivi consecutivamente oppure no. */
int main() {
	    int numero;                            // un intero da leggere
		int trovatiDueConsecutivi;      // hai trovato due positivi consecutivi?
		int ultimoPositivo;                        // l'ultimo letto e' positivo?
		
		/* inizialmente nessun positivo e' stato letto */
		trovatiDueConsecutivi = 0;
		ultimoPositivo = 0;
		
		/* leggi numeri ripetutamente */
		do {
			     /* INPUT */
				 printf("Caro utente, introduci un intero, please, 0 per terminare.\n");
                 scanf("%d", &numero);

                 /* se il numero letto e' positivo verifica se pure l'ultimo numero era positivo e
                         preparati per il prossimo giro */
                 if(numero>0) {
					     if(ultimoPositivo)
							     trovatiDueConsecutivi = 1;
						 ultimoPositivo = 1;
				 }
				 /* se il numero letto non e' positivo preparati per il prossimo giro */
				 else 
					     ultimoPositivo = 0;
		}
		while(numero!=0);
		
		/* OUTPUT */
		if(trovatiDueConsecutivi)
				printf("\nHai introdotto due numeri positivi consecutivamente.\n");
		else
			    printf("\nNon hai introdotto due numeri positivi consecutivamente.\n");
		
}
