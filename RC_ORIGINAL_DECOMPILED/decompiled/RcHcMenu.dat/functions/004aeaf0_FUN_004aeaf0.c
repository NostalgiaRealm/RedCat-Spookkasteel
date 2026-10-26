/*
 * FUN_004aeaf0 at 004aeaf0
 * undefined __register FUN_004aeaf0(int * param_1, int param_2)
 * Address ranges: 004aeaf0-004aeb4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aeaf0(int *param_1,int param_2)

{
  if (param_1[0x5d] != 0) {
    FUN_004ad918(param_1[0x5d],(int)param_1);
  }
  param_1[0x5d] = param_2;
  if (param_1[0x5d] != 0) {
    FUN_004ad8d8(param_1[0x5d],(int)param_1);
  }
  (**(code **)(*param_1 + 0x74))();
  return;
}

