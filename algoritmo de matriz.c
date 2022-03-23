#include<stdio.h>
int main(){
#include<stdio.h>
int matriz [3] [3];
/* 
2 5 8
7 1 10
9 5 -3
*/

for(int i=0;i<=2;i++){
	printf("\nEstoy en la fila %d",i+1);
	for(int j=0;j<=2;j++){
		printf("\nEstoy en la columna %d",j+1);
		printf("\nIngrese el dato en la fila %d y columna %d : ",i+1,j+1);
		scanf("%d",&matriz[i][j]);
	
}
}
// ACA SE DEFINE EL MENSAJE EN PANTALLA DE LOS DATOS INGRESADOS
printf("\n\n\n\n");
for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){
        printf("%d",matriz[i][j]);
    }
    printf("\n");
}
return 0;
}


