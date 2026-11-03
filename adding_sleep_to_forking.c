#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
        printf("Child: PID = %d, PPID = %d\n", getpid(), getppid());
    } else {
        sleep(1);   // parent waits 1 second
        printf("Parent: PID = %d, child PID = %d\n", getpid(), pid);
    }
    return 0;
}
