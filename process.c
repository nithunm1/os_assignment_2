/*create three processes using fork and in each process print process id, parent process id in the following process hierarchy.


 */

#include<stdio.h>
void main() {
    int pid1,pid2; 

    printf("Parent id is %d and root id is %d\n",getpid(),getppid()); 
    pid1=fork(); 

    if(pid1==0) {

        printf("Process 1 id is %d and its parent id is %d\n",getpid(),getppid());
        pid2=fork();

    }

    if(pid2==0) { 

        printf("Process 2 id is %d and its parent id is %d\n",getpid(),getppid());

    }

}    
