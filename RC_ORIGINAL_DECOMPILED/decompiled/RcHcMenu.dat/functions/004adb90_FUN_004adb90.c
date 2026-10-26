/*
 * FUN_004adb90 at 004adb90
 * undefined __register FUN_004adb90(int param_1, int param_2)
 * Address ranges: 004adb90-004adbcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004adb90(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x44) != param_2) {
    *(int *)(param_1 + 0x44) = param_2;
    FUN_004ad3c4(param_1);
    FUN_004ad80c(param_1,0x5401,0,0);
  }
  return;
}

