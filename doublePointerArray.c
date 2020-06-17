#include <stdio.h>

int main()
{
    int n1[3] = {1,2,3};
    int n2[3] = {4,5,6};
    int n3[3] = {7,8,9};
    int* arr[3] = {&n1, &n2, &n3};
    int **ptr = &arr;

    for (int i = 0; i< 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", *(*(ptr+i)+j));
        }
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("%d", ptr[i][j]);
        }
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("%d", (*ptr+i)[j]);
        }
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("%d", (*ptr)[j]);
        }
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("%d", (*ptr[j]));
        }
        printf("\n\n");
        
    }
    
    return 0;
}
