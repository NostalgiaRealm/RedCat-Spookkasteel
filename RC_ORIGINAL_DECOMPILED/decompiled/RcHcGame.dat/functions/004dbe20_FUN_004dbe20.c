/*
 * FUN_004dbe20 at 004dbe20
 * undefined FUN_004dbe20(void)
 * Address ranges: 004dbe20-004dbe5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004dbe20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x198) = *param_2;
  *(undefined4 *)(param_1 + 0x19c) = param_2[1];
  *(undefined4 *)(param_1 + 0x1a0) = param_2[2];
  if (*(int *)(param_1 + 0x10c) != 0) {
    piVar1 = (int *)FUN_004ca920();
    (**(code **)(*piVar1 + 4))(param_2);
  }
  return;
}

