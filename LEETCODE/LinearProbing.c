/*LInear Probing in CPP
#include <iostream>
#define SIZE 10

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
 
int Hash(int key){
    return key % SIZE;
}
 
int LinearProbe(int H[], int key){
    int idx = Hash(key);
    int i = 0;
    while (H[(idx+i) % SIZE] != 0){
        i++;
    }
    return (idx + i) % SIZE;
}
 
void Insert(int H[], int key){
    int idx = Hash(key);
 
    if (H[idx] != 0){
        idx = LinearProbe(H, key);
    }
    H[idx] = key;
}
 
int Search(int H[], int key){
    int idx = Hash(key);
    int i = 0;
    while (H[(idx+i) % SIZE] != key){
        i++;
        if (H[(idx + i) % SIZE] == 0){
            return -1;
        }
    }
    return (idx + i) % SIZE;
}
 
 
int main() {
 
    int A[] = {26, 30, 45, 23, 25, 43, 74, 19, 29};
    int n = sizeof(A)/sizeof(A[0]);
    Print(A, n, " A");
 
    // Hash Table
    int HT[10] = {0};
    for (int i=0; i<n; i++){
        Insert(HT, A[i]);
    }
    Print(HT, SIZE, "HT");
 
    int index = Search(HT, 25);
    cout << "key found at: " << index << endl;
 
    index = Search(HT, 35);
    cout << "key found at: " << index << endl;
 
    return 0;
}
*/
//Linear Probing in C
#include <stdio.h>
#define SIZE 10
int hash(int key)
{
    return key % SIZE;
}
int probe(int H[], int key)
{
    int index = hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != 0)
        i++;
    return (index + i) % SIZE;
}
void Insert(int H[], int key)
{
    int index = hash(key);

    if (H[index] != 0)
        index = probe(H, key);
    H[index] = key;
}
int Search(int H[], int key)
{
    int index = hash(key);

    int i = 0;

    while (H[(index + i) % SIZE] != key)
        i++;

    return (index + i) % SIZE;
}
int main()
{
    int HT[10] = {0};

    Insert(HT, 12);
    Insert(HT, 25);
    Insert(HT, 35);
    Insert(HT, 26);

    printf("\nKey found at %d\n", Search(HT, 35));
    return 0;
}