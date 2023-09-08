#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* Using the write system call to print to standard error (file descriptor 2) */
    ssize_t written = write(2, message, 59);

    /* Check if write was successful */
    if (written != 59) {
        return 1;
    }

    return 0;
}

