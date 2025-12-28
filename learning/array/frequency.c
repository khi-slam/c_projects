#include <stdio.h>
#include <stdbool.h> // Needed for true/false

int main() {
    int l[] = {1, 3, 2, 4, 5, 1, 2, 1, 5, 2, 1, 9};
    int n = sizeof(l) / sizeof(l[0]); // This calculates array length (12)
    
    // In C, arrays don't grow dynamically. 
    // We make 'checked' the same size as 'l' to be safe.
    int checked[n]; 
    int checked_count = 0; // Tracks how many items are in 'checked'

    for (int i = 0; i < n; i++) {
        
        // --- Step 1: Manual "if not in checked" ---
        bool already_checked = false;
        for (int k = 0; k < checked_count; k++) {
            if (checked[k] == l[i]) {
                already_checked = true;
                break;
            }
        }

        // --- Step 2: If not checked, count it ---
        if (!already_checked) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (l[i] == l[j]) {
                    count++;
                }
            }
            printf("the frequency of %d is %d\n", l[i], count);

            // --- Step 3: Add to checked list (Manual append) ---
            checked[checked_count] = l[i];
            checked_count++;
        }
    }

    return 0;
}