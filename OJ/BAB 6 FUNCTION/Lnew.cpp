#include <stdio.h>

int jojonanci(int X, int Y, int N) {
    // Base cases for N = 0 and N = 1
    if (N == 0) return X; // A_0
    if (N == 1) return Y; // A_1
    
    int previous = X; // A_0
    int current = Y;  // A_1
    int nextTerm;     // For A_n

    // Calculate A_n iteratively
    for (int i = 2; i <= N; i++) {
        nextTerm = current - previous; // A_n = A_(n-1) - A_(n-2)
        previous = current;             // Update A_(n-2) to A_(n-1)
        current = nextTerm;            // Update A_(n-1) to A_n
    }
    
    return nextTerm; // Return the N-th term
}

int main() {
    int tc; // Number of test cases
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++) {
        int X, Y, N;
        scanf("%d %d %d", &N, &X, &Y); // Read X, Y, N
        int result = jojonanci(X, Y, N); // Calculate the N-th term
        printf("Case #%d: %d\n", i + 1, result); // Print the result
    }
    
    return 0;
}
