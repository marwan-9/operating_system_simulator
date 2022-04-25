#include "headers.h"

int main(int argc, char *argv[])
{
    // establishing communication with the clock module
    initClk();

    printf("Sheduler started\n");
    // creating the message queue
    int keyid = ftok(".", 65);
    int msqid = msgget(keyid, 0666 | IPC_CREAT);
    

    // run the chosen algorithm
    if ( atoi( argv[1] ) == 1 ) // SJF
    {
    }
    else if ( atoi( argv[1] ) == 2 ) // HPF
    {
        //loop and receive new processes
        //receive, fork a process and enqueue

        // struct msgbuff message;
        // int rec_value = msgrcv(msqid, &message, sizeof(message.process), 0, !IPC_NOWAIT);

        
        // if (rec_value == -1){
        //     perror("Error in receive\n");
        // }

        //peek and dequeue if time or if priority > priority running
        //in which case enqueue the running
        //if a process is done remove the node but dont delete the process


    }
    else if ( atoi( argv[1] ) == 3 ) // RR
    {
    }
    else // MLFQ
    {
    }
    

    printf("exiting scheduler\n");
    // releasing communication with the clock module
    destroyClk(1);

    return 0;
}