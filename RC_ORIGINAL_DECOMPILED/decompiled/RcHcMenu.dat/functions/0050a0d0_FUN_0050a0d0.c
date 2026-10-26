/*
 * FUN_0050a0d0 at 0050a0d0
 * undefined __register FUN_0050a0d0(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0050a0d0-0050a118
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050a0d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  
  FUN_00433d7c((int)param_1,param_2,param_3,param_4,param_5);
  if ((char)param_1[0x228] == '\x01') {
    piVar1 = (int *)FUN_0050a11c(param_1);
    (**(code **)(*piVar1 + 0x130))(piVar1,1);
  }
  return;
}

