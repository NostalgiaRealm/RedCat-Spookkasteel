/*
 * FUN_005359d8 at 005359d8
 * undefined __register FUN_005359d8(int param_1, undefined4 * param_2)
 * Address ranges: 005359d8-005359fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005359d8(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *param_2 = *(undefined4 *)(iVar1 + 0x18);
  param_2[1] = *(undefined4 *)(iVar1 + 0x1c);
  return;
}

