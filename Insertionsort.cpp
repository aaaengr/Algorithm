// Example program
#include <iostream>
#include <string>
#include <vector>

void desplegarArreglo (const std::vector<int> &arr)
    {
        for (int a : arr)
            std::cout << a << " ";
    }
    
void insertionSort (std::vector<int> &numeros)
{
    for (int i = 1; i < size(numeros); i++)
    {
        int temp = numeros[i];
        int j = i - 1;
        
            while (j >= 0 && numeros[j] > temp)
            {
               numeros[j + 1] = numeros[j];
               j--;
            }
        numeros[j + 1] = temp;
    }    
}

int main()
{
    std::vector<int> numeros {5,7,2,9,0};
    std::vector<int> copia{};
    
    // Copying vector v1 into vector v2
    copy(numeros.begin(), numeros.end(), back_inserter(copia));
    
    desplegarArreglo(copia);
    insertionSort(copia);
    
    std::cout << "\nOriginal: ";
    desplegarArreglo(numeros); 
    std::cout << "\nOrdenado: ";
    desplegarArreglo(copia);  

}
