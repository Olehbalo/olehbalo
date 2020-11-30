#include <stdio.h>
#include <stdbool.h>


char String[] = { 0 };
bool test(char* String)
{
    int x = 0, o = 0, i = 0;
    while (String[i] != '\0')
    {
        if (String[i] == 'o') {
            o = o + 1;
        }
        if (String[i] == 'x') {
            x = x + 1;
        }
        i++;
    }
    if (o == x) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    printf ("hi this is a new text");
    printf("String: ");
    scanf("%s", String);
    printf("%d\n", test(String));

    return 0;

}
