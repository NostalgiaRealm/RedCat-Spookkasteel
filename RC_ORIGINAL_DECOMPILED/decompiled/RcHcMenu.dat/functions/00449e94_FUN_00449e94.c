/*
 * FUN_00449e94 at 00449e94
 * int * __register FUN_00449e94(int * param_1, char param_2, int * param_3)
 * Address ranges: 00449e94-00449feb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00449e94(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  FUN_004493c8(param_1,'\0',param_3);
  param_1[0x10] = 0xab;
  FUN_00431f34(param_1,0);
  FUN_00431f54(param_1,0);
  FUN_00431f78(param_1,0x140);
  FUN_00431f98(param_1,0xf0);
  FUN_0044aa98(param_1,0,extraout_ECX_00);
  FUN_004328c4((int)param_1,'\0');
  FUN_00432838((int)param_1,'\0');
  FUN_00438ac8((int)param_1,'\x01');
  *(undefined1 *)(param_1 + 0x84) = 7;
  *(undefined1 *)((int)param_1 + 0x211) = 2;
  *(undefined1 *)((int)param_1 + 0x213) = 0;
  *(undefined1 *)((int)param_1 + 0x219) = 3;
  piVar1 = FUN_00422844((int *)&PTR_FUN_0041ae18,'\x01',extraout_ECX_01);
  param_1[0x8a] = (int)piVar1;
  uVar5 = 0x31;
  uVar2 = (**(code **)PTR_DAT_00572210)();
  (**(code **)(*piVar1 + 0x40))(piVar1,uVar2,*piVar1,uVar5);
  uVar2 = (**(code **)PTR_DAT_00572210)();
  (**(code **)(*(int *)param_1[0x8a] + 0x34))((int *)param_1[0x8a],uVar2);
  iVar3 = param_1[0x8a];
  *(int **)(iVar3 + 0xc) = param_1;
  *(code **)(iVar3 + 8) = FUN_0044a734;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  piVar1 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',extraout_ECX_02);
  param_1[0x88] = (int)piVar1;
  FUN_004314a8(piVar1,(int)param_1);
  param_1[0x91] = *(int *)(DAT_005737d8 + 0x34);
  *(undefined1 *)((int)param_1 + 0x21d) = 1;
  iVar3 = FUN_00402fdc(param_1);
  param_1[0x29] = iVar3;
  FUN_0044f1b0(DAT_005737d8,param_1);
  if (cVar4 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = 0x32;
  }
  return param_1;
}

