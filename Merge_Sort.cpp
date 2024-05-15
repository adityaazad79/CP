// Includes the entire standard library, which is generally not recommended due to increased compilation time and potential conflicts.
#include <bits/stdc++.h>
using namespace std;

// Type definitions for convenience. These allow the programmer to use these types without writing out the full type.
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

// Defines a constant character for newline, which is used to end lines in output.
#define endl '\n'

// Constants for array size and modulo operation.
const int N = 1e7 + 10;
const int M = 1e9 + 7;

// Function to print the elements of a vector.
void pArray(vector<int>A){
    int size = A.size();
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Function to merge two halves of a vector.
void merge(vector<int>& A, int left, int mid, int right){
    int n1 = mid - left + 1; // Number of elements in the first half
    int n2 = right - mid; // Number of elements in the second half
    int L[n1], R[n2]; // Temporary arrays for the two halves

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = A[mid + i + 1];

    // Merge the temp arrays back into A[left..right]
    int i = 0, j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k++] = L[i++];
        } else {
            A[k++] = R[j++];
        }
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        A[k++] = L[i++];
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        A[k++] = R[j++];
    }
}

// Recursive function to implement the Merge Sort algorithm.
void M_Sort(vector<int>& A, int begin, int end){
    if (begin >= end)
        return;
    int mid = (begin + end) / 2;
    M_Sort(A, begin, mid);
    M_Sort(A, mid + 1, end);
    merge(A, begin, mid, end);
}

// Main function to drive the program.
int main()
{
    // Improves the I/O efficiency.
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Read the number of elements and the elements themselves.
    int n;
    cin >> n;
    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        A.push_back(temp);
    }

    // Sort the array and print the sorted array.
    M_Sort(A, 0, A.size() - 1);
    pArray(A);
    return 0;
}