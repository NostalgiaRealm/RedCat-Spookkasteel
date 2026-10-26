/*
 * FUN_004f8a20 at 004f8a20
 * undefined __register FUN_004f8a20(int * param_1, uint param_2, int param_3)
 * Address ranges: 004f8a20-004f8a80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f8a20(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_004f8334((int *)param_1[0x82],param_2,param_3);
  (**(code **)(*param_1 + 0xc0))();
  iVar1 = FUN_004f82c8(param_1[0x82],param_2);
  iVar2 = FUN_004f6c58(*(int *)(param_1[0x80] + 0x1f0),param_2);
  FUN_004f6bb0(iVar2,iVar1);
  return;
}

