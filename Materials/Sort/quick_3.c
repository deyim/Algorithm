#include <stdlib.h>
#include <string.h>

static int compare_int(const void *int1, const void *int2){
  if(*(const int *)int1 > *(const int *)int2 ) return 1;
  else if(*(const int *)int1 < *(const int *)int2 ) return -1;
  else return 0;
}

static int partition(void *data, int esize, int i, int k, int (*compare)(const void *kkey1, const void *key2))
{
  char *a = data;
  void *pval, *temp;
  int r[3];

  if((pval = malloc(esize) == NULL )) return -1;
  if((temp = malloc(esize) == NULL )){
    free(pval); return -1;
  }

  //use the median-of-three method to find the partition value
  r[0] = (rand() % (k-i+1)) + i;
  r[1] = (rand() % (k-i+1)) + i;
  r[2] = (rand() % (k-i+1)) + i;
  issort(r, 3, sizeof(int), compare_int);
  memcpy(pval, &a[r[1]*esize], esize);

  i--; k++;

  while(1){
    do
      k--;
    while(compare(&a[k*esize], pval) > 0);
    do {
      i++;
    } while(compare(&a[k*esize], pval) < 0);
  }


}
