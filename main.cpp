#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main() {
    int size1, size2, temp1,temp2;
    ifstream file("in.txt");
    ofstream file2("out.txt");
    if (!file.is_open()){
        cout << "Error!" << endl;
    }
    file >> size1;
    int *array1 = new int[size1];
    for (int i = 0; i < size1; i++){
        file >> array1[i];
    }
    temp1 = array1[0];
    for (int i = 0; i < size1-1; i++){
            array1[i] = array1[i+1]; // 1 2 3 4 5
    }
    array1[size1-1] = temp1;
    file >> size2;
    int *array2 = new int[size2];
    for (int i = 0; i < size2; i++){
        file >> array2[i];

    }
    temp2 = array2[0];
    for (int i = 0; i < size2-1; i++){
        array2[i] = array2[i+1]; // 1 2 3 4
    }
    array2[size2-1] = temp2;
    file2 << size2 << endl;
    for (int i = 0; i < size2; i++){
        file2 << array2[i] << " ";
    }
    file2 << endl;

    file2 << size1 << endl;
    for (int i = 0; i < size1; i++){
        file2 << array1[i] << " ";
    }
    file2 << endl;

    file.close();
    file.close2();
    delete[] array1;
    delete[] array2;
    return 0;
}
