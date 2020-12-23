#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int arr[] = {12, 45, 74, 32, 66, 96, 21, 32, 27};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Array is like: ";
   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << "\nMax Element is: " << *max_element(arr, arr + n);
}
