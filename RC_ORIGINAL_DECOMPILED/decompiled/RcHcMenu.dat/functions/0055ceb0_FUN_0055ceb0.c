/*
 * FUN_0055ceb0 at 0055ceb0
 * undefined __register FUN_0055ceb0(int * param_1, undefined4 param_2)
 * Address ranges: 0055ceb0-0055cf12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55c204 slot published:btnHelpClick for TfrmStartGame. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55c204 slot
   published:btnHelpClick for TfrmStartGame. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055ceb0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  FUN_00553208(param_1,param_2);
  piVar1 = (int *)FUN_0054c258();
  FUN_0054cb14(piVar1,'\0');
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    piVar1 = (int *)FUN_0054c258();
    FUN_0054cae4(piVar1,0x32,'\0');
  }
  else {
    piVar1 = (int *)FUN_0054c258();
    FUN_0054cae4(piVar1,0x28,'\0');
  }
  (**(code **)(*param_1 + 0x74))();
  return;
}

