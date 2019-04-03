int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    int cnt=0;
    int res=0;
    
    if(D==0 || X > Y)
        return cnt;
    
    cnt = (Y-X)/D;
    res = X + (D*cnt);
    
    if(res>=Y)
        return cnt;
    else{
        cnt = cnt +1;
        return cnt;
    }
        
}