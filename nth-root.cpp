int check(long long m, long long a , long long b){
    long long res = 1 ;
    for(long long i = 1 ; i <= b ; i++){
        res *= a ;
        if(res > m) return 1 ;
    }
    if(res < m) return -1 ;
    return 0 ;
}

int NthRoot(int n, int m) {
  // Write your code here.
  long long l = 1 , h = m ;
  while(l <= h){
      long long mid = l + (h-l)/2 ;
      long long val = check(m,mid , n) ;
      if(val == 0) return (int)mid ;
      else if(val == 1) h = mid -1 ;
      else l = mid+1 ;
  }
  return -1 ;
}
