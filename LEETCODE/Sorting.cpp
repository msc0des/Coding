/*ITERATIVE MERGESORT
#include <iostream>

using namespace std;
 
template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
 
void Merge(int A[], int low, int mid, int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high+1];
    while (i <= mid && j <= high){
        if (A[i] < A[j]){
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid){
        B[k++] = A[i++];
    }
    while (j <= high){
        B[k++] = A[j++];
    }
    for (int i=low; i<=high; i++){
        A[i] = B[i];
    }
}
 
void IterativeMergeSort(int A[], int n){
    int p;
    for (p=2; p<=n; p=p*2){
        for (int i=0; i+p-1<n; i=i+p){
            int low = i;
            int high = i+p-1;
            int mid = (low+high)/2;
            Merge(A, low, mid, high);
        }
    }
    if (p/2 < n){
        Merge(A, 0, p/2-1, n-1);
    }
}
void RecursiveMergeSort(int A[], int low, int high){
    if (low < high){
        // Calculate mid point
        int mid = low + (high-low)/2;
 
        // Sort sub-lists
        RecursiveMergeSort(A, low, mid);
        RecursiveMergeSort(A, mid+1, high);
 
        // Merge sorted sub-lists
        Merge(A, low, mid, high);
    }
}
 
int main() {
 
    int A[] = {2, 5, 8, 12, 3, 6, 7, 10};
    int n = sizeof(A)/sizeof(A[0]);
 
    Print(A, n, "\t\tA");
    IterativeMergeSort(A, n);
    RecursiveMergeSort(A,0,n-1);
    Print(A, n, " Sorted A");
 
    return 0;
}*/
 
/*SELECTION SORT
#include <iostream>
using namespace std;
template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
 
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void SelectionSort(int A[], int n){
    for (int i=0; i<n-1; i++){
        int j;
        int k;
        for (j=k=i; j<n; j++){
            if (A[j] < A[k]){
                k = j;
            }
        }
        swap(&A[i], &A[k]);
    }
}
 
int main() {
 
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    int n = sizeof(A)/sizeof(A[0]);
    Print(A, n, "\t\tA");
 
    SelectionSort(A, n);
    Print(A, n, " Sorted A");
 
    return 0;
}*/


/*INSERTION SORT
#include <iostream>
using namespace std;
template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
 
void InsertionSort(int A[], int n){
    for (int i=1; i<n; i++){
        int j = i-1;
        int x = A[i];
        while (j>-1 && A[j] > x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}
 
int main() {
 
    int A[] = {19, 17, 15, 13, 11, 9, 7, 5, 3, 1};
    Print(A, sizeof(A)/sizeof(A[0]), "       A");
 
    InsertionSort(A, sizeof(A)/sizeof(A[0]));
    Print(A, sizeof(A)/sizeof(A[0]), "Sorted A");
 
    return 0;
}*/

/*BUBBLE SORT
#include <iostream>
using namespace std;
template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
 
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void BubbleSort(int A[], int n){
    int flag = 0;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++){
            if (A[j] > A[j+1]){
                swap(&A[j], &A[j+1]);
                flag = 1;
            }
        }
        if (flag == 0){
            return;
        }
    }
}
 
int main() {
 
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    int n = sizeof(A)/sizeof(A[0]);
    Print(A, n, "\t\tA");
 
    BubbleSort(A, n);
    Print(A, n, " Sorted A");
 
    return 0;
}*/

/*SHELL sort
#include <iostream>
using std::cout;
using std::endl;
using std::flush;
using std::string;
 
template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
 
// Code is similar to Insertion Sort with some modifications
void ShellSort(int A[], int n){
    for (int gap=n/2; gap>=1; gap/=2){
        for (int j=gap; j<n; j++){
            int temp = A[j];
            int i = j - gap;
            while (i >= 0 && A[i] > temp){
                A[i+gap] = A[i];
                i = i-gap;
            }
            A[i+gap] = temp;
        }
    }
}
 
int main() {
 
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    int n = sizeof(A)/sizeof(A[0]);
 
    Print(A, n, "\t\tA");
    ShellSort(A, n);
    Print(A, n, " Sorted A");
 
    return 0;
}*/