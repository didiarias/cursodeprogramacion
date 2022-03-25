#include <stdio.h>

int main() {
    int m[3][3];
    int det1,det2,det3; 
    /* a b c
       d e f
       g h i
      */
      //
      for(int i=0;i<=2;i++){
          for(int j =0;j<=2;j++){
              printf("\nIngrese el numero de la fila %d y columna %d : ",i+1,j+1);
              scanf("%d",&m [i] [j]);
          }
      }
      
      //det1 =a*(e*i-f*h)
    det1=m[0][0]*(m[1][1]*m[2][2]-m[1][2]*m[2][1]);
    //det2 =b*(d*i-f*g)
    det2=m[0][1]*(m[1][0]*m[2][2]*m[1][2]-m[2][0]);
    //det3 =c*(d*i-f*g)
    det3=m[0][2]*(m[1][0]*m[2][2]-m[1][2]*m[2][0]);
    
    int determinante=det1-det2+det3 ;
    printf("El determinante es %d",determinante);
    
    
    
    return 0;
}
