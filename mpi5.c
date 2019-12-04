#include <stdio.h>
#include<string.h>
#include <mpi.h>
#define BUFFER_SIZE 32
int main (int argc, char *argv[])
{
int rank, i;
char Message[BUFFER_SIZE];
MPI_Init (&argc, &argv);
MPI_Comm_rank (MPI_COMM_WORLD, &rank);
strcpy(Message, "Hello World");
MPI_Bcast ((void *)&Message, 1, MPI_INT, 0, MPI_COMM_WORLD);
printf ("Rank :%d Message :%s\n", rank, Message);
MPI_Barrier (MPI_COMM_WORLD);
MPI_Finalize();
return 0;
}
