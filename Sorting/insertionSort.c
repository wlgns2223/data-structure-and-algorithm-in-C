void insertionSort(int dataSet[],int length){
    for(int i=1; i<length; i++){
        if(dataSet[i-1] <= dataSet[i]){
            continue;
        }

        int value = dataSet[i];
        for(int j=0; j<i; j++){
            if(dataSet[j] > value){
                memmove(&dataSet[j+1],&dataSet[j],((i-j)*sizeof(int)));
                dataSet[j] = value;
                break;
            }
        }
    }
}

// insertion sort with for loop
void insertionSortFor(int dataSet[],int length){
    for(int i=1; i<length; i++){
        int value = dataSet[i];
        int j = i;
        while(j>0 && dataSet[j-1] > value){
            dataSet[j] = dataSet[j-1];
            j--;
        }
        dataSet[j] = value;
    }
}