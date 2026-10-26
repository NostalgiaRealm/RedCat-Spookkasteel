/*
 * FUN_0040b168 at 0040b168
 * undefined __register FUN_0040b168(undefined4 * param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 0040b168-0040b1a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040b168(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = 0x100 - *(int *)(param_4 + -0x104);
  if ((int)param_2 < (int)uVar1) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    FUN_00402944(param_1,(undefined4 *)(param_4 + -0x100 + *(int *)(param_4 + -0x104)),uVar1);
  }
  *(int *)(param_4 + -0x104) = *(int *)(param_4 + -0x104) + uVar1;
  return;
}

