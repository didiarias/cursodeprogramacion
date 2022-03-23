#include <stdio.h>

int main() {
    int fechas [2][3];
    for (int i =1;i<=2;i++){
        printf("Ingrese fecha de nacimiento :");
        for(int j = 1;j<=3;j++){
            printf("Ingrese fecha de nacimiento");
            printf("\nIngrese dia de nacimiento : ");
            scanf("%d",&fechas[i-1][0]);
            printf("\nIngrese el mes de nacimiento : ");
            scanf("%d",&fechas[i-1][1]);
            printf("\nIngrese el anio de nacimiento : ");
            scanf("%d",&fechas[i-1][2]);
            
        }
        printf("PERSONA    DIA    MES   AÑO\n");
        for(int i =1;i<=2;i++){
         printf("  %d      %d      %d     %d\n",i,fechas[i-1][2]);
            
        }
    }
    
    return 0;
}
