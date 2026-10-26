/*
 * FUN_0044e44c at 0044e44c
 * int * __register FUN_0044e44c(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0044e44c-0044e4b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x447ba4 slot 11 for TCustomDockForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x447ba4 slot 11 for
   TCustomDockForm. Original bytes unchanged; names and types still inferred. */

int * FUN_0044e44c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    cVar1 = extraout_DL;
  }
  (**(code **)(*param_1 + 0xcc))(param_1,0);
  FUN_00449624((int)param_1,'\0');
  FUN_0044b258((int)param_1,'\x05');
  FUN_004373bc(param_1,'\x01',extraout_ECX);
  FUN_0044b558(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),3),extraout_ECX_00);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = 0;
  }
  return param_1;
}

