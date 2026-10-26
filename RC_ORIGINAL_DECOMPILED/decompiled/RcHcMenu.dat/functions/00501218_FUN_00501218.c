/*
 * FUN_00501218 at 00501218
 * int * __register FUN_00501218(int * param_1, char param_2, int * param_3)
 * Address ranges: 00501218-0050132c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00501218(int *param_1,char param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00500628(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] & 0xffffffdf;
  *(undefined1 *)(param_1 + 0x97) = 0;
  *(undefined1 *)(param_1 + 0x91) = 1;
  *(undefined1 *)((int)param_1 + 0x245) = 1;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  param_1[0x93] = 0xff;
  *(undefined1 *)(param_1 + 0x94) = 1;
  param_1[0x95] = 0x800000;
  param_1[0x96] = 0xfa;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x114))();
  iVar2 = (*(code *)*puVar1)(puVar1,1,param_1);
  param_1[0x8d] = iVar2;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x114))();
  iVar2 = (*(code *)*puVar1)(puVar1,1,param_1);
  param_1[0x8f] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x110))();
  iVar2 = (**(code **)(iVar2 + 0x2c))(iVar2,1,param_1);
  param_1[0x8e] = iVar2;
  (**(code **)(*param_1 + 0x100))();
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

