A small frog wants to get to the other side of the road. The frog is currently located at position X and wants to get to a position greater than or equal to Y. The small frog always jumps a fixed distance, D.

Count the minimal number of jumps that the small frog must perform to reach its target.

Write a function:

int solution(int X, int Y, int D);

that, given three integers X, Y and D, returns the minimal number of jumps from position X to a position equal to or greater than Y.

For example, given:

  X = 10
  Y = 85
  D = 30
the function should return 3, because the frog will be positioned as follows:

after the first jump, at position 10 + 30 = 40
after the second jump, at position 10 + 30 + 30 = 70
after the third jump, at position 10 + 30 + 30 + 30 = 100
Write an efficient algorithm for the following assumptions:

X, Y and D are integers within the range [1..1,000,000,000];
X ≤ Y.
Copyright 2009–2019 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.

-----------------------------------------------------------------------------------------------------------

- 처음 반복문을 사용하여 편하게 했지만 시간 복잡도에 짤 당해서 코드를 수정하다가 도저히 안된다는 결론을 내리고 다른 방법을 고려 하였습니다.
- 그러던 와중 해결했던 방법을 떠올리게 되었고 몇가지 오류를 잡은 이후 해결할 수 있었습니다.