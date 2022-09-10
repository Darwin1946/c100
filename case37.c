// 题目：对10个数进行排序。
#include <stdio.h>

void bubblingSort(int arr[], int n) {
    int i, j, temp;
    // 每次将一个元素送到末尾，n个元素，执行n次
    for (i = 0; i < n; ++i) {
        // 之前的循环已经将i个元素送到末尾，不需要再次比较，故减去，因为跟后一个元素比较，为了避免溢出，故减一
        for (j = 0; j < n - i - 1; ++j) {
            // 如果当前的元素比后一个元素小，就交换
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i;
    int arr[10] = {5, 2, 3, 8, 1, 2, 6, 9, 3, 7};
    bubblingSort(arr, 10);
    for (i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}