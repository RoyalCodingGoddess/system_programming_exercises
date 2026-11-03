#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        while (1) {
printf("They see me going... they hating...\n");
sleep (1);
}     // child loops forever
    }
    sleep(2);
    kill(pid, SIGTERM);             // parent rings the "terminate" bell
    wait(NULL);
    printf("Child is gone.\n");
}
