/*
 * FUN_005ccfc0 at 005ccfc0
 * undefined FUN_005ccfc0(void)
 * Address ranges: 005ccfc0-005cd00b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005ccfc0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_005cf410(DAT_006cc5d8,DAT_006cc5b8 * 4 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_006cc5d8 = iVar1;
  *(undefined4 *)(iVar1 + DAT_006cc5b8 * 4) = param_1;
  DAT_006cc5b8 = DAT_006cc5b8 + 1;
  *param_2 = DAT_006cc5b8;
  return 1;
}

