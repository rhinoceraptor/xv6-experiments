#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  char path[1024];
  if (getcwd(path, 1024) == -1) {
    printf(2, "getcwd failed");
  } else {
    printf(2, "%s\n", path);
  }
  exit();
}

