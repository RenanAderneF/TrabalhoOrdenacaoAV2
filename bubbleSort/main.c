//Bubble Sort: Esse método compara pares de elementos adjacentes e os troca de lugar se 
//estiverem na ordem errada. Esse processo se repete até mais nenhuma troca 
//for necessária, ou seja, se todo os elementos estiverem ordenados.

//-Performance: Considerado o algoritmo mais simples, porém mais ineficiente por
//ter que percorrer o vetor várias vezes dependendo do número de trocas 
//necessárias, o bubble sort possui número de comparações de C(n) = O(n) para 
//melhor caso e C(n) = O(n²) para pior caso. Possui um número muito grande de 
//movimentação de elementos, não sendo recomendado para grandes 
//conjuntos de dados.


void bubbleSort(int *V, int N) {
	
    int i, continua, aux, fim = N;
	
	do {
		continua = 0;

        for(i = 0; i < fim-1; i++) { //Troca dois valores consecutivos no vetor

            if(V[i] > V [i + 1]) { 

                aux = V[i]; //Guarda valor anterior em uma variável
                V[i] = V[i +1]; //Passa o valor da posição seguinte para 
                                //a anterior
                V[i + 1] = aux; //Passa o valor da posição anterior para a 
                                //seguinte
                continua = i;
            }
        }

        fim--;
    }

    while(continua !=0);

}

int main() {

    bubbleSort(5, 5);




}