#include<stdio.h>
 
 
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
 
 
int partition (int arr[], int low, int high)
{
	int m = int((low+high)/2);
    int pivot = arr[m];   
    int left = low;
    int right = high;
    while(true){
        while(arr[left] < pivot) left++;
        while(arr[right] > pivot) right--;
        if (left >= right) break;
        swap(arr[left], arr[right]);
    }
    return left;
}
void quickBubbleSort(int arr[], int n){
	int i, j;
    bool haveSwap = false;
    for (i = 0; i < n; i++){
        haveSwap = false;
        for (j = 0; j < n-i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        if(haveSwap == false){
            break;
        }
    }
}
void quickSort(int arr[], int low, int high, int limitLength)
{
	int k = high - low;
    if (k > limitLength)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1,limitLength);
        quickSort(arr, pi + 1, high,limitLength);
    }
    else
    quickBubbleSort(arr, high);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
 
int main()
{
    int arr[] = {10, 80, 30, 40, 90, 50, 70, 66, 44,55,33,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m;
    printf("\n nhap gioi han chia: ");
    scanf("%d",&m);
    quickSort(arr, 0, n-1,m);
    printf("\nSorted array: \n");
    printArray(arr, n);
    return 0;
}
