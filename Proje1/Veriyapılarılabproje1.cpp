
#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter the  number of elements.";
    cin >> m;
    int arr[20][20];
    cout << "Enter the elements.";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] <<"";
        }
    }

        return 0;
}



