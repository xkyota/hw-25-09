#include <stdio.h>
#include <stdlib.h>

int to_lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    return c;
}

int strcasecmp_simple(const char *a, const char *b)
{
    while (*a && *b)
    {
        if (to_lower(*a) != to_lower(*b))
            return to_lower(*a) - to_lower(*b);
        a++;
        b++;
    }
    return *a - *b;
}

int contains_word(const char *text, const char *word)
{
    int wlen = 0;
    while (word[wlen])
        wlen++;

    for (int i = 0; text[i]; i++)
    {
        int j = 0;
        while (text[i + j] && word[j] && to_lower(text[i + j]) == to_lower(word[j]))
            j++;
        if (j == wlen)
        {
            int before = (i == 0) || !((text[i - 1] >= 'a' && text[i - 1] <= 'z') || (text[i - 1] >= 'A' && text[i - 1] <= 'Z'));
            int after = !((text[i + j] >= 'a' && text[i + j] <= 'z') || (text[i + j] >= 'A' && text[i + j] <= 'Z'));
            if (before && after)
                return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage: %s <word> <text1> <text2> ...\n", argv[0]);
        return 1;
    }

    const char *word = argv[1];
    for (int i = 2; i < argc; i++)
    {
        if (contains_word(argv[i], word))
        {
            printf("Argument %d contains the word: %s\n", i - 1, argv[i]);
        }
    }
    return 0;
}

//! With Copilot assistance