#include <string>
#include <time.h>

  clock_t start(){
    return clock();
  }
  double time_taken(clock_t t){
    return (double)(clock()-t);
  }
