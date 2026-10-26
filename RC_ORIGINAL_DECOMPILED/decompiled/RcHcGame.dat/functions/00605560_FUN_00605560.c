/*
 * FUN_00605560 at 00605560
 * undefined FUN_00605560(void)
 * Address ranges: 00605560-00605582
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00605560(int *param_1)

{
  short sVar1;
  
  if (*param_1 != 0) {
    sVar1 = FUN_00605583();
    if (sVar1 != -1) {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

