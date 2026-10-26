/*
 * FUN_005386bc at 005386bc
 * int * __register FUN_005386bc(int * param_1, char param_2, int * param_3)
 * Address ranges: 005386bc-00538755
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x537000 slot 11 for TOAGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x537000 slot 11 for
   TOAGrid2. Original bytes unchanged; names and types still inferred. */

int * FUN_005386bc(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_005283f8(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0xb4) = 7;
  *(undefined1 *)(param_1 + 0x9c) = 1;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)((int)param_1 + 0x2d1) = 0;
  piVar1 = FUN_00536804(&DAT_0053624c,CONCAT31((int3)((uint)extraout_EDX >> 8),7),extraout_ECX_00);
  param_1[0xb5] = (int)piVar1;
  FUN_00406a48(&PTR_DAT_005386b4,param_1 + 0xb7);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

