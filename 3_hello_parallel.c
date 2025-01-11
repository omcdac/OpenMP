#include <stdio.h>
#include <omp.h>
int main(int argc, char* argv[])
{
     omp_set_num_threads(4) ;
     #pragma omp parallel
     printf("Hello Om, I am thread = %d\n", omp_get_thread_num()) ;
}

