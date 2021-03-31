#include "retangulo.h"

void main(void){
Retangulo ret;

//=====Iniciar um retângulo com base e altura informados:
    printf("\n====INICIAR RETANGULO====");
    iniciarRetangulo(&ret, 10.0, 2.0);
    printf("\nPrimeiras medidas inseridas: ");
    mostrarRetangulo(ret);
//=====Modificar retângulo (com nova base e nova altura informados):
    printf("\n\n===MODIFICAR RETANGULO===");
    modificarRetangulo(&ret, 25.0, 4.0);
//=====Calcular área (recebe como parâmetro de entrada um retangulo, calcula e devolve a área deste retângulo):
    printf("\n=====CALCULAR AREA=======");
    calcularArea(ret);
//=====Mostrar retângulo (recebe um retângulo mostra seus dados – base, altura e área, esta última chamando a função Calcular área):
    printf("\n\n====MOSTRAR RETANGULO====");
    mostrarRetangulo(ret);
    printf("\n=========================\n\n");
}
