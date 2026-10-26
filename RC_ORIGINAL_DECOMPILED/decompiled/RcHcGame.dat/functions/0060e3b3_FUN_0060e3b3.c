/*
 * FUN_0060e3b3 at 0060e3b3
 * undefined FUN_0060e3b3(void)
 * Address ranges: 0060e3b3-0060e3d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0060e3b3(uint param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    return param_1 & 0xff;
  }
  uVar2 = FUN_006107e4(param_1,param_2);
  return uVar2;
}

