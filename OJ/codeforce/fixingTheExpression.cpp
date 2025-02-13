#include <stdio.h>

void fix_expression(int t, char expressions[][4]) {
    for (int i = 0; i < t; i++) {
        char a = expressions[i][0];  // First digit
        char op = expressions[i][1]; // Operator
        char b = expressions[i][2];  // Second digit

        if (op == '<') {
            if (a >= b) {
                // Change operator to '=' if digits are equal, or '>' if greater
                if (a > b) op = '>';
                else op = '=';
            }
        } else if (op == '>') {
            if (a <= b) {
                // Change operator to '=' if digits are equal, or '<' if smaller
                if (a < b) op = '<';
                else op = '=';
            }
        } else if (op == '=') {
            if (a != b) {
                // Change operator to '<' or '>' to make it valid
                op = (a < b) ? '<' : '>';
            }
        }
        expressions[i][1] = op;
        printf("%c%c%c\n", a, op, b);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    char expressions[t][4];

    for (int i = 0; i < t; i++) {
        scanf("%s", expressions[i]);
    }

    fix_expression(t, expressions);
    return 0;
}
