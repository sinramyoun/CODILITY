int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    long sum=0;
       
    sum = ((long)N+1) * ((long)N+2);
    sum>>= 1;
    
    
    for(int i=0; i<N; i++){
        sum = sum - A[i];
    }
    
    return sum;
}