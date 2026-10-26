/*
 * FUN_00502d58 at 00502d58
 * undefined __register FUN_00502d58(int * param_1, int param_2)
 * Address ranges: 00502d58-00502dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00502d58(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[0x84] != param_2) {
    FUN_0050309c(param_1,param_1[0x84]);
    if ((-1 < param_2) && (iVar1 = (**(code **)(*(int *)param_1[0x82] + 0x14))(), param_2 < iVar1))
    {
      param_1[0x84] = param_2;
      FUN_0050309c(param_1,param_1[0x84]);
      return;
    }
    param_1[0x84] = -1;
  }
  return;
}

