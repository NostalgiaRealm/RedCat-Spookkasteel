/*
 * FUN_0056c980 at 0056c980
 * undefined __register FUN_0056c980(int * param_1)
 * Address ranges: 0056c980-0056c9ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56c01c slot published:FormShow for TfrmException2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56c01c slot
   published:FormShow for TfrmException2. Original bytes unchanged; names and types still inferred.
    */

void FUN_0056c980(int *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  
  uVar1 = param_1[0xb9];
  iVar2 = param_1[0xf] - *(int *)(uVar1 + 0x3c);
  if (SBORROW4(param_1[0xf],*(int *)(uVar1 + 0x3c))) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar2 = extraout_EDX;
  }
  iVar3 = iVar2 + -8;
  if (SBORROW4(iVar2,8)) {
    thunk_FUN_00402874(uVar1);
    iVar3 = extraout_EDX_00;
  }
  FUN_00431f98(param_1,iVar3);
  return;
}

