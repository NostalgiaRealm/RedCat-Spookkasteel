/*
 * FUN_005afda0 at 005afda0
 * undefined FUN_005afda0(void)
 * Address ranges: 005afda0-005afdc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005afda0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_006cada4;
  do {
    if (*piVar1 == 0) {
      (&DAT_006cada4)[iVar2] = param_1;
      return 1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x6cadcc);
  return 0;
}

