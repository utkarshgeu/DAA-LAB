#include <bits/stdc++.h>
using namespace std;


int partition(int arr[], int p, int q) {
    int v = arr[p];
    int i = p + 1;
    int j = q;

    while (i <= j) {
        
        while (i <= j && arr[i] <= v) {
            i++;
        }
        
        while (i <= j && arr[j] > v) {
            j--;
        }
      
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
  
    swap(arr[p], arr[j]);

    return j; 
}


void quickSort(int arr[], int p, int q) {
    if (p < q) {
        int j = partition(arr, p, q);
        quickSort(arr, p, j - 1); 
        quickSort(arr, j + 1, q);
    }
}

int main() {
    int arr[] = {2, 3, 1, 0, 4, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
