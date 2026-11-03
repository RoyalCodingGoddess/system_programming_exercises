#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        while (1) {
printf("Praise the Lord! Praise the Lord!\n");
sleep (1);
}     // child loops forever
    }
    sleep(3);
    kill(pid, SIGTERM);             // parent rings the "terminate" bell
    wait(NULL);
    printf("Halleluyah!\n");
}
