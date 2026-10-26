/*
 * FUN_00502cb0 at 00502cb0
 * undefined __register FUN_00502cb0(int * param_1, int param_2)
 * Address ranges: 00502cb0-00502d56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00502cb0(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[0x81] != param_2) {
    FUN_0050309c(param_1,param_1[0x81]);
    if ((param_2 < 0) || (iVar1 = (**(code **)(*(int *)param_1[0x82] + 0x14))(), iVar1 <= param_2))
    {
      param_1[0x81] = -1;
    }
    else {
      param_1[0x81] = param_2;
      FUN_0050309c(param_1,param_1[0x81]);
    }
    (**(code **)(*param_1 + 0xc0))(param_1,param_2);
    if (*(short *)((int)param_1 + 0x21a) != 0) {
      (*(code *)param_1[0x86])(param_1[0x87],param_1);
    }
    return;
  }
  return;
}

