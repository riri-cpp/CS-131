int search(int array[], int size, int key){
    for (int ctr_search = 0; ctr_search < size; ctr_search ++){
        if(array[ctr_search] == key){
            return ctr_search;
        }
    }
    return -1;
}
