//
// Universidade Federal do Rio Grande do Sul
// Escola de Engenharia
// Departamento de Engenharia Elétrica
// Instrumentação A
//
// https://github.com/Rogiel/ufrgs-instrumentacao-lab3
//

#pragma once

#include "IO/Pin.h"
#include "IO/Button.h"

class Application {
public:
	/**
	 * Cria uma nova instância do aplicativo
	 */
	Application();

public:
	/**
	 * Initializes the application
	 */
	void init();

	/**
	 * Executa o loop principal
	 */
	void loop();

public:
	/**
	 * Retorna uma instância compartilhada do aplicativo
	 */
	static Application& sharedApplication();

};
