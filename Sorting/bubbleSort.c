#include <stdio.h>

void bubbleSort(int dataSet[],int length){

    for(int i=0; i<length; i++){
        for(int j=0; j<length - i -1; j++){
            if(dataSet[j] > dataSet[j+1]){
                int temp = dataSet[j+1];
                dataSet[j+1] = dataSet[j];
                dataSet[j] = temp;
            }
        }
    }
}