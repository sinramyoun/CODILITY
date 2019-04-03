A non-empty array A consisting of N integers is given. The array contains an odd number of elements, and each element of the array can be paired with another element that has the same value, except for one element that is left unpaired.

For example, in array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the elements at indexes 0 and 2 have value 9,
the elements at indexes 1 and 3 have value 3,
the elements at indexes 4 and 6 have value 9,
the element at index 5 has value 7 and is unpaired.
Write a function:

int solution(int A[], int N);

that, given an array A consisting of N integers fulfilling the above conditions, returns the value of the unpaired element.

For example, given array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the function should return 7, as explained in the example above.

Write an efficient algorithm for the following assumptions:

N is an odd integer within the range [1..1,000,000];
each element of array A is an integer within the range [1..1,000,000,000];
all but one of the values in A occur an even number of times.

---------------------------------------------------------------------------------------------------------------------

 - 배열에 쌍이 없는 항목을 찾아서 ret 해주면 되는 문제 입니다.
 - 정렬을 통한 방법으로 해렬하려고 했으나 시간복잡도에서 탈락되어 다른 방법을 찾던 중 
   다른 분이 XOR로 해결 한것을 보고 이번 기회에 XOR에 대해 한번더 생각하게 되었던 문제였습니다.

 - 이 문제에서 XOR이 가능했던 이유는 XOR의 특성상 PAIR가 이루어지면 결국은 소거된다는 점입니다.
   (A^B)^A = B
   인것처럼 해당 배열에 모든 항목을 XOR하게 된다면 쌍으로 이루어진 항목은 모두 소거되고 하나의 항목만 남게 됩니다.

 - 이번 문제를 통해 단순히 문제를 해결하려고 코딩하는것 보단 조금더 효율적이고 나은 방법에 대한 고민을 해야 할 것같습니다.