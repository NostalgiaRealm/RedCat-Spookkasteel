/*
 * FUN_0053e754 at 0053e754
 * undefined __register FUN_0053e754(int param_1, int * param_2, int * param_3)
 * Address ranges: 0053e754-0053e7cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053e754(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  
  if (*(short *)(param_1 + 0x3ea) == 0) {
    FUN_00406a48((undefined4 *)&LAB_0053e220,param_3);
    cVar1 = (**(code **)(*param_2 + 0x4c))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_2 + 0x50))();
      if (cVar1 == '\0') {
        FUN_004966b4(param_2,param_3);
      }
      else {
        FUN_00406a48(&PTR_DAT_0053e218,param_3);
      }
    }
  }
  else {
    (**(code **)(param_1 + 1000))(*(undefined4 *)(param_1 + 0x3ec),param_2,param_3);
  }
  return;
}

