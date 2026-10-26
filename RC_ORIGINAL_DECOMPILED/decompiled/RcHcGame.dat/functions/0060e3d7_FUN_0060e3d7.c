/*
 * FUN_0060e3d7 at 0060e3d7
 * undefined FUN_0060e3d7(void)
 * Address ranges: 0060e3d7-0060e3f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0060e3d7(undefined4 *param_1)

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
  uVar3 = FUN_0061ae60(param_1);
  return uVar3;
}

