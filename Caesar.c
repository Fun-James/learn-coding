#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    const int k = get_int("enter the key: ");

    string p = get_string("please enter the plaintext: ");
    int N = strlen(p);

    for (int i = 0; i < N; i++)
    {
        if (p[i] + k > 'z')
        {
            printf("%c", p[i] + k - 26);
        }
        else if (p[i] + k > 'Z' && p[i] + k < 'a')
        {
            printf("%c", p[i] + k - 26);
        }
        else if (p[i] == 32)
        {
            printf(" ");
        }
        else
        {
            printf("ciphertext: %c", p[i] + k);
        }
    }
    printf("\n");
    return 0;
}
