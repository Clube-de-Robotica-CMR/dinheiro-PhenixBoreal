#include "dinheiro.h"

int calcular_moedas(int centavos)
{
    int moedas = 0;
    
    // Moedas de 25 centavos
    moedas += centavos / 25;
    centavos = centavos % 25;
    
    // Moedas de 10 centavos
    moedas += centavos / 10;
    centavos = centavos % 10;
    
    // Moedas de 5 centavos
    moedas += centavos / 5;
    centavos = centavos % 5;
    
    // Moedas de 1 centavo
    moedas += centavos;
    
    return moedas;
}
