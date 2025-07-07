#include <iostream>
#include <string>
using namespace std;
int main()
{
    int index;
    int array[100];
    int key;

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
         << "Please Enter Key value: ";
    cin >> key;
    /*Computation Block*/
    for (int i = 0; i < index; i++)
    {
        if (array[i] == key)
        {

            cout << "\nElement Found at index: ";
            cout << i + 1;
            break;
        }
        if (i == 5)
        {
            cout << "\nElement not found !!";
        }
    }
}