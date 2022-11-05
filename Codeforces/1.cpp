#include<bits/stdc++.h>

int main() {

    int n, i;
    bool hard = false;
    scanf("%d", &n);

    while(n--) {
        scanf("%d", &i);
        if (i == 1){
            printf("hard\n");    
            return 0;
        } 
    }
    printf("easy\n");
    return 0;
}