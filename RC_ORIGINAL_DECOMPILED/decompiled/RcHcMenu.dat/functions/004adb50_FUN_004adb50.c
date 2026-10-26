/*
 * FUN_004adb50 at 004adb50
 * undefined __register FUN_004adb50(int param_1, int param_2)
 * Address ranges: 004adb50-004adb8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004adb50(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x40) != param_2) {
    *(int *)(param_1 + 0x40) = param_2;
    FUN_004ad3c4(param_1);
    FUN_004ad80c(param_1,0x5401,0,0);
  }
  return;
}

