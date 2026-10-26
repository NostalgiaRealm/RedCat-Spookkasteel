/*
 * FUN_0055902c at 0055902c
 * int * __register FUN_0055902c(int * param_1, char param_2, int * param_3)
 * Address ranges: 0055902c-0055938e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0055902c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_004348a0(param_1,'\0',param_3);
  FUN_0043262c(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_00);
  piVar1 = FUN_004a71b8((int *)&PTR_FUN_004a6ee8,'\x01',param_3);
  param_1[0x7c] = (int)piVar1;
  piVar1 = FUN_004a71b8((int *)&PTR_FUN_004a6ee8,'\x01',param_3);
  param_1[0x7d] = (int)piVar1;
  piVar1 = FUN_004adbd0((int *)&PTR_FUN_004acb74,'\x01',param_3);
  param_1[0x7e] = (int)piVar1;
  piVar1 = FUN_00557d24((int *)&PTR_FUN_0055766c,'\x01',param_3);
  param_1[0x7f] = (int)piVar1;
  piVar1 = FUN_00428e78((int *)&PTR_FUN_0042508c,'\x01',param_3);
  param_1[0x80] = (int)piVar1;
  (**(code **)(*(int *)param_1[0x7c] + 0x60))((int *)param_1[0x7c],param_3);
  (**(code **)(*(int *)param_1[0x7e] + 0x60))((int *)param_1[0x7e],param_3);
  (**(code **)(*(int *)param_1[0x7d] + 0x60))((int *)param_1[0x7d],param_3);
  (**(code **)(*(int *)param_1[0x7f] + 0x60))((int *)param_1[0x7f],param_3);
  (**(code **)(*(int *)param_1[0x80] + 0x60))((int *)param_1[0x80],param_3);
  FUN_004aeaf0((int *)param_1[0x7e],0);
  (**(code **)(*(int *)param_1[0x7f] + 0xbc))
            ((int *)param_1[0x7f],*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x94));
  (**(code **)(**(int **)(param_1[0x7f] + 0x1ac) + 8))
            (*(int **)(param_1[0x7f] + 0x1ac),*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x140));
  (**(code **)(**(int **)(param_1[0x7c] + 300) + 8))
            (*(int **)(param_1[0x7c] + 300),*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x13c));
  (**(code **)(**(int **)(param_1[0x7d] + 300) + 8))
            (*(int **)(param_1[0x7d] + 300),*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x134));
  FUN_00431f78(param_1,*(undefined4 *)(param_1[0x7c] + 0x38));
  FUN_00431f98(param_1,*(undefined4 *)(param_1[0x7c] + 0x3c));
  FUN_00431f78(param_3,*(undefined4 *)(param_1[0x7c] + 0x38));
  FUN_00431f98(param_3,*(undefined4 *)(param_1[0x7c] + 0x3c));
  *(undefined4 *)(param_1[0x7f] + 0x18c) = 0;
  *(undefined4 *)(param_1[0x7f] + 400) = 0;
  (**(code **)(*(int *)param_1[0x7f] + 0xc0))((int *)param_1[0x7f],10);
  (**(code **)(*(int *)param_1[0x7f] + 0xd0))((int *)param_1[0x7f],0);
  (**(code **)(*(int *)param_1[0x7f] + 0xcc))((int *)param_1[0x7f],0);
  (**(code **)(*(int *)param_1[0x7f] + 200))((int *)param_1[0x7f],100);
  FUN_00432744(param_1[0x7e],(uint *)"<No Value>");
  FUN_00432744(param_1[0x80],(uint *)"<No Value>");
  FUN_0043262c((int *)param_1[0x7c],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_01);
  FUN_0043262c((int *)param_1[0x7e],0,extraout_ECX_02);
  FUN_0043262c((int *)param_1[0x7d],0,extraout_ECX_03);
  FUN_0043262c((int *)param_1[0x7f],CONCAT31((int3)((uint)extraout_EDX_01 >> 8),1),extraout_ECX_04);
  FUN_004a914c(param_1[0x7e],'\0');
  FUN_004a914c(param_1[0x7f],'\0');
  FUN_0043262c((int *)param_1[0x80],CONCAT31((int3)((uint)extraout_EDX_02 >> 8),1),extraout_ECX_05);
  FUN_004292b4((int *)param_1[0x80],'\x01');
  FUN_0041bd70(*(int **)(param_1[0x80] + 0x58),(undefined4 *)"Comic Sans MS");
  FUN_0041bde8(*(int **)(param_1[0x80] + 0x58),0xc);
  FUN_0041bb48(*(int **)(param_1[0x80] + 0x58),0xffffff,extraout_ECX_06);
  FUN_005593f0((int)param_1);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

