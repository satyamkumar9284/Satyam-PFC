#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Deletion not possible. Invalid position.\n");
    } else {
        // Shifting elements to the left
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Reduce size of array

        printf("Resultant array: ");
        for(i = 0; i < n; i++) printf("%d ", arr[i]);
    }

    return 0;
}