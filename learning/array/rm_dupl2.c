#include <stdio.h>

// 1. Helper function to swap
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int l[] = {1, 3, 2, 4, 5, 1, 2, 1, 5, 2, 1, 9};
    int n = sizeof(l) / sizeof(l[0]);

    // --- STEP 1: SORT THE ARRAY (Bubble Sort) ---
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){  
            if(l[j] > l[j+1]) {
                swap(&l[j], &l[j+1]);
            }
        }
    }
    // Now the array is: {1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 5, 9}

    // --- STEP 2: REMOVE DUPLICATES (In-Place) ---
    // We will overwrite the front of the array with unique numbers
    int unique_count = 0;
    
    for (int i = 0; i < n - 1; i++) {
        // If the current number is DIFFERENT from the next one, keep it
        if (l[i] != l[i+1]) {
            l[unique_count] = l[i];
            unique_count++;
        }
    }
    // Don't forget the very last number (it's always unique relative to the end!)
    l[unique_count] = l[n - 1];
    unique_count++;

    // --- STEP 3: PRINT ---
    // We only print up to 'unique_count'
    for(int i = 0; i < unique_count; i++) {
        printf("%d ", l[i]);
    }
    printf("\n");

    return 0;
}