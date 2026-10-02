#ifndef SLICE_COLORBAR_H_DEFINED
#define SLICE_COLORBAR_H_DEFINED

#include <string.h>

static inline int SliceColorbarConcentrationLabel(const char *label, const char *quantity){
  size_t len = strlen(quantity);
  if(strncmp(label, quantity, len) != 0)return 0;
  /* Smokeview appends centering/terrain annotations to the long label. */
  return label[len] == '\0' || label[len] == '(' ||
         (label[len] == ' ' && label[len+1] == '(');
}

/* Higher visibility and oxygen concentration are safer: blue at the top.
   Retain the existing visibility rule and the global Auto flip control. */
static inline int SliceColorbarAutoFlip(const char *longlabel){
  if(longlabel == NULL)return 0;
  return strncmp(longlabel, "SOOT VISIBILITY", 15) == 0 ||
         SliceColorbarConcentrationLabel(longlabel, "OXYGEN VOLUME FRACTION") ||
         SliceColorbarConcentrationLabel(longlabel, "OXYGEN MASS FRACTION");
}

#endif
