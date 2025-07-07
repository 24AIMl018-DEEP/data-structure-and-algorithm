#include <iostream>
using namespace std;

int number_finder(int index, int *array_add, int key, int n)
{
    if (n == index)
    {
        return -1;
    }
    if (array_add[n] == key)
    {
        return 1;
    }
    else
    {
        return number_finder(index, array_add, key, n + 1);
    }
}
int main()
{
    int index;
    int array[100];
    int key;
    int n = 0;

    /*Key input block*/
    cout << "\nPlease Enter Number Of element: ";
    cin >> index;

    cout << "\nPlease Enter Array: ";
    for (int i = 0; i < index; i++)
    {
        cin >> array[i];
        cout << " ";
    }
    cout << "\n"
         << "\nPlease Enter Key value: ";
    cin >> key;

    int answer = number_finder(index, array, key, n);

    if (answer == 1)
    {
        cout << "\nItem found !!";
    }
    else
    {
        cout << "\nElement Not found !!";
    }
}