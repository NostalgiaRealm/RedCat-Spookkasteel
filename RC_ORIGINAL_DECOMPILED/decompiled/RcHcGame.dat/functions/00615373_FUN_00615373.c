/*
 * FUN_00615373 at 00615373
 * undefined FUN_00615373(void)
 * Address ranges: 00615373-006153d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00615373(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0061503c();
  if (iVar1 == 0) {
    iVar1 = FUN_0061503c();
    if (iVar1 == 0) {
      iVar1 = FUN_006156cf();
      *param_1 = iVar1;
      if (iVar1 == 0) {
        param_1[1] = param_1[1] & 0xfffffff3U | 3;
      }
      else {
        FUN_00615724(*param_2);
      }
    }
    else {
      FUN_006154c8(param_2);
    }
  }
  else {
    FUN_006153d7((int)(param_2[1] << 0x1c) >> 0x1c);
  }
  return param_1;
}

