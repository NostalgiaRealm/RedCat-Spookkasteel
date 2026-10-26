/*
 * FUN_00500628 at 00500628
 * int * __register FUN_00500628(int * param_1, char param_2, int * param_3)
 * Address ranges: 00500628-00500717
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00500628(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar5;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar5 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar5 = extraout_DL;
  }
  FUN_004fe36c(param_1,'\0',param_3);
  FUN_00431f98(param_1,0x15);
  FUN_00431f78(param_1,0x91);
  piVar1 = FUN_004c7e64((int *)&PTR_FUN_00500284,'\x01',param_1);
  param_1[0x88] = (int)piVar1;
  piVar1 = (int *)param_1[0x88];
  FUN_00431d2c(piVar1,CONCAT31((int3)((uint)param_1 >> 8),4),extraout_ECX_00);
  iVar2 = GetSystemMetrics(0x15);
  FUN_00431f78(piVar1,iVar2);
  uVar3 = FUN_00432904((int)piVar1,-2);
  piVar4 = FUN_00500514(uVar3,extraout_EDX,extraout_ECX_01);
  FUN_004c88a8(piVar1,piVar4);
  FUN_004c88fc(piVar1,2);
  piVar1[0x43] = (int)param_1;
  piVar1[0x42] = (int)&LAB_00500788;
  (**(code **)(*piVar1 + 0x60))(piVar1,param_1);
  *(undefined1 *)(param_1 + 0x89) = 0;
  if (cVar5 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}

