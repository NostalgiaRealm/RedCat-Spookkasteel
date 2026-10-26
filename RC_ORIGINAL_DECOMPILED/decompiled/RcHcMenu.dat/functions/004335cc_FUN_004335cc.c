/*
 * FUN_004335cc at 004335cc
 * undefined4 __register FUN_004335cc(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004335cc-004335fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004335cc(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
  if ((char)uVar1 != '\0') {
    FUN_0043362c(param_1,param_2,param_3);
  }
  return uVar1;
}

