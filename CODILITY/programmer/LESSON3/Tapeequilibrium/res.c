int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int front=0;
    int end=0;
    int gap=0;
    int camp=99999;
    
    for(int i=0; i<N; i++){
        end += A[i];
    }
    
    for(int i=0; i<N-1; i++){
        front += A[i];
        end -= A[i];
        
        gap = abs(front-end);
        
        if(gap<camp){
            camp=gap;   
        }
            
    }
    return camp;
}