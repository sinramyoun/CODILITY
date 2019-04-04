An array A consisting of N different integers is given. The array contains integers in the range [1..(N + 1)], which means that exactly one element is missing.

Your goal is to find that missing element.

Write a function:

int solution(int A[], int N);

that, given an array A, returns the value of the missing element.

For example, given array A such that:

  A[0] = 2
  A[1] = 3
  A[2] = 1
  A[3] = 5
the function should return 4, as it is the missing element.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [0..100,000];
the elements of A are all distinct;
each element of array A is an integer within the range [1..(N + 1)].
Copyright 2009–2019 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.


----------------------------------------------------------------------------------------------------

이전 문제에서 한번 시간복잡도에 당해서 단순하게 다 더한뒤에 하는 방법은 건너 뛰고 다른 방법을 생각하던중
xor/not/and 등 다양한 연산자도 시도 해 보고 하던 와중 가우스 합이 생각 나서
코드상으로 가우스 합을 구현하고 테스트를 한 결과 자꾸 80% 만 되고 2가지가 pass 되지 않아 다른 사람의 코드를 참고하여
가우스의 합과 같은 결과인 1~ n 의 합은 (n+1)+(n+2) 로 변환하여 문제를 해결하였다.

일단 해결하긴 하였지만 뭔가 C언어의 한계를 본거같았다.....
아무리 변수 크기를 늘려도 일정 부분이상 인식을 못하기 때문에 가우스 합의 방법으로는 풀수가 없어 보인다....
