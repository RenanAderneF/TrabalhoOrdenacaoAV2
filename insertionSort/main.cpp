//Insertion Sort: Esse método percorre um vetor de elementos da esquerda para a 
//direita e à medida que avança vai ordenando os elementos à esquerda, dividindo 
//os elementos em substruturas para ordenados e elementos para ainda ordenar. 

//-Performance: Seu número de movimentações é um dos menores entre os algoritmos
//de ordenação, porém ele possui  um número de comparações fixo tanto para melhor 
//quanto para pior caso, que seria C(n) = O(n²), além de não ser considerado um 
//algoritmo estável, levando em conta sua implementação.

#include <iostream>

using namespace std;
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];//pega valor
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;   //insere no local certo
   }
}
int main() {
   int n;
   cout << "Numero de elementos: ";
   cin >> n;
   int arr[n];    //cria um vetor com um certo numero de elementos
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   insertionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}