/*
 * FUN_10014620 at 10014620
 * undefined FUN_10014620(void)
 * Address ranges: 10014620-1001466b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10014620(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10014370(DAT_104e9920,DAT_104e9900 * 4 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_104e9920 = iVar1;
  *(undefined4 *)(iVar1 + DAT_104e9900 * 4) = param_1;
  DAT_104e9900 = DAT_104e9900 + 1;
  *param_2 = DAT_104e9900;
  return 1;
}

