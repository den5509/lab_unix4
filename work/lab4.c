#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

#include "lab4.h"

int main()
{
    pid_t pid, ppid;
    int a =  0; 
    int b =  100;
    (void)fork(); 
    pid = getpid();
    ppid = getppid();

    if(fork() == -1){
    	printf("error");
    } else if (fork() == 0){
        a = DO_A(a);
      printf("Children My pid = %d, my ppid = %d,result a = %d,result b = %d\n",(int)pid,(int)ppid,a,b);
    } else {
      b = DO_B(b);
      printf("Parent My pid = %d, my ppid = %d,result a = %d,result b = %d\n",(int)pid,(int)ppid,a,b);
    }
    return 0;
}
