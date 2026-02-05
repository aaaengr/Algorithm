// Example program
#include <iostream>
#include <string>
#include <vector>

void desplegarArreglo (const std::vector<int> &arr)
    {
        for (int a : arr)
            std::cout << a << " ";
    }
    
//void insertionSort (

int main()
{
    std::vector<int> numeros {5,9,7,4,1};
    
    desplegarArreglo(numeros);
    
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
        std::cout << "\n";
        desplegarArreglo(numeros);
    } 
    
    
   

}
