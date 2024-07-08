// Ques: Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            evenSum += arr[i];
        }
        else{
            oddSum += arr[i];
        }
    }
    cout << "The difference between the sum of elements at even indices to odd indices is: " << evenSum - oddSum << endl;
    return 0;
}