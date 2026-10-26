/*
 * FUN_0041f794 at 0041f794
 * undefined __register FUN_0041f794(int * param_1, int * param_2)
 * Address ranges: 0041f794-0041f7e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 20 for TMetafile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 20 for
   TMetafile. Original bytes unchanged; names and types still inferred. */

void FUN_0041f794(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0041fcd8(param_1,param_2);
  if ((char)uVar1 == '\0') {
    iVar3 = FUN_004147cc(param_2);
    iVar2 = FUN_004147b0(param_2);
    FUN_0041f94c((int)param_1,param_2,iVar3 - iVar2);
  }
  else {
    FUN_0041f87c((int)param_1,param_2);
  }
  iVar3 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar3 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

