#include <stdio.h>
int main() {
    int n=14, i, is_sorted;
    printf("How many numbers do you want to sort? ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int temp;
    do {
        is_sorted=1;
        for (i=0;i<n-1;i++) {
        	for (;i<(n-1); i++) { 
                if (arr[i]>arr[i+1]) {
                	temp=arr[i];
                	arr[i]=arr[i+1];
                	arr[i+1]=temp;
                	is_sorted=0;
            	}
            } 
        }
    } while (!is_sorted);
    printf("Sorted numbers: ");
    for (i=0;i<n;i++) printf("%d ", arr[i]);
}
