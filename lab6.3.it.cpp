#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


template <typename T>
void generateArrayTemplate(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % 15;
    }
}

template <typename T>
int countElementsTemplate(T arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { 
            count++; 
        }
    }
    return count; 
}

template <typename T>
void PrintTemplate(T* a, const int size) {
    for (int i = 0; i < size; i++) { 
        cout << a[i] << setw(4);
    }
    cout << endl;
}



void generateArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % 15;
    }
}

int countElements(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

void Print(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << setw(4);
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));

    int a[5];
    generateArray(a, 5); 
    Print(a, 5);
    cout << "Count (it): " << countElements(a, 5) << endl << endl; 

    
    int b[5];
    generateArrayTemplate(b, 5);
    PrintTemplate(b, 5);
    cout << "Count (template): " << countElementsTemplate(b, 5) << endl;

    return 0;
}
