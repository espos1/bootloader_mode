#include <stdio.h>

void BootLoaderMode(void) {
  printf("DeviceName: %s", devicename);
  printf("DeviceModel: %s", devicemodel);
  printf("DeviceBuild: %d", devicebuild);
}
