#include <string.h>
#include <sys/wait.h>
#include <stdio.h>

int main (){
int status;
pid_t pid = fork();
if (pid == 0){
printf("child pid: %d, parent pid: %d\n", getpid(), getppid());
exit(42);
}

else if (pid > 0) {
wait(&status);
printf("parent pid: %d, child pid = %d\n", getpid(), pid);
if (WIFEXITED(status)){
printf("exited well as %d\n", WEXITSTATUS(status));
}
}

else {
perror ("fork failed");
}
return 0;
}

