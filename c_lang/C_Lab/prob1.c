#include <stdio.h>
#include <string.h>

int longestSubstring(char s[]) {
    int visited[256] = {0};
    int start = 0, maxLen = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        while (visited[s[i]]) {
            visited[s[start]] = 0;
            start++;
        }

        visited[s[i]] = 1;

        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    return maxLen;
}

int main() {
    char str[100] = "abcabcbb";
    printf("Longest length: %d", longestSubstring(str));
}