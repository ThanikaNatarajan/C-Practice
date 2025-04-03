#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int ele;
    scanf("%d", &ele);

    for (int i = 0; i < n; i++) {
        if (arr[i] > ele) {
            for (int j = i; j < n - 1; j++) {  // Shift elements left
                arr[j] = arr[j + 1];
            }
            n--;  // Reduce array size
            i--;  // Recheck the current index after shifting
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Fixed output formatting
    }

    return 0;
}
