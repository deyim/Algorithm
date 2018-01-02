#include <stdlib.h>
#include <string.h>

int issort(void *data, int size, int esize, int (*compare)(const void *kkey1, const void *key2));
int qksort(void *data, int size, int esize, int i, int k, int (*compare)(const void *kkey1, const void *key2))
int mgsort(void *data, int size, int esize, int i, int k, int (*compare)(const void *kkey1, const void *key2))
int ctsort(int *data, int size, int k);
int rxsort(int *data, int size, int p, int k);

static int merge(void *data, int esize, int i, int j, int k, int (*compare)(const void *kkey1, const void *key2))
{
  char *a = data, *m;
  int ipos, jpos, mposl;

  //initialize the counters used in merging.
  ipos = i ; jpos = j; mpos = 0;

  //Allocate storage for the merged elements
  if((m = (char*)malloc(esize*(k-i+1)))== NULL) return -1;

  //Continue while either division has elments to merge

  while(ipos <= j || jpos <= k){
    if(ipos > j){ // left division no more elements to merge
      while(jpos <= k) {
        memcpy(&m[mpos*esize], &a[jpos*esize], esize);
        jpos++; mpos++;
      }
      continue;
    }
    else if(jpos > k){ // right division no more elements to merge
      while(ipos <= j) {
        memcpy(&m[mpos*esize], &a[ipos*esize], esize);
        ipos++; mpos++;
      }
      continue;
    }

    //append the next ordered element to the merged elements
    if(compare(&a[ipos*esize], &a[jpos*esize], esize) < 0)
  }


}
