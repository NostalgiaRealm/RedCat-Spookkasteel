/*
 * FUN_100019d0 at 100019d0
 * undefined FUN_100019d0(void)
 * Address ranges: 100019d0-100019e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100019d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

