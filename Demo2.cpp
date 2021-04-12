#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[] = {13,45,34,87,56,23};
    bool flag = "true";
    int num;
    cout << arr[3];
    arr[3] = 6;
    cout << endl;
    cout << arr[3];
    cout << endl;
    int size = sizeof(arr) / 4;
    cout << size << endl;

    cout << arr;
    cout << endl;

    cout << "please enter a number : ";
    cin >> num;
    for(int i =0; i<size ; i++)
    {
        if (arr[i] == num)
        {
            cout << i+1;
            cout << num << " is present in an array.";
        }
        //cout << arr[i] << " ";
    }



    return 0;
}
