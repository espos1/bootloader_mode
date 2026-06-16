#include <stdio.h>
#include <device/device.h>
void BootLoaderMode(void) {
  printf("\033[31mBootloader Mode (BLM)\033[0m");
  printf("DeviceName: %s", devicename);
  printf("DeviceModel: %s", devicemodel);
  printf("DeviceBuild: %d", devicebuild);
}
