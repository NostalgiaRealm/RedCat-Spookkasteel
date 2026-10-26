/*
 * FUN_005b7e90 at 005b7e90
 * undefined FUN_005b7e90(void)
 * Address ranges: 005b7e90-005b7ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b7e90(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&DAT_00747b48 + DAT_00722f24 * 4);
  if (iVar1 < 0x400) {
    iVar2 = *(int *)(&DAT_00722910 + DAT_00722f24 * 4);
    *(int *)(&DAT_00747b48 + DAT_00722f24 * 4) = iVar1 + 1;
    (&DAT_00720840)[(iVar2 + iVar1) * 8] = param_1;
    *(undefined4 *)(&DAT_00720844 + (iVar2 + iVar1) * 8) = param_2;
  }
  return;
}

