/*
 * FUN_004a9b48 at 004a9b48
 * int * __register FUN_004a9b48(int * param_1, char param_2, int * param_3)
 * Address ranges: 004a9b48-004a9c86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004a9b48(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int *extraout_ECX;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  puVar2 = PTR_DAT_005723fc;
  FUN_00418f00(param_1,'\0',param_3);
  piVar3 = FUN_00423454((int *)&PTR_FUN_00423364,'\x01',0);
  param_1[9] = (int)piVar3;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xac) = param_1;
  *(undefined1 **)(iVar1 + 0xa8) = &LAB_004a9d8c;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xb4) = param_1;
  *(code **)(iVar1 + 0xb0) = FUN_004a9e04;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xec) = param_1;
  *(code **)(iVar1 + 0xe8) = FUN_004a9e7c;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xe4) = param_1;
  *(undefined1 **)(iVar1 + 0xe0) = &LAB_004a9ef0;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xbc) = param_1;
  *(undefined1 **)(iVar1 + 0xb8) = &LAB_004a9f64;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xcc) = param_1;
  *(code **)(iVar1 + 200) = FUN_004a9fdc;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xd4) = param_1;
  *(undefined1 **)(iVar1 + 0xd0) = &LAB_004aa078;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xdc) = param_1;
  *(undefined1 **)(iVar1 + 0xd8) = &LAB_004aa0ec;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xc4) = param_1;
  *(code **)(iVar1 + 0xc0) = FUN_004aa164;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xf4) = param_1;
  *(code **)(iVar1 + 0xf0) = FUN_004aa1dc;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xfc) = param_1;
  *(undefined1 **)(iVar1 + 0xf8) = &LAB_004aa250;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0x10c) = param_1;
  *(code **)(iVar1 + 0x108) = FUN_004aa33c;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0x104) = param_1;
  *(undefined1 **)(iVar1 + 0x100) = &LAB_004aa2c4;
  if (cVar4 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

