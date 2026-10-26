/*
 * FUN_00441558 at 00441558
 * undefined __register FUN_00441558(int * param_1, int param_2)
 * Address ranges: 00441558-0044157b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00441558(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x17];
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
    param_1[0x17] = param_2;
    if (param_2 != 0) {
      *(int **)(param_2 + 0x60) = param_1;
    }
    FUN_004415b8(param_1);
  }
  return;
}

