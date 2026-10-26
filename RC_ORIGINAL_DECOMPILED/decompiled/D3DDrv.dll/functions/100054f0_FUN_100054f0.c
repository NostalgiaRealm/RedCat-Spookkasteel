/*
 * FUN_100054f0 at 100054f0
 * undefined __stdcall FUN_100054f0(void)
 * Address ranges: 100054f0-1000553c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100054f0(void)

{
  ushort uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  uVar1 = FUN_100054a0(0x77);
  if (CONCAT22(extraout_var,uVar1) == 0) {
    DAT_1010b170 = 1;
  }
  else {
    uVar1 = FUN_100054a0(0x11);
    if ((CONCAT22(extraout_var_00,uVar1) != 0) && (DAT_1010b170 != 0)) {
      DAT_1010b16c = (uint)(DAT_1010b16c == 0);
      DAT_1010b170 = 0;
      return;
    }
  }
  return;
}

