#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binarySearch (int A[] , int i, int j, int k){
    int m, result = -1;
    while (i <= j){
        //m = (i + j) > 1;
        m = (i + j) /2;
        if(A[m] == k){
            result = m;
            break;
        }
        else{
            if(k > A[m])
                i = m + 1;
            else
                j = m - 1;
            }
    }
    if( result == -1)
        result = ( -1) * i - 1;
    return result ;
}

int main(){
    
    int cantPuntos = 0;
    
    while((scanf("%d", &cantPuntos)) != EOF){
        int arr[cantPuntos];
        int sumatoria[cantPuntos];
        
        // Leer Datos
        for(int i= 0; i < cantPuntos; i++){
            scanf("%d", &arr[i]);
    
        }
        
        //Hacer sumatoria
        sumatoria[0] = arr[0];
        for(int i= 1; i < cantPuntos; i++){
            sumatoria[i] = sumatoria[i-1] + arr[i];
        }
        
        int totalSumatoria = sumatoria[cantPuntos-1];
        if (totalSumatoria % 3 != 0){
            printf("%d\n", 0);
        }else{
            int contTriangulos = 0;
            for(int i= 0; i < cantPuntos; i++){
                int longArco = totalSumatoria / 3;
                int linea1 = longArco + sumatoria[i];
                int linea2 = longArco + linea1;
                if(binarySearch(sumatoria, 1, cantPuntos, linea1) >= 0){
                    if(binarySearch(sumatoria, 1, cantPuntos, linea2) >=0 ){
                        contTriangulos++;
                    }
                }
            }
            printf("%d\n", contTriangulos);
        }
}
    return 0;
}