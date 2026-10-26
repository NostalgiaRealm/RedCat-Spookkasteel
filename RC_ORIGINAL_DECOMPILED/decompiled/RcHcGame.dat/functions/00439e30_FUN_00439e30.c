/*
 * FUN_00439e30 at 00439e30
 * undefined FUN_00439e30(void)
 * Address ranges: 00439e30-00439e53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00439e30(int param_1,int param_2)

{
  *(int *)(param_1 + 0x5c) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (DAT_006b5890 < *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x5c) = DAT_006b5890;
  }
  return;
}

