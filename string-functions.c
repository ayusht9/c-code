#include <stdio.h>

int length(char str[]) {
    int n = 0;
    while (str[n] != '\0')
        n++;
    return n;
}
int compare(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0') {
            return 0;
        }
        i++;
    }
    return 1; 
}

void concat(char s1[], char s2[]) {
    int n = length(s1);
    int i = 0;
    while (s2[i] != '\0') {
        s1[n + i] = s2[i];
        i++;
    }
    s1[n + i] = '\0';
}

int main() {
    char s1[100], s2[100];
    int ch;

    printf("s1:");
    scanf("%s",&s1);

    printf("1. length\n");
    printf("2. compare\n");
    printf("3. concat\n");
    printf("choice:");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("length %d", length(s1));
            break;
        case 2:
            printf("s2:");
            scanf("%s",&s2);
            if (compare(s1, s2) == 0)
                printf("equal");
            else
                printf("not equal");
            break; 
        case 3:
            printf("s2:");
            scanf("%s",&s2);
            concat(s1,s2);
            printf("%s",s1);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    return 0;
}
