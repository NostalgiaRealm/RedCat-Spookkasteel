/*
 * FUN_00482744 at 00482744
 * int * __register FUN_00482744(int * param_1, char param_2, int * param_3)
 * Address ranges: 00482744-004827e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00482744(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00467054(param_1,'\0',param_3);
  if (param_1[0x1e] == 0) {
    uVar1 = FUN_0040320c(param_3,(int)&PTR_FUN_0047d4c0);
    if ((char)uVar1 == '\0') {
      iVar2 = FUN_0047f0a8();
      param_1[0x1e] = iVar2;
    }
    else {
      param_1[0x1e] = (int)param_3;
    }
  }
  FUN_00483bac(param_1,*(uint **)(param_1[0x1e] + 0x48));
  FUN_00480640(param_1[0x1e],(int)param_1);
  iVar2 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_00);
  param_1[0x1f] = iVar2;
  *(int **)(iVar2 + 0x2c) = param_1;
  *(undefined1 **)(iVar2 + 0x28) = &LAB_004839a4;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined1 *)((int)param_1 + 0x61) = 1;
  param_1[0x1d] = *(int *)(param_1[0x1e] + 0x30);
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

