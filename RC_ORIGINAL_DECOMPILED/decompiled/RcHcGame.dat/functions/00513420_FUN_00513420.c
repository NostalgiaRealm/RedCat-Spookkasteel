/*
 * FUN_00513420 at 00513420
 * undefined FUN_00513420(void)
 * Address ranges: 00513420-0051345a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00513420(int param_1)

{
  while ((*(int *)(param_1 + 0x1ac) != 0 &&
         (0 < (int)(*(int *)(param_1 + 0x1b0) - *(int *)(param_1 + 0x1ac) & 0xfffffffcU)))) {
    FUN_005145b0(0);
  }
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  return;
}

