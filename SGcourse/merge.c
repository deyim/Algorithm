item_type *buffer;

void merge(item_type *array, int left, int right, int middle){
  int i, i_left, i_right;

  memcpy(buffer+left, array+left, sizeof(item_type)*(right-left+1));

  //each goes to left and right subarray index
  i_left = left;
  i_right = middle+1;
  i = left;

  while((i_left <= middle) && (i_right <= right)){
    if(array[i_left] >= array[i_right])
      array[i++] = buffer[i_right++];
    else
      array[i++] = buffer[i_left++];
  }

  while((i_left <= middle)) array[i++] = buffer[i_left++];
  while((i_right <= right)) array[i++] = buffer[i_right++];
}
