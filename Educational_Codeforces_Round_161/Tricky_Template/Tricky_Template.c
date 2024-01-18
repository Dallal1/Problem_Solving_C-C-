#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char a[21], b[21], c[21];
        scanf("%s %s %s", a, b, c);

        int possible = 1;

        for (int i = 0; i < n; i++) {
            char template_char = a[i];
            if (template_char == b[i]) {
                // If a and b match at this position, template should have a lowercase letter
                if (!(template_char >= 'a' && template_char <= 'z')) {
                    possible = 0;
                    break;
                }
            } else {
                // If a and b differ at this position, template should have an uppercase letter
                if (!(template_char >= 'A' && template_char <= 'Z')) {
                    possible = 0;
                    break;
                }
            }

            if (c[i] == template_char) {
                // If c matches template, it doesn't satisfy the condition
                possible = 0;
                break;
            }
        }

        printf("%s\n", possible ? "YES" : "NO");
    }

    return 0;
}
