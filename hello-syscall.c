#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int main() {
        printf("%ld\n", syscall(__NR_getuid));
        return 0;
}
