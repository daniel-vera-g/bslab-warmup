#include <iostream>
#include <cstdlib>
#include <fcntl.h>    /* For O_RDWR */
#include <unistd.h>   /* For open(), creat() */
#include <cstring>

int main(int argc, char** argv) {

  int fd; // File descriptor

  /* Open file */
  fd = open("loreipsum.txt", O_CREAT | O_RDWR);
  if(fd < 0) { // Handle errors
    perror("ERROR: File could not be opened!");
    exit(1);
  }
  std::cout<<"File for file descriptor = "<<fd<<" opened. \n";

  /* Read from file */
  int count  = lseek(fd, 0l, SEEK_END)+1; // Get size of file
  printf("Size of read file: %d\n", count);
  lseek(fd, 0, SEEK_SET); // Get back to beginning of file

  char *buf = new char[count+1]; // Buffer to save read opeartion in

  int ret = read(fd, buf, count); // Actually read file
  if(ret < 0) {
    perror("ERROR: File could not be read!");
    exit(1);
  }

  buf[ret] = 0; // Null ended terminator
  std::cout << "File read: \n" << buf << std::endl;

  /* Write file */
  const char *writeBuffer = "\nWritting this to the file!\n";
  int writeRet = write(fd, writeBuffer, strlen(writeBuffer));
  if(writeRet < 0) {
    perror("ERROR: File could not be written!");
    exit(1);
  }

  printf("File successfully written!\n");

  /* Close file */
  close(fd);

  return(EXIT_SUCCESS);
}
