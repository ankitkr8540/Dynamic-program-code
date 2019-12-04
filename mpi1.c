#include<stdio.h>
#include<mpi.h>
#include<string.h>
#define BUFFER_SIZE 32
int main( int argc, char *argv[])
{
int MyRank,Numprocs, Destination, iproc;
int tag = 0;
int Root = 0, temp = 1;
char Message[BUFFER_SIZE];
MPI_Init(&argc,&argv);
MPI_Status status;
MPI_Comm_rank(MPI_COMM _WORLD,&MyRank);
MPI_Comm_size(MPI_COMM_WORLD,&Numprocs);
if (MyRank == 0)
{
strcpy(Message, "Hello India");
for (temp=1; temp<Numprocs;temp++)
{
MPI_Send(Message, BUFFER_SIZE, MPI_CHAR, temp,tag,MPI_COMM_WORLD);
}
}
else
{
MPI_Recv(Message, BUFFER_SIZE, MPI_CHAR, Root,tag,MPI_COMM_WORLD, &status);
}
MPI_Finalize();
}
