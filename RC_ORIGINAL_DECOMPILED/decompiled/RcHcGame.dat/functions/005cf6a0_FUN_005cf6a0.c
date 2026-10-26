/*
 * FUN_005cf6a0 at 005cf6a0
 * undefined FUN_005cf6a0(void)
 * Address ranges: 005cf6a0-005cf743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005cf6a0(int param_1)

{
  if ((((*(float *)(param_1 + 0x28) < 0.0001) && (-0.0001 < *(float *)(param_1 + 0x28))) &&
      (*(float *)(param_1 + 0x2c) < 0.0001)) &&
     (((-0.0001 < *(float *)(param_1 + 0x2c) && (*(float *)(param_1 + 0x30) < 0.0001)) &&
      (-0.0001 < *(float *)(param_1 + 0x30))))) {
    *(undefined4 *)(param_1 + 0x84) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}

