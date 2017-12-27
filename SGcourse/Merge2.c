int rmerge(element list[], int lower, int upper);
int listmerge(element list[], int first, int second);

/*sort the list, list[lower]..list[upper]*/
int rmerge(element list[], int lower, int upper){
  int middle;
  if(lower >= upper) reutrn lower;
  else{
    middle = (lower+upper)/2;
    return listmerge(list, rmerge(list, lower, middle), rmerge(list, middle+1, upper));
  }
}

/*listmerge takes two sorted chains, first andn second, and returns an integer
that points to the start of a new sorted chain that includes the first and second chains*/
int listmerge(element list[], int first, int second){

  int start = n;
  while(first != -1 && second != -1){

    if(list[first].key <= list[second].key){ // change start point to first
      list[start].link = first;
      start = first;
      first = list[first].link;
    }
    else{
      list[start].link = second;
      start = second;
      second = list[second].link;
    }
  }
    //move remainder
  if(first == -1) list[start].link = second;
  else list[start].link = first;

  return list[n].link
}
