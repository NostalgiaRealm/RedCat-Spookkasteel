/*
 * FUN_00556824 at 00556824
 * int * __register FUN_00556824(int * param_1, char param_2, int * param_3)
 * Address ranges: 00556824-00556cc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00556824(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  char extraout_DL;
  char cVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00455694(param_1,'\0',param_3);
  piVar2 = FUN_004a71b8((int *)&PTR_FUN_004a6ee8,'\x01',param_3);
  param_1[0x82] = (int)piVar2;
  piVar2 = FUN_004a71b8((int *)&PTR_FUN_004a6ee8,'\x01',param_3);
  param_1[0x83] = (int)piVar2;
  piVar2 = FUN_004adbd0((int *)&PTR_FUN_004acb74,'\x01',param_3);
  param_1[0x84] = (int)piVar2;
  piVar2 = FUN_004adbd0((int *)&PTR_FUN_004acb74,'\x01',param_3);
  param_1[0x85] = (int)piVar2;
  piVar2 = FUN_00553904((int *)&PTR_FUN_00553c50,'\x01',param_3);
  param_1[0x86] = (int)piVar2;
  piVar2 = FUN_00553904((int *)&PTR_FUN_00553c50,'\x01',param_3);
  param_1[0x87] = (int)piVar2;
  piVar2 = FUN_00553904((int *)&PTR_FUN_00553c50,'\x01',param_3);
  param_1[0x88] = (int)piVar2;
  piVar2 = FUN_00428e78((int *)&PTR_FUN_0042508c,'\x01',param_3);
  param_1[0x89] = (int)piVar2;
  (**(code **)(*(int *)param_1[0x82] + 0x60))((int *)param_1[0x82],param_3);
  (**(code **)(*(int *)param_1[0x84] + 0x60))((int *)param_1[0x84],param_3);
  (**(code **)(*(int *)param_1[0x83] + 0x60))((int *)param_1[0x83],param_3);
  (**(code **)(*(int *)param_1[0x85] + 0x60))((int *)param_1[0x85],param_3);
  (**(code **)(*(int *)param_1[0x86] + 0x60))((int *)param_1[0x86],param_3);
  (**(code **)(*(int *)param_1[0x87] + 0x60))((int *)param_1[0x87],param_3);
  (**(code **)(*(int *)param_1[0x88] + 0x60))((int *)param_1[0x88],param_3);
  (**(code **)(*(int *)param_1[0x89] + 0x60))((int *)param_1[0x89],param_3);
  (**(code **)(**(int **)(param_1[0x82] + 300) + 8))
            (*(int **)(param_1[0x82] + 300),*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x138));
  (**(code **)(**(int **)(param_1[0x83] + 300) + 8))
            (*(int **)(param_1[0x83] + 300),*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x134));
  FUN_00431f78(param_1,*(undefined4 *)(param_1[0x82] + 0x38));
  FUN_00431f98(param_1,*(undefined4 *)(param_1[0x82] + 0x3c));
  FUN_00431f78(param_3,*(undefined4 *)(param_1[0x82] + 0x38));
  FUN_00431f98(param_3,*(undefined4 *)(param_1[0x82] + 0x3c));
  FUN_004aeaf0((int *)param_1[0x84],0);
  FUN_004aeaf0((int *)param_1[0x86],*(int *)(*(int *)PTR_DAT_00572108 + 0x60));
  FUN_004aeaf0((int *)param_1[0x87],*(int *)(*(int *)PTR_DAT_00572108 + 0x60));
  FUN_004aeaf0((int *)param_1[0x88],*(int *)(*(int *)PTR_DAT_00572108 + 0x60));
  FUN_004aeaf0((int *)param_1[0x85],*(int *)(*(int *)PTR_DAT_00572108 + 0x50));
  FUN_00432744(param_1[0x84],(uint *)"<No Value>");
  FUN_00432744(param_1[0x85],(uint *)"<No Value>");
  FUN_00432744(param_1[0x86],(uint *)"<No Value>");
  FUN_00432744(param_1[0x87],(uint *)"<No Value>");
  FUN_00432744(param_1[0x88],(uint *)"<No Value>");
  FUN_00432744(param_1[0x89],(uint *)"<No Value>");
  iVar1 = param_1[0x85];
  *(int **)(iVar1 + 0x10c) = param_1;
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(*param_1 + 0xbc);
  iVar1 = param_1[0x86];
  *(int **)(iVar1 + 0x10c) = param_1;
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(*param_1 + 0xc0);
  iVar1 = param_1[0x87];
  *(int **)(iVar1 + 0x10c) = param_1;
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(*param_1 + 0xc4);
  iVar1 = param_1[0x88];
  *(int **)(iVar1 + 0x10c) = param_1;
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(*param_1 + 200);
  (**(code **)(*(int *)param_1[0x86] + 0xbc))((int *)param_1[0x86],0);
  (**(code **)(*(int *)param_1[0x87] + 0xbc))((int *)param_1[0x87],0);
  (**(code **)(*(int *)param_1[0x88] + 0xbc))((int *)param_1[0x88],0);
  FUN_0043262c((int *)param_1[0x85],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_00);
  FUN_0043262c((int *)param_1[0x86],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_01);
  FUN_0043262c((int *)param_1[0x87],CONCAT31((int3)((uint)extraout_EDX_01 >> 8),1),extraout_ECX_02);
  FUN_0043262c((int *)param_1[0x88],CONCAT31((int3)((uint)extraout_EDX_02 >> 8),1),extraout_ECX_03);
  FUN_0043262c((int *)param_1[0x82],CONCAT31((int3)((uint)extraout_EDX_03 >> 8),1),extraout_ECX_04);
  FUN_0043262c((int *)param_1[0x84],CONCAT31((int3)((uint)extraout_EDX_04 >> 8),1),extraout_ECX_05);
  FUN_0043262c((int *)param_1[0x83],CONCAT31((int3)((uint)extraout_EDX_05 >> 8),1),extraout_ECX_06);
  FUN_004a914c(param_1[0x84],'\0');
  FUN_0043262c((int *)param_1[0x89],CONCAT31((int3)((uint)extraout_EDX_06 >> 8),1),extraout_ECX_07);
  FUN_004292b4((int *)param_1[0x89],'\x01');
  FUN_0041bd70(*(int **)(param_1[0x89] + 0x58),(undefined4 *)"Comic Sans MS");
  FUN_0041bde8(*(int **)(param_1[0x89] + 0x58),0xc);
  FUN_0041bb48(*(int **)(param_1[0x89] + 0x58),0xffffff,extraout_ECX_08);
  FUN_00556d2c((int)param_1,extraout_EDX_07,extraout_ECX_09);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

