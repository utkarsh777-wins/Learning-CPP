#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    printf("Enter the number of elements: ");
    printf("\n");
    scanf("%d", &n);

    int *arr = malloc(n*sizeof(int));
    
    // taking input 
    for(int i=0; i<n; i++) {
        printf("Enter element #%d: ", i+1);
        scanf("%d", arr[i]);
    }

    

    return 0;

}