

#include <iostream>
using namespace std;
int main()
{
    int rows, cals;
    int startValue;

    
    cout << "Enter a cout of line: ";
    cin >> rows;
    cout << "Enter a cout of cols: ";
    cin >> cals;

    
    cout << "Enter a start number : ";
    cin >> startValue;

    
    int arr[1][1];

  
    arr[0][0] = startValue;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cals; j++) {
            if (i == 0 && j == 0) {
                continue; 
            }
            if (j == 0) {
               
                arr[i][j] = arr[i - 1][cals - 1] * 2;
            }
            else {
              
                arr[i][j] = arr[i][j - 1] * 2;
            }
        }
    }

    
   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cals; j++) {
            cout << arr[i][j] <<endl;
        }
        cout << endl;
    }






}

