// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
    
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Removing duplicates
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 for (int k = j; k < n - 1; k++) {
//                     arr[k] = arr[k + 1]; // Shift elements left
//                 }
//                 n--; // Reduce array size
//                 j--; // Recheck current index after shifting
//             }
//         }
//     }

//     // Calculate sum of unique elements
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }

//     // Print the modified array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]); // Added space for clarity
//     }
    
//     printf("\n%d\n", sum); // Print sum of unique elements

//     return 0;
// }

    #include<stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    arr[j]=arr[j+1];
                    n--;
                    i--;
                }

            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        printf("%d",sum);
    }