
#include "libposix4win.h"
#include <stdio.h>
#include <stdlib.h>

void foo()
{
    const char *file = "Android.mk";
    struct stat st;
    memset(&st, 0, sizeof(st));
    if (0 > stat(file, &st)) {
        printf("stat %s failed\n", file);
    }
    printf("%s size=%d\n", file, st.st_size);

}

int main(int argc, char **argv)
{
    foo();
    return 0;
}
