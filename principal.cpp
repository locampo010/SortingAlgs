
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void cambio(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Funcion que implementa BubbleSort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              cambio(&arr[j], &arr[j+1]);
}

// Funcion para imprimir un array
void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
        cout << arr[i] << endl;

}

int main()
{
  //Creacion de un arreglo de numeros aleatorios.
  int arr[10000];

  for(int i=0; i<10000; i++){
      arr[i] = (rand()%100)+1;

}
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted array: \n" << endl;
    //printArray(arr, n);

//Prueba del BubbleSort:
    clock_t start;
    double duration;
    start = clock();
    bubbleSort(arr, n);
    duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;
    cout<< "La duración del BubbleSort es: " << duration << " segundos" << endl;
    cout << "Sorted array: \n" << endl;
    //printArray(arr, n);
// Fin de la prueba del BubbleSort

    return 0;
}
