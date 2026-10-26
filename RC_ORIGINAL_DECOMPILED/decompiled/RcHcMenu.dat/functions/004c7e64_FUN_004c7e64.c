/*
 * FUN_004c7e64 at 004c7e64
 * int * __register FUN_004c7e64(int * param_1, char param_2, int * param_3)
 * Address ranges: 004c7e64-004c7f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004c7e64(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uVar5;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00439a24(param_1,'\0',param_3);
  uVar5 = 0x19;
  (**(code **)(*param_1 + 0x7c))(param_1,0,0,0x19,0x19);
  param_1[0x10] = 0xc2;
  piVar1 = FUN_004c6ee4((int *)&DAT_004c6be0,'\x01',extraout_ECX_00);
  param_1[0x4d] = (int)piVar1;
  iVar2 = FUN_004c5364((int *)&PTR_FUN_004c520c,'\x01',(int)param_1);
  param_1[0x4b] = iVar2;
  iVar2 = param_1[0x4d];
  *(int **)(iVar2 + 0x2c) = param_1;
  *(code **)(iVar2 + 0x28) = FUN_004c894c;
  FUN_00432838((int)param_1,'\x01');
  param_1[0x52] = 4;
  param_1[0x50] = -1;
  *(undefined1 *)((int)param_1 + 0x13d) = 0;
  *(undefined1 *)(param_1 + 0x53) = 1;
  bVar4 = SCARRY4(DAT_00571cd4,1);
  DAT_00571cd4 = DAT_00571cd4 + 1;
  if (bVar4) {
    thunk_FUN_00402874((uint)param_1);
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = uVar5;
  }
  return param_1;
}

