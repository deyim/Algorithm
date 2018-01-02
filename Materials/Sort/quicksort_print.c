typedef int item;
#define key(A) (A)
#define less(A,B) (key(A) < key(B))
#define exch(A, B) {item t = A; A = B; B = t;}
#define compexch(A, B) if (less(A,B)) exch(A,B) //A<B 면 둘 자리 바꿈

int partition(item a[], int l, int r){
  int i = l -1 ; j = r;
  item v = a[r];

//pivot은 맨 오른쪽 애로 정해진 듯
  for( ; ; ){
    while(less(a[++i], v)); //pivot보다 큰 애를 만날때까지 오른쪽으로 쭉쭉 이동
    while(less(v, a[--j])) if(j==l) break; //pivot보다 작은 애를 만날때까지 왼쪽으로 쭉쭉 이동
    if(i >= j) break; //i,j 위치 바뀐거면 끝내야 돼.
    exch(a[i], a[j]); //i,j 바꿔
  }
  exch(a[i], a[r]); // r을 가운데로 데꼬와.
  return i;

}

void quicksort(item a[], int l, int r){
  int i;
  if ( r <= l) return;
  i = partition(a, l, r);
  quicksort(a, l, i-1);
  quicksort(a, i+1, r);
}

///////////////////////////////////////////////////

#define push2(A, B) push(B); push(A);
void quicksort(item a[], int l, int r){
  int i;

  stackinit();
  push2(l,r);
  while(!stackempty()){
    l = pop();
    r = pop();
    if(r <= l) continue;
    i = partition(a, l, r);
    if(i - 1 > r - i){
      push2(l,i-1); push2(i+1,r);
    }
    else{
      push2(i+1, r); push2(l, i-1);
    }
  }
}

#define M 10
void quicksort(item a[], int l, int r){
  int i;
  if(r - l <= M) return;
  compexch(a[l], a[r-1]);
  compexch(a[l], a[r]);
  compexch(a[r-1], a[r]);

  i = partition(a, l+1, r-1);
  quicksort(a, l, i-1);
  quicksort(a, i+1, r);
}
void sort(item a[], int l, int r){
  quicksort(a, l, r);
  insertion(a, l, r);
}
