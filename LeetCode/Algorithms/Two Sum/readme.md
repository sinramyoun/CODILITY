Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

---------------------------------------------------------------------------------------------------------------------

두개를 더한 값이 target이 나오게 만드는게 목표
첫 수가 target보다 작으면 배열안에서 다음 수를 더했을때 target과 같으면 return 하게 만드는게 목표

테스트 진행중 음수, 0 등과 같은 변수에 대응하기 위해 그냥 brute force도 추가 (그래봐야 거기서 거기였음 ㅋㅋ)