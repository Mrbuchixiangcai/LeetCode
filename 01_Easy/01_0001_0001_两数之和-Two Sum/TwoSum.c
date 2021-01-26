#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
LeetCode题目
0009题：https://leetcode-cn.com/problems/two-sum/submissions/
*/

/*
参考网址：http://www.jacobstrive.com/remove-vowels-from-a-string.html
*/

int* TwoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int i = 0;
	int j = 0;
	int* array = (int*)malloc(2 * sizeof(int));

	array[0] = -1;
	array[1] = -1;

	if (nums == NULL || returnSize == NULL) {

		return NULL;
	}

	for (i = 0; i < numsSize; i++) {

		for (j = i + 1; j < numsSize; j++) {

			if (nums[i] + nums[j] == target) {
				array[0] = i;
				array[1] = j;
				*returnSize = 2;
				return array;
			}
		}
	}

	*returnSize = 0;
	return array;
}

void main(void)
{
	int i;
	int numsStr[] = { 2,7,11,15 };
	int target = 17;
	int* targetStr = (int*)malloc(2 * sizeof(int));
	for (i = 0; i < (sizeof(numsStr) / sizeof(numsStr[0])); i++)
		printf("%d ", numsStr[i]);
	printf("\r\n");
	int* num = TwoSum(numsStr, (sizeof(numsStr) / sizeof(numsStr[0])), target, targetStr);
	printf("%d,%d", num[0], num[1]);
	printf("\r\n");
	system("pause");
}