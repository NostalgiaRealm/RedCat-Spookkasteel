/*
 * FUN_0051d7c8 at 0051d7c8
 * int * __register FUN_0051d7c8(int * param_1, char param_2, int * param_3)
 * Address ranges: 0051d7c8-0051d889
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0051d7c8(int *param_1,char param_2,int *param_3)

{
  HRGN pHVar1;
  uint uVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  int iVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_0043a330(param_1,'\0',param_3);
  pHVar1 = CreatePolygonRgn((POINT *)&DAT_00571ee8,DAT_00571ee4,2);
  param_1[0x7e] = (int)pHVar1;
  pHVar1 = CreatePolygonRgn((POINT *)&DAT_00571f28,DAT_00571ee4,2);
  param_1[0x80] = (int)pHVar1;
  param_1[0x7f] = -1;
  uVar2 = FUN_00431f78(param_1,DAT_00571edc);
  iVar4 = (int)((longlong)DAT_00571ee0 * 2);
  if ((longlong)iVar4 != (longlong)DAT_00571ee0 * 2) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX;
  }
  FUN_00431f98(param_1,iVar4);
  FUN_00438bb4((int)param_1,'\0');
  FUN_0043262c(param_1,0,extraout_ECX_00);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

