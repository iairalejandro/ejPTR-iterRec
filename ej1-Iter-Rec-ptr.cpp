#include <iostream>

using namespace std;

bool esPalIter(int *ini, int tam) {
    int *fin = (ini + tam - 1);
    while(ini < fin) {
        if(*ini++ != *fin--)
            return false;
    }
    return true;
}

bool esPalRec(int *ini, int *fin) {
    if(ini >= fin)
        return true;
    if(*ini != *fin)
        return false;
    return esPalRec(++ini, --fin);

}

void print(int *arr, int tam) {
    cout << "[";
    for(int i = 0; i < tam; i++, arr++)
        cout << arr[i] << " ";
    cout << "]" << endl;

}

int main() {
    int arr[] = {1,3,5,9,5,3,1};
    int tam = sizeof(arr) / sizeof(arr[0]);

    cout << esPalIter(arr, tam) << endl;
    cout << esPalRec(arr, arr+tam-1) << endl;
    return 0;

}