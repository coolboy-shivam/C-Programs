#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[], int ch, int low, int high){
    int index, mid;
    mid = (low+high)/2;
    if(ch == arr[mid]){
        return mid;
    }
    if(ch < arr[mid]){
        return binary_search(arr, ch, low, mid-1);        
    }
    else{
        return binary_search(arr, ch, mid+1, high);
    }
}
int main(){
    system("cls");
    printf("Binary Search Program in C");
    int arr[100], n, i, ch;                                                                        

    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);
    
    printf("\nEnter %d Array Elements in Increasing Order :- \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", (i+1));
        scanf("%d", &arr[i]);
    }

    printf("\nArray Elements are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter Element to Search : ");
    scanf("%d", &ch);

    printf("\n%d found at index = %d", ch, binary_search(arr, ch, 0, n));
    
    return 0;
}