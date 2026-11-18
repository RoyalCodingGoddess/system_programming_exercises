#include <stdio.h>
#include <pthread.h>

void* task (void*arg){

int a = 10;
int b = 11;
int c = 14;

printf("Threading is fun. A is %d\n", a);
printf("Threading us fun. B  is %d\n", b);
printf("Tired. C is %d\n", c);
return NULL;
}

int main(){
pthread_t t1;
pthread_create(&t1, NULL, &task, NULL);
pthread_join(t1, NULL);

//gcc a.c -o main -pthread

return 0;
}
