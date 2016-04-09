//
// Universidade Federal do Rio Grande do Sul
// Escola de Engenharia
// Departamento de Engenharia Elétrica
// Instrumentação A
//
// https://github.com/Rogiel/ufrgs-instrumentacao-lab3
//

#include "Application.h"

Application::Application() { }

void Application::init() {
	// configura o clock interno para 16 MHz
	BCSCTL1 = CALBC1_16MHZ;
	DCOCTL  = CALDCO_16MHZ;
}

void Application::loop() {

}
