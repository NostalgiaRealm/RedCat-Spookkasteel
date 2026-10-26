/*
 * FUN_1002cf87 at 1002cf87
 * undefined FUN_1002cf87(void)
 * Address ranges: 1002cf87-1002cfa0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002cf87(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_1002cfdc(param_1);
  return uVar3;
}

