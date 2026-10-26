/*
 * FUN_004f5fc4 at 004f5fc4
 * undefined __register FUN_004f5fc4(int * param_1, int param_2, WPARAM param_3)
 * Address ranges: 004f5fc4-004f6018
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5fc4(int *param_1,int param_2,WPARAM param_3)

{
  int iVar1;
  
  iVar1 = param_1[0x91];
  (**(code **)(*(int *)param_1[0x84] + 0x44))((int *)param_1[0x84],param_3);
  if (param_2 == iVar1) {
    iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
    if (iVar1 <= (int)param_3) {
      iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
      param_3 = iVar1 - 1;
    }
    FUN_004f5300(param_1,param_3);
  }
  (**(code **)(*param_1 + 0xc0))();
  return;
}

