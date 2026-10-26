/*
 * FUN_10004073 at 10004073
 * undefined __cdecl FUN_10004073(uint * param_1)
 * Address ranges: 10004073-100040d9;100040e3-10004135;10004142-1000416e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10004073(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c1f0;
  puStack_10 = &LAB_100062e0;
  local_14 = ExceptionList;
  if (DAT_101f5ab4 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_101f5aac) {
      ExceptionList = &local_14;
      FUN_10006171(9);
      local_8 = 0;
      piVar1 = FUN_10005603(param_1);
      local_8 = 0xffffffff;
      FUN_100040da();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_101f5ab4 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10010bbc) {
        ExceptionList = &local_14;
        FUN_10006171(9);
        local_8 = 1;
        piVar1 = FUN_10005db0(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10004139();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10004152;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10004152:
  HeapAlloc(DAT_101f5ab0,0,dwBytes);
  ExceptionList = local_14;
  return;
}

