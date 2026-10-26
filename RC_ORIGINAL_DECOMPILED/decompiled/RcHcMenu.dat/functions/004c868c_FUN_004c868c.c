/*
 * FUN_004c868c at 004c868c
 * undefined __register FUN_004c868c(int * param_1, undefined1 param_2, int param_3, int param_4)
 * Address ranges: 004c868c-004c8732
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c868c(int *param_1,undefined1 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 local_11;
  
  FUN_00433d10((int)param_1,param_2,param_3,param_4);
  if (*(char *)((int)param_1 + 0x132) != '\0') {
    if (*(char *)((int)param_1 + 0x131) == '\0') {
      local_11 = '\0';
    }
    else {
      local_11 = '\x03';
    }
    if (-1 < param_3) {
      iVar1 = FUN_00432178(param_1);
      if ((param_3 < iVar1) && (-1 < param_4)) {
        iVar1 = FUN_004321bc(param_1);
        if (param_4 <= iVar1) {
          if (*(char *)((int)param_1 + 0x131) == '\0') {
            local_11 = '\x02';
          }
          else {
            local_11 = '\x03';
          }
        }
      }
    }
    if (local_11 != *(char *)((int)param_1 + 0x161)) {
      *(char *)((int)param_1 + 0x161) = local_11;
      (**(code **)(*param_1 + 0x74))();
    }
  }
  return;
}

