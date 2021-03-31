#include <stdio.h>
#define TAM 100

float convert(int cels)
{
float Fahr;
Fahr = (cels*9/5) + 32;
return(Fahr);
}

void main(){
int celsius;
float fahrenheit;
printf(" ==CELSIUS== |   ==FAHRENHEIT==\n");
    for(celsius=0;celsius<=TAM;celsius++)
    {
    fahrenheit = convert(celsius);
    printf("%3d Celsius  |  %.2f Fahrenheit\n", celsius, fahrenheit);
    }
}
