#include <stdio.h>
#include "../Source/shared/slice_colorbar.h"

int main(void){
  const char *labels[] = {"SOOT VISIBILITY", "SOOT VISIBILITY (cell centered)",
                         "OXYGEN VOLUME FRACTION", "OXYGEN MASS FRACTION",
                         "TEMPERATURE", "CARBON MONOXIDE VOLUME FRACTION",
                         "CARBON DIOXIDE VOLUME FRACTION", "OXYGEN CONSUMPTION", NULL};
  unsigned int i;
  for(i = 0; i < sizeof(labels)/sizeof(labels[0]); i++){
    if(SliceColorbarAutoFlip(labels[i]) != (i < 4)){
      fprintf(stderr, "Unexpected autoflip for label %u\n", i);
      return 1;
    }
  }
  return 0;
}
