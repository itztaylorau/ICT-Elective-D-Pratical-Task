#include <stdio.h>
#include <stdlib.h>

int main () {

    int form, classes, student;

    for(form = 1; form < 7; form++){
        for(classes = 1; classes < 5; classes++){
                switch(classes) {
                case 1:
                    printf("%dA  ", form);
                case 2:
                    printf("%dB  ", form);
                case 3:
                    printf("%dC  ", form);
                case 4:
                    printf("%dD  ", form);
                }
            for(student = 1; student < 31; student++){
                printf("%d%d%.2d ", form, classes, student);
            }

        printf("\n");
    }

}
return 0;
}
