/*
 * FUN_10005540 at 10005540
 * undefined __stdcall FUN_10005540(void)
 * Address ranges: 10005540-1000558c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10005540(void)

{
  ushort uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  uVar1 = FUN_100054a0(0x77);
  if (CONCAT22(extraout_var,uVar1) == 0) {
    DAT_1010b174 = 1;
  }
  else {
    uVar1 = FUN_100054a0(0x10);
    if ((CONCAT22(extraout_var_00,uVar1) != 0) && (DAT_1010b174 != 0)) {
      DAT_100154b0 = (uint)(DAT_100154b0 == 0);
      DAT_1010b174 = 0;
      return;
    }
  }
  return;
}

