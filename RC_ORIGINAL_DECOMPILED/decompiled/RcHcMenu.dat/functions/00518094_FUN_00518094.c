/*
 * FUN_00518094 at 00518094
 * int * __register FUN_00518094(int * param_1, char param_2, int * param_3)
 * Address ranges: 00518094-0051811b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5177d8 slot 11 for TDaviGlyphButton2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5177d8 slot 11 for
   TDaviGlyphButton2. Original bytes unchanged; names and types still inferred. */

int * FUN_00518094(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_005170a0(param_1,'\0',param_3);
  piVar1 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_00);
  param_1[0x84] = (int)piVar1;
  param_1[0x86] = 4;
  param_1[0x87] = 4;
  FUN_00403e04(param_1 + 0x85,(undefined4 *)"DK_CUSTOM");
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

