/*
 * FUN_00553620 at 00553620
 * undefined FUN_00553620(void)
 * Address ranges: 00553620-0055363c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00553620(int param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x30)) {
    *(float *)(param_1 + 0x30) = param_2;
    FUN_00553170();
  }
  return;
}

