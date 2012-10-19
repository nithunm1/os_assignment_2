/*create three processes using fork and in each process print process id, parent process id in the following process hierarchy.
parent,chid1,child2,child3,child4

 */

#include<stdio.h>
void main() {
    int pid1,pid2,pid3,pid4; 

    printf("Parent id is %d and root id is %d\n",getpid(),getppid()); 
    pid1=fork(); 

    if(pid1==0) {

        printf("Process 1 id is %d and its parent id is %d\n",getpid(),getppid());
    }
    else {

        pid2=fork();
        if(pid2==0) {
            printf("process 2 id is %d and its parent id is %d\n",getpid(),getppid());
        
            pid3=fork();
        }
        


        if(pid2==0 && pid3==0) { 

            printf("Process 3 id is %d and its parent id is %d\n",getpid(),getppid());
        }
        else {

            pid4=fork();
            if(pid2==0 && pid4==0) {

                printf("Process 4 id is %d and its parent id is %d\n",getpid(),getppid()); 

            }   
        } 
    }
}
