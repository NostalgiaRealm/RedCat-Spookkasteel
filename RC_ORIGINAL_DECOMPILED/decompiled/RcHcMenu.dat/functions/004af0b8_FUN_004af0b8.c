/*
 * FUN_004af0b8 at 004af0b8
 * int * __register FUN_004af0b8(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004af0b8-004af14f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004af0b8(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  HRGN hRgn;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  piVar1 = FUN_004a0e64((int *)&PTR_FUN_004a0d80,'\x01',param_1);
  param_1[0xb4] = (int)piVar1;
  FUN_004a18e0(param_1[0xb4],param_1,extraout_ECX_00,&LAB_004af480,param_1);
  FUN_00449cd0(param_1,'\0',param_3);
  hRgn = (HRGN)param_1[0xb6];
  hWnd = (HWND)FUN_00438988(param_1);
  GetWindowRgn(hWnd,hRgn);
  *(undefined1 *)(param_1 + 0x7a) = 1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

