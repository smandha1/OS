#include<stdio.h>
#include<unistd.h>
#include<linux/unistd.h>
#include<linux/time.h>
int main(){
struct timespec time;
syscall(326, &time);
printf("Syscall return value : %ld",time.tv_nsec);

return 0;
}
