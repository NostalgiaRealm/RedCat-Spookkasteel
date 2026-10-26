/*
 * FUN_005afdd0 at 005afdd0
 * undefined FUN_005afdd0(void)
 * Address ranges: 005afdd0-005afdfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005afdd0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_006cada4;
  do {
    if (*piVar1 == param_1) {
      (&DAT_006cada4)[iVar2] = 0;
      return CONCAT31((int3)((uint)piVar1 >> 8),1);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x6cadcc);
  return (uint)piVar1 & 0xffffff00;
}

