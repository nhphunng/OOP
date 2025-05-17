#include "class.h"

int main()
{
    SoNguyen a; 
    SoNguyen b(6); 
    int *array = new int [5];
    for(int i = 0; i < 5; i++)
        array[i] = i + 1; 
    SoNguyen c(array, 5);
    // operator = 
    b = c; 
    cout << b; 
    // oprator +
    SoNguyen d = b + c; 
    cout << d; 
    // operator ++ tien to
    ++d; 
    cout << d; 
    // operator ++ hau to
    SoNguyen e; 
    cin >> e; 
    e++; 
    cout << e; 
    return 0; 
}