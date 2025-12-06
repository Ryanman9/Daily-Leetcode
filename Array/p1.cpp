// This is array program covering basic operations such as traverse,search,insert,delete,update.

#include <iostream>
using namespace std;

void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

void insertAtindex(int arr[], int &n, int index, int value)
{
    for (int i = n; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    n++;
}

void deleteAtindex(int arr[], int &n, int index)
{
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}

void updatevalue(int arr[], int index, int value)
{
    arr[index] = value;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    traverse(arr, n);
    search(arr, n, 3);
    insertAtindex(arr, n, 4, 9);
    deleteAtindex(arr, n, 5);
    updatevalue(arr, 2, 7);

    traverse(arr, n);

    return 0;
}