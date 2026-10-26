/*
 * FUN_0043ba90 at 0043ba90
 * undefined __register FUN_0043ba90(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 0043ba90-0043bac1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043ba90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((int *)param_1[3] != (int *)0x0) {
    uVar1 = param_4;
    FUN_0043ba90((int *)param_1[3],param_4,param_3,param_4);
    param_3 = uVar1;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_0043ba90((int *)param_1[2],param_4,param_3,param_4);
  }
  FUN_00403094(param_1);
  return;
}

