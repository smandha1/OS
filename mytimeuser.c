#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#define N 2
#define MAX_LENGTH 1000
struct timeval gtodTimes[N];
int main()
{
int i;
char procClockTimes[N][MAX_LENGTH];
int fd = open("/dev/mytimechar",O_RDONLY);
for( i=0; i < N; i++)
{
         gettimeofday(&gtodTimes[i], 0);
        int bytes_read = read(fd, procClockTimes[i], MAX_LENGTH);
        }

close(fd);
for(i=0;i<N;i++)
{
        printf("%ld\t%ld\n%s",gtodTimes[i].tv_sec,gtodTimes[i].tv_usec,procClockTimes[i]);
        }
return 0;
}

