#include <stdio.h>

int main() 
{

    unsigned long x = 0, y = 0, res = 0;

    while (scanf("%lu %lu", &x, &y)  && (x>0) && (y>0)){
        
        res = (x + y - 1) * (x + y) / 2 + 1;
        if ((x + y) % 2 == 0){
            res -= x;
        }else{
            res -= y;
        }
            
        printf("%lu \n", res);
    }
    return 0;
}