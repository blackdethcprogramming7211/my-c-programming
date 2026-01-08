#include <stdio.h>

int main() {
    int n ;
printf("enter n:");
scanf("%d" ,&n);
int arr[100];
for(int i=0;i<n;i++){
    scanf("%d" ,&arr[i]);
}
    // INSERT 25 at index 2
    int pos, value;
    printf("enter pos:");
    scanf("%d" ,&pos);
    printf("enter value:");
    scanf("%d" ,&value);
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;

    // DELETE element at index 1
    pos = 1;
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    // PRINT final array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
