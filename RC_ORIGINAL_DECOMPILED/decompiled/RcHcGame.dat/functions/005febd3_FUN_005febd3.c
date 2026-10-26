/*
 * FUN_005febd3 at 005febd3
 * undefined FUN_005febd3(void)
 * Address ranges: 005febd3-005febf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005febd3(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *param_1;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != DAT_0070fbfc) &&
     ((*(char *)(iVar1 + 0x14) == '\0' || (DAT_0070fc00 != DAT_0070fbfc)))) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

