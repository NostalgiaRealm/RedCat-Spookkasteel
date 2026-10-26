/*
 * FUN_005cd010 at 005cd010
 * undefined FUN_005cd010(void)
 * Address ranges: 005cd010-005cd09c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005cd066) */
/* WARNING: Removing unreachable block (ram,0x005cd07c) */
/* WARNING: Removing unreachable block (ram,0x005cd07f) */
/* WARNING: Removing unreachable block (ram,0x005cd086) */
/* WARNING: Removing unreachable block (ram,0x005cd08b) */

undefined4 __fastcall FUN_005cd010(int param_1)

{
  int iVar1;
  
  if (DAT_006cc5dc == 1) {
    return 1;
  }
  FUN_005dfd90();
  iVar1 = FUN_005ccfc0();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 != 1) {
    return 0;
  }
  FUN_005df300();
  iVar1 = FUN_005ccfc0();
  if (iVar1 != 0) {
    return 0;
  }
  return 0;
}

