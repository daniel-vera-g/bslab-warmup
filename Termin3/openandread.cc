#include <iostream>
#include <cstdlib>
#include <fcntl.h>    /* For O_RDWR */
#include <unistd.h>   /* For open(), creat() */

int main(int argc, char** argv) {

  int fd; // File descriptor

  /* Open file */
  fd = open("loreipsum.txt", O_RDONLY);
  if(fd < 0) { // Handle errors
    perror("ERROR: File could not be opened!");
    exit(1);
  }
  std::cout<<"File for file descriptor = "<<fd<<" opened. \n";

  /* Close file */
  close(fd);

  return(EXIT_SUCCESS);
}
