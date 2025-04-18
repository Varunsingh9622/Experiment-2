#include <stdio.h>

int main()
{
	int n, target, choice = -1;

	while (1) {
		printf("Choose from the following:\n\t1. Linear Search\n\t2. Binary Search\n\t0. exit\nselect: ");
		scanf("%d", &choice);
		printf("\n");
		if ((choice < 0) || (choice > 2)) {
			printf("Please select a valid option.\n");
			continue;
		} else if (choice == 0) {   
            break;
        }

		printf("Enter the size of array: ");
		scanf("%d", &n);
		printf("\n");

		int arr[n];
		if (choice == 1) {
			printf("Enter %d items for array separated by spaces: ", n);
		} else if (choice == 2) {
			printf("Enter %d items for array separated by spaces in ascending order: ", n);
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		printf("\n");

		printf("Enter the value to find:");
		scanf("%d", &target);
		printf("\n");

		switch (choice) {
		case 1:
			// linear search
			for (int j = 0; j < n; j++) {
				if (arr[j] == target) {
					printf("The value is at index %d\n", j);
					break;
				}
				else if (j == n - 1) {
					printf("The value not found in the given items array.\n");
				}
			}
			break;

		case 2:
			int left = 0, right = n - 1, mid = (left + right) / 2;

			while (left <= right) {
				if (arr[mid] == target) {
					printf("The value is at index %d\n", mid);
					break;
				}
				else if (target > arr[mid]) {
					left = mid + 1;
				}
				else if (target < arr[mid]) {
					right = mid - 1;
				}
				mid = (left + right) / 2;
			}
			if (arr[mid] == target) {
    			break;
			} else {
			    printf("Value not found in the given array.\n");
			    break;
			}
		}
	}
	return 0;
}
