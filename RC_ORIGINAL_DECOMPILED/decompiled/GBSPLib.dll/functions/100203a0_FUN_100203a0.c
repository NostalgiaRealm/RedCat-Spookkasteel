/*
 * FUN_100203a0 at 100203a0
 * undefined FUN_100203a0(void)
 * Address ranges: 100203a0-100203c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * __fastcall FUN_100203a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10020460();
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  return PTR_DAT_1003c804 + param_1 * 0x54;
}

