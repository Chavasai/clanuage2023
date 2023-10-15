#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 100, 120};
    int largest = arr[0];
    int second_largest = arr[0];

    for(int i = 0; i < 10; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("The second largest number in the array is: %d", second_largest);

    return 0;
}

