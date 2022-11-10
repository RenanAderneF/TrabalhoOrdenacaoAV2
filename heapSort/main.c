//Heap Sort: Esse método utiliza um vetor que simula uma árvore binária completa,
//com excessão do último nível. Todo elemento “pai” do vetor possui dois 
//elementos gerados do mesmo. É verificado se um elemento filho é maior que seu 
//pai e, caso ele seja, realiza-se a troca de posição entre os elementos.

//- Performance:  Sua complexidade de operações é de O(n log n).

#include <stdio.h>

void form(int[]);
void set_down(int[], int);

int main()
{
    int val[100], chk, counter, end, temp_val;
    printf("Por favor entre com o total de elementos que quer organizar: \n");
    scanf("%d", &chk);
    printf("Por favor entre com elemento para organizar: \n");
    for ( counter = 1; counter <= chk; counter++)
        scanf("%d", &val[counter]);
        val[0] = chk;
        form(val);
        
        while (val[0] > 1) {
            
            end = val[0];
            temp_val = val[1];
            val[1] = val[end];
            val[end] = temp_val;
            val[0]--;
            set_down(val, 1);
        }
printf("\n Saida gerada apos o uso do heap sort \n");

for (counter = 1; counter <= chk; counter++)
    printf("%d", val[counter]);
    
}

void form(int val[]) {
    
    int counter, chk;
    chk = val[0];
    for (counter = chk /2; counter >=1; counter--)
        set_down(val, counter);
}

void set_down(int val[0], int counter) {
    int counter2, temp_val, chk, flag = 1;
    chk = val[0];
    
    while(2 * counter <= chk && flag == 1) {
        
        counter2 = 2 * counter;
        if (counter2 + 1 <= chk && val[counter2 + 1] > val[counter2])
            counter2 = counter2 + 1;
            
        if(val[counter] > val[counter2])
            flag = 0;
        
        else {
            
            temp_val = val[counter];
            val[counter] = val[counter2];
            val[counter2] = temp_val;
            counter = counter2;
        } 
    }
}
