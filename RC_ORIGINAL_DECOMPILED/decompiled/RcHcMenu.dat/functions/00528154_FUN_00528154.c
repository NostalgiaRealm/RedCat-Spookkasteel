/*
 * FUN_00528154 at 00528154
 * undefined __register FUN_00528154(int * param_1)
 * Address ranges: 00528154-005281b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525c38 slot 50 for TAppObjGridData. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525c38 slot 50 for
   TAppObjGridData. Original bytes unchanged; names and types still inferred. */

void FUN_00528154(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = FUN_00527ddc(param_1);
  uVar3 = FUN_00529294(iVar2);
  if ((char)uVar3 != '\0') {
    iVar2 = FUN_00527ddc(param_1);
    cVar1 = (**(code **)(**(int **)(iVar2 + 0x290) + 100))();
    if (cVar1 == '\0') {
      iVar2 = FUN_00527ddc(param_1);
      uVar4 = (**(code **)(**(int **)(iVar2 + 0x290) + 4))();
      FUN_00523d00(param_1,uVar4);
      return;
    }
  }
  FUN_00523d00(param_1,0xffffffff);
  return;
}

