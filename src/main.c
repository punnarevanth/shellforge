#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;

    printf("shellforge> ");

    nread = getline(&line, &len, stdin);

    if (nread != -1)
    {
        printf("You entered: %s", line);
    }

    free(line);

    return 0;
}
