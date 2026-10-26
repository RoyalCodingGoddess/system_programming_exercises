#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (){
int pid = fork();
if (pid == -1){
perror ("Fork error");
return -1;
}else if (pid == 0){
printf("I am the child process with PID: %d ", pid);
}else {
printf("I am the parent process with PID: %d ", pid);
}
return 0;
}
