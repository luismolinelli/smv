#ifndef SLICE_COLORBAR_H_DEFINED
#define SLICE_COLORBAR_H_DEFINED

#include <string.h>

/* Higher visibility and oxygen concentration are safer: blue at the top.
   Retain the existing visibility rule and the global Auto flip control. */
static inline int SliceColorbarAutoFlip(const char *longlabel){
  if(longlabel == NULL)return 0;
  return strncmp(longlabel, "SOOT VISIBILITY", 15) == 0 ||
         strcmp(longlabel, "OXYGEN VOLUME FRACTION") == 0 ||
         strcmp(longlabel, "OXYGEN MASS FRACTION") == 0;
}

#endif
