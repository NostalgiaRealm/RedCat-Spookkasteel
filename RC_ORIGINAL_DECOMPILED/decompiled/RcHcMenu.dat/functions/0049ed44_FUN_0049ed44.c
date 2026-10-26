/*
 * FUN_0049ed44 at 0049ed44
 * undefined __register FUN_0049ed44(int * param_1, int * param_2)
 * Address ranges: 0049ed44-0049edb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49e8cc slot 2 for TDaviLoopProperties. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49e8cc slot 2 for
   TDaviLoopProperties. Original bytes unchanged; names and types still inferred. */

void FUN_0049ed44(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0049e8cc);
  if ((char)uVar1 == '\0') {
    FUN_00412a74(param_1,param_2);
  }
  else {
    iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_0049e8cc);
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar2 + 4);
    param_1[2] = *(int *)(iVar2 + 8);
    param_1[3] = *(int *)(iVar2 + 0xc);
    param_1[4] = *(int *)(iVar2 + 0x10);
  }
  return;
}

