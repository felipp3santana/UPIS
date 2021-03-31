#include "retangulo.h"

void main(void){
Retangulo ret;

//=====Iniciar um ret�ngulo com base e altura informados:
    printf("\n====INICIAR RETANGULO====");
    iniciarRetangulo(&ret, 10.0, 2.0);
    printf("\nPrimeiras medidas inseridas: ");
    mostrarRetangulo(ret);
//=====Modificar ret�ngulo (com nova base e nova altura informados):
    printf("\n\n===MODIFICAR RETANGULO===");
    modificarRetangulo(&ret, 25.0, 4.0);
//=====Calcular �rea (recebe como par�metro de entrada um retangulo, calcula e devolve a �rea deste ret�ngulo):
    printf("\n=====CALCULAR AREA=======");
    calcularArea(ret);
//=====Mostrar ret�ngulo (recebe um ret�ngulo mostra seus dados � base, altura e �rea, esta �ltima chamando a fun��o Calcular �rea):
    printf("\n\n====MOSTRAR RETANGULO====");
    mostrarRetangulo(ret);
    printf("\n=========================\n\n");
}
