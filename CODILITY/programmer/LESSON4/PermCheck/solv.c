int solution(int A[], int N) {
	// write your code in C99 (gcc 6.2.0)
	int max = (long)(N)*(long)(N + 1);
	int sum = 0;

	max >>= 1;
	sum = max;

	for (int i = 0; i<N; i++){
		max^= A[i];
		sum^=i+1;
		
	}

	if (sum == max){
		return 1;
	}
	else{
		return 0;
	}
}