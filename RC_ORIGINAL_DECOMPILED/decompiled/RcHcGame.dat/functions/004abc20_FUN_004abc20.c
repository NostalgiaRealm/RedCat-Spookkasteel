/*
 * FUN_004abc20 at 004abc20
 * undefined FUN_004abc20(void)
 * Address ranges: 004abc20-004abc40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_004abc20(int param_1,undefined1 param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((4 < iVar1) && (iVar1 != 8)) {
    return (uint)uVar2 << 8;
  }
  *(undefined1 *)(param_1 + 0x85) = param_2;
  return CONCAT31(uVar2,1);
}

