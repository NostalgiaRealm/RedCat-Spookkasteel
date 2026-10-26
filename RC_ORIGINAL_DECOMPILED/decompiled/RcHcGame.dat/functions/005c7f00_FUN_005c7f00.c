/*
 * FUN_005c7f00 at 005c7f00
 * undefined FUN_005c7f00(void)
 * Address ranges: 005c7f00-005c7f2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005c7f00(int param_1,undefined4 param_2)

{
  int iVar1;
  uint local_4;
  
  local_4 = 0;
  iVar1 = FUN_005c84f0(*(undefined4 *)(param_1 + 4),param_2,&local_4);
  return -(uint)(iVar1 != 0) & local_4;
}

