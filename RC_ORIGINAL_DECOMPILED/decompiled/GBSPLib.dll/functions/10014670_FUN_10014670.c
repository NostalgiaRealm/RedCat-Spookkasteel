/*
 * FUN_10014670 at 10014670
 * undefined FUN_10014670(void)
 * Address ranges: 10014670-100146fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x100146c6) */
/* WARNING: Removing unreachable block (ram,0x100146dc) */
/* WARNING: Removing unreachable block (ram,0x100146df) */
/* WARNING: Removing unreachable block (ram,0x100146e6) */
/* WARNING: Removing unreachable block (ram,0x100146eb) */

undefined4 __fastcall FUN_10014670(int param_1)

{
  int iVar1;
  
  if (DAT_104e9924 == 1) {
    return 1;
  }
  FUN_1001bb10();
  iVar1 = FUN_10014620();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 != 1) {
    return 0;
  }
  FUN_1001b090();
  iVar1 = FUN_10014620();
  if (iVar1 != 0) {
    return 0;
  }
  return 0;
}

