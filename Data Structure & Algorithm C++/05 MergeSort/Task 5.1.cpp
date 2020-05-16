#include <iostream>
using namespace std;
void merge(int*, int, int, int);
void merge_sort(int* arr, int low, int high)
{
    int mid;
    if (low < high) 
    {
        //Brake the array from mid and sort Seperatly one by one through calling merge sort...
        mid = (low + high) / 2;
        merge_sort(arr, low, mid); //whenever step is used when it will complete, then continue from next step...
        merge_sort(arr, mid + 1, high);
        //Sorting And Merge Array...
        merge(arr, low, high, mid);
    } 
}
// Merge sort 
void merge(int* arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) 
    {
        if (arr[i] < arr[j]) 
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) 
    {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++) 
    {
        arr[i] = c[i];
    }
}
// read input array and call mergesort
int main()
{
    int arr[30], num;
    cout << "Enter number of elements to be sorted:"<<endl;
    cin >> num; // setting size
    
    cout << "Enter " << num << " Elements to be sorted:"<<endl;
    for (int i = 0; i < num; i++) //input for loop
	{
        cin >> arr[i];
    }
    
    merge_sort(arr, 0, num - 1);
    cout << "Sorted array"<<endl;; //output for loop
    
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}
