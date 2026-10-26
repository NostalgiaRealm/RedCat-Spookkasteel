/*
 * FUN_0043cea0 at 0043cea0
 * undefined __register FUN_0043cea0(undefined4 param_1, char param_2)
 * Address ranges: 0043cea0-0043cf78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043cea0(undefined4 param_1,char param_2)

{
  int iVar1;
  
  if ((PTR_DAT_0057261c[8] != '\0') && (param_2 != '\x03')) {
    if (param_2 == '\0') {
      FUN_0043ce84();
    }
    else {
      FUN_0043ce84();
      if (DAT_0056f8b8 != 0) {
        iVar1 = (*DAT_00573794)();
        if (iVar1 != 0) {
          (*DAT_0057379c)();
          if (param_2 == '\x01') {
            (*DAT_005737a4)();
          }
          else if (param_2 == '\x02') {
            (*DAT_005737a4)();
          }
          else {
            (*DAT_005737a4)();
            (*DAT_0057379c)();
          }
          (*DAT_005737a0)();
          (*DAT_00573798)();
        }
      }
    }
  }
  return;
}

