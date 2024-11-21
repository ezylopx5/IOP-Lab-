#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int gem_elements[26] = {0};

    for (int i = 0; i < N; i++) {
        char rock[101];
        int present[26] = {0};
        scanf("%s", rock);

        for (int j = 0; rock[j] != '\0'; j++) {
            present[rock[j] - 'a'] = 1;
        }

        for (int k = 0; k < 26; k++) {
            gem_elements[k] += present[k];
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (gem_elements[i] == N) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}