#include <stdio.h>

#define MAX_ARRAY_SIZE 10000

void twoSum(int nums[], int nums_size, int target);

int main() {
	int target;
	int nums[MAX_ARRAY_SIZE] = {0};
	int array_size = 0;

	scanf("%d", &target);

	while (scanf("%d", &nums[array_size++]) == 1);
	array_size--;

	twoSum(nums, array_size, target);

	return (0);
}

void twoSum(int nums[], int nums_size, int target) {
	int numscopy[MAX_ARRAY_SIZE] = {0};

       int i =0;

		while (i<nums_size){
			numscopy[i] = nums[i];
			i++;
		}
		qsort(numscopy, nums_size, sizeof(int), cmp);
		int j = 0;
		int k = nums_size-1;
		while (j < k) {
			if(numscopy[j]+numscopy[k] == target){
				break;
			}else if (numscopy[j]+numscopy[k] < target){
				j++;
			}else if (numscopy[j]+numscopy[k] > target){
				k--;
			}
		}
		int t=0;
		while(nums[t]!= numscopy[j]){
			t++;
		}
		int s=0;
				while(nums[s]!= numscopy[k] ||  s == t ){

					s++;
				}
				printf("(%d, %d)\n", t, s);
}

int cmp(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;

    return x - y;
}
