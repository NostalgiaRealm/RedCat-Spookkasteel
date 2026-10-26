/*
 * FUN_004cb33c at 004cb33c
 * int * __register FUN_004cb33c(int * param_1, char param_2, int * param_3)
 * Address ranges: 004cb33c-004cb3f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004cb33c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  piVar2 = FUN_004ca63c((int *)&DAT_004ca418,'\x01',param_3);
  param_1[0x4b] = (int)piVar2;
  iVar1 = param_1[0x4b];
  *(int **)(iVar1 + 0x2c) = param_1;
  *(undefined1 **)(iVar1 + 0x28) = &LAB_004cb964;
  FUN_00439a24(param_1,'\0',param_3);
  uVar4 = 0x16;
  (**(code **)(*param_1 + 0x7c))(param_1,0,0,0x16,0x17);
  param_1[0x10] = 0x82;
  FUN_00432838((int)param_1,'\x01');
  FUN_004328a0((int)param_1,-0x7ffffff1);
  param_1[0x4d] = 4;
  param_1[0x4f] = -1;
  *(undefined1 *)((int)param_1 + 0x133) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  _DAT_00571d0c = _DAT_00571d0c + 1;
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = uVar4;
  }
  return param_1;
}

