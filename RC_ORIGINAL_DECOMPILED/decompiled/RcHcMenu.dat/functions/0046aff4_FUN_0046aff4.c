/*
 * FUN_0046aff4 at 0046aff4
 * int * __register FUN_0046aff4(int * param_1, char param_2, int * param_3)
 * Address ranges: 0046aff4-0046b047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463810 slot 11 for TLargeintField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463810 slot 11 for
   TLargeintField. Original bytes unchanged; names and types still inferred. */

int * FUN_0046aff4(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  int iVar1;
  char extraout_DL;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  bVar5 = 0;
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0046aa04(param_1,'\0',param_3);
  FUN_00469d10((int)param_1,0x19);
  piVar3 = &DAT_0046b048;
  piVar4 = param_1 + 0x24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

