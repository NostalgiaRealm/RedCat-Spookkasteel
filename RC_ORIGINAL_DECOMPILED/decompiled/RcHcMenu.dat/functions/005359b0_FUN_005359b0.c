/*
 * FUN_005359b0 at 005359b0
 * undefined __register FUN_005359b0(int param_1, undefined4 * param_2)
 * Address ranges: 005359b0-005359d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005359b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *param_2 = *(undefined4 *)(iVar1 + 0x28);
  param_2[1] = *(undefined4 *)(iVar1 + 0x2c);
  return;
}

