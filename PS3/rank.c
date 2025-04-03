// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
    
//     int arr[n];
//     int dup[n], unique[n], unique_count = 0;


//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         dup[i] = arr[i];
//     }


//     for (int i = 0; i < n; i++) {
//         int isDuplicate = 0;
//         for (int j = 0; j < unique_count; j++) {
//             if (dup[i] == unique[j]) {
//                 isDuplicate = 1;
//                 break;
//             }
//         }
//         if (!isDuplicate) {
//             unique[unique_count++] = dup[i];
//         }
//     }


//     for (int i = 0; i < unique_count - 1; i++) {
//         for (int j = i + 1; j < unique_count; j++) {
//             if (unique[j] > unique[i]) { 
//                 int temp = unique[j];
//                 unique[j] = unique[i];
//                 unique[i] = temp;
//             }
//         }
//     }


//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < unique_count; j++) {
//             if (arr[i] == unique[j]) {
//                 printf("%d ", j+1);
//                 break;
//             }
//         }
//     }

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
        int r=1;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i] && i!=j)
            {
                r++;
            }
        }
        printf("%d ",r);
    }
}