void quicksort(element list[]. int left, int right){
  //list[left] is arbitrarily chosen as the pivot
  //it is assumed that list[left].key < list[right].key2
  int pivot, i, j;
  element temp;
  if(left<right){
    i = left; j = right+1;
    pivot = list[left].key;
    do{
      do {
        i++;
      } while(list[i].key < pivot)
      do{
        j--;
      } while(list[j].key > pivot)
      if(i < j)
        SWAP(list[i], list[j], temp);
    }while(i < j)
    SWAP(list[left], list[j], temp);
    quicksort(list, left, j-1);
    quicksort(list, j+1, right);
  }
}
