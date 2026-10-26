/*
 * FUN_0052827c at 0052827c
 * undefined __register FUN_0052827c(int * param_1, int param_2)
 * Address ranges: 0052827c-00528326
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525c38 slot 48 for TAppObjGridData. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525c38 slot 48 for
   TAppObjGridData. Original bytes unchanged; names and types still inferred. */

void FUN_0052827c(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  
  iVar2 = FUN_00527ddc(param_1);
  uVar3 = FUN_00529294(iVar2);
  if ((char)uVar3 != '\0') {
    iVar2 = FUN_00527ddc(param_1);
    cVar1 = (**(code **)(**(int **)(iVar2 + 0x290) + 100))();
    if (cVar1 == '\0') {
      iVar2 = FUN_00527ddc(param_1);
      iVar2 = (**(code **)(**(int **)(iVar2 + 0x290) + 4))();
      if (iVar2 != param_2) {
        iVar2 = FUN_00527ddc(param_1);
        uVar4 = (**(code **)(**(int **)(iVar2 + 0x290) + 4))();
        iVar2 = param_2 - uVar4;
        if (SBORROW4(param_2,uVar4)) {
          thunk_FUN_00402874(uVar4);
          iVar2 = extraout_EDX;
        }
        iVar5 = FUN_00527ddc(param_1);
        FUN_0054823c(*(int **)(iVar5 + 0x290),iVar2);
      }
      iVar2 = FUN_00527ddc(param_1);
      iVar2 = *(int *)(iVar2 + 0x280);
      iVar5 = FUN_00527ddc(param_1);
      FUN_0054a2f8(*(int **)(iVar5 + 0x290),iVar2);
    }
  }
  return;
}

