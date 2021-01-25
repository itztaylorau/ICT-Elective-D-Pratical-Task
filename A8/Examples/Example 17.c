#include <stdio.h>
#include <stdlib.h>

void convert_to_upper(char in_str[]) {
    int i = 0;

    while (in_str[i] != '0') {
        in_str[i] = toupper(in_str[i]);
        ++i;
    }
}

int main() {
    char str[80];

    printf("Enter a string: ");
    gets(str);

    convert_to_upper(str);
    printf("%s\n", str);
    return 0;
}
