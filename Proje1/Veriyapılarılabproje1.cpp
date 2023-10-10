
#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter the  number of elements.";
    cin >> m;
    int arr[20][20][20];
    cout << "Enter the elements.";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++){

                cin >> arr[i][j][k];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++){

                cout << arr[i][j][k] < "";
            }
        }
    }

        return 0;
}



