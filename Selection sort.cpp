#include <iostream>

using namespace std;

void print(int arr[], int count);

int main()
{
    int arr[50], num;

    cout << "How many elements do you wish to insert : ";
    cin >> num;
    cout << "\n\n";

    //Get data from the user

    for (int x = 0; x < num; x++)
    {
        cout << "Element " << x + 1 << " = ";
        cin >> arr[x];
    }
    cout << "\n\n";

    //Selection sort +

    for (int x = 0; x < num - 1; x++)
    {
    	for (int y = x + 1; y < num; y++)
        {
            if (arr[x] > arr[y])
            {
                int temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
    }
    cout << "\n\n";

    print(arr, num);

    //Selection sort -

    for (int x = 0; x < num - 1; x++)
    {
        for (int y = x + 1; y < num; y++)
        {
            if (arr[x] < arr[y])
            {
                int temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
    }
    cout << "\n\n";

    print(arr, num);

}

void print(int arr[], int count)
{
    for (int x = 0; x < count; x ++)
    cout << x + 1 << " - " << arr[x] << endl;
}
