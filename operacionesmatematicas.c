#include <stdio.h>
#include <math.h>
void suma(int num1,int num2);
void resta(int num1,int num2);
void producto(int num1,int num2);
void division(int num1,int num2);
void potencia(int num1,int num2);

int main() {
int num1,num2;
char opcion;
printf("*********MENU****************\n");
printf("*OPCION               OPERACION*\n");
printf("*(a)                      SUMA*\n");
printf("*(b)                       RESTA*\n");
printf("*(c)                MULTIPLICACION*\n");
printf("*(d)                    DIVISION*\n");
printf("*(e)                    POTENCIA*\n");
printf("***********************************\n");

printf("INGRESE UNA OPCION: ");
scanf (" %c",&opcion);

printf("INGRESE EL PRIMER NUMERO: ");
scanf("%d",&num1);

printf("INGRESE EL SEGUNDO NUMERO: ");
scanf("%d",&num2);

switch(opcion){
    case'a' :
    suma(num1,num2);
    break;
    case'b' :
    resta(num1,num2);
    break;
    case'c' :
    producto(num1,num2);
    break;
    case'd' :
    division(num1,num2);
    break; 
    case'e' :
    potencia(num1,num2);
    break;
}
    return 0;
}

void suma(int num1,int num2){
    int suma=num1 +num2;
    printf("LA SUMA DE LOS DOS NUMEROS ES : %d",(num1+num2));
}        
        
void resta(int num1,int num2){
    int resta=num1-num2;
    printf("LA RESTA DE LOS DOS NUMEROS ES : %d",(num1-num2));
}             
void producto(int num1,int num2){
    int multiplicacion=num1*num2;
    printf("EL PRODUCTO DE LOS DOS NUMEROS ES : %d",(num1*num2));
}                 
void division(int num1,int num2){
    
    float numero1 = num1;
    float numero2 = num2;
    if(num2 == 0){
        printf("NO SE PUEDE DIVIDIR POR 0");
    }else {
    
    printf("LA DIVISION DE LOS DOS NUMEROS ES : %.2f",(numero1/numero2)); }
    }
    void potencia(int num1,int num2){
    int resultado = pow(num1,num2);
    printf ("AL ELEVAR EL PRIMER NUMERO AL SEGUNDO NOS QUEDA : %d",resultado);
        }
        



        
