#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    setenv("GREETING", "hello", 1);

    if (fork() == 0) {
        printf("Child sees: %s\n", getenv("GREETING"));   // hello
        setenv("GREETING", "changed", 1);
        printf("Child now: %s\n", getenv("GREETING"));    // changed
        return 0;
    }
    wait(NULL);
    printf("Parent still: %s\n", getenv("GREETING"));     // hello
}
