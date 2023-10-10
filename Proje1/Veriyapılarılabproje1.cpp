
#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter the  number of elements.";
    cin >> m;
    int arr[20];
    cout << "Enter the elements.";
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        cout << arr[i] << "";
    }

        return 0;
}



