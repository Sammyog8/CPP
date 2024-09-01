#include<iostream>
using namespace std;
template <class T>
void sort(T arr[], int n)
{
    for(int i = 0; i < n-1; i++) 
        for(int j = 0; j < n-i-1; j++) 
            if(arr[j] > arr[j+1]) 
			{
			    T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}
template <class T>
void display(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int arr[10];
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    sort(arr, 10);
    cout << "Sorted array: ";
    display(arr, 10);
}
