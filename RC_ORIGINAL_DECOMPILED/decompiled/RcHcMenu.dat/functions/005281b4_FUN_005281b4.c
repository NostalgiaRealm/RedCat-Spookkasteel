/*
 * FUN_005281b4 at 005281b4
 * undefined __register FUN_005281b4(int * param_1)
 * Address ranges: 005281b4-00528279
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525c38 slot 51 for TAppObjGridData. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525c38 slot 51 for
   TAppObjGridData. Original bytes unchanged; names and types still inferred. */

void FUN_005281b4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_00527ddc(param_1);
  uVar2 = FUN_00529294(iVar1);
  if ((char)uVar2 == '\0') {
    param_1[0x81] = 0;
    FUN_00523d00(param_1,0xffffffff);
  }
  else {
    iVar1 = FUN_00527ddc(param_1);
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x290) + 8))();
    param_1[0x81] = iVar1;
    iVar1 = FUN_00527ddc(param_1);
    uVar4 = (**(code **)(**(int **)(iVar1 + 0x290) + 4))();
    FUN_00523d00(param_1,uVar4);
  }
  iVar1 = FUN_00527ddc(param_1);
  iVar1 = FUN_00520bf8(iVar1);
  if (iVar1 == 0) {
    piVar3 = (int *)FUN_00527ddc(param_1);
    iVar1 = FUN_005286e0(piVar3);
    uVar4 = FUN_0051e5f0(iVar1);
    if (0 < (int)uVar4) {
      piVar3 = (int *)FUN_00527ddc(param_1);
      piVar3 = (int *)FUN_005286e0(piVar3);
      iVar1 = FUN_0051e404(piVar3,0);
      iVar5 = FUN_00527ddc(param_1);
      FUN_0052154c(iVar5,iVar1);
    }
  }
  FUN_005249c4(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}

