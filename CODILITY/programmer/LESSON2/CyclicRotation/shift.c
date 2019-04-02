struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
   int shift=0;
   result.N = N;
    
    if (N == 0 || N == K) {
        result.A = A; 
    } else {
        K = K % N;
        shift = N - K;
        
        int *res = (int *)malloc(N * sizeof(int));
    
        for (int i = 0; i+shift < N; i++) {
            
            res[i] = A[i+shift];
        }
        for(int i=0; i < shift; i++){
            res[i+K] = A[i];
        }
        
        result.A = res;
    }

   
    return result;
}