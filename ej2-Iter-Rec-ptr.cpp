#include <iostream>
#include <array>

using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir(int *ini, const int tam) {
    int *fin = (ini + tam - 1);
    while(ini < fin)
        intercambio(*ini++, *fin--);
}


void invertirRec(int *ini, int *fin) {
    if(ini>=fin)
        return;
    intercambio(*ini, *fin);
    invertirRec(++ini, --fin);
}

void print(const int arr[], int tam) {
    cout << "[";
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;

}


int main() {
    int arr[] = {1,4,8,2,9,7,5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    invertir(arr,7);
    print(arr,7);
    invertirRec(arr,arr+tam-1);
    print(arr,7);
    return 0;
}