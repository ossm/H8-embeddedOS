#include "defines.h"
#include "serial.h"
#include "lib.h"

int main(){
  serial_init_device(SERIAL_DEFAULT_DEVICE);
  puts("Hello World\n");
  putxval(0x10, 0); puts("\n");
  putxval(0xffff, 0); puts("\n");


  while(1){
     
  }
  return 0;
}


