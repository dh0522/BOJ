#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int alpha[26];
    scanf("%s", s);

    int i, idx;
    for (i = 0; i < 26; i++) {
        alpha[i] = 100;
    }


    for (i = 0; i < strlen(s); i++) {
        idx = s[i] - 'a';
        if (alpha[idx] > i)
            alpha[idx] = i;
    }


    for (i = 0; i < 26; i++) {
        if (alpha[i] == 100) printf("-1 ");
        else printf("%d ", alpha[i]);
    }


    return 0;
}