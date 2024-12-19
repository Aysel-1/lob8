#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Massivin uzunlugunu daxil et: ";
    cin >> n;
   

    int array[n];

    cout << "Massivin elementlerini daxil et:\n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    cout<<"-------------------------------------"<<endl;
    cout << "Cutler:\n";

    // Cutler
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                cout << array[i] << "-" << array[j] << endl;
                array[j] = 0; 
                break; 
            }
        }
    }

    return 0;
}

