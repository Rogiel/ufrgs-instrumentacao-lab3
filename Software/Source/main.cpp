//
// Universidade Federal do Rio Grande do Sul
// Escola de Engenharia
// Departamento de Engenharia Elétrica
// Instrumentação A
//
// https://github.com/Rogiel/ufrgs-instrumentacao-lab3
//

#include "Application.h"

/**
 * Entry point function
 */
int main () {
	WDTCTL = WDTPW | WDTHOLD;

	Application application;
	application.init();
	while(true) {
		application.loop();
	}
}
