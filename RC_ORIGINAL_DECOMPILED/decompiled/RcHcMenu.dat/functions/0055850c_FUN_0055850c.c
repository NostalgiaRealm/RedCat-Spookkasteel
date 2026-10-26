/*
 * FUN_0055850c at 0055850c
 * undefined __register FUN_0055850c(int param_1)
 * Address ranges: 0055850c-005585d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 64 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 64 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_0055850c(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int extraout_ECX;
  int iVar4;
  int extraout_EDX;
  
  if (*(int *)(param_1 + 0x188) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x188) + 0x38) == *(int *)(param_1 + 0x38)) {
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x178);
      FUN_00431f34(*(int **)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x30));
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x188) + 0x30);
      uVar2 = iVar4 - *(int *)(param_1 + 0x30);
      if (SBORROW4(iVar4,*(int *)(param_1 + 0x30))) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      iVar4 = *(int *)(param_1 + 0x17c) - *(int *)(param_1 + 0x178);
      if (SBORROW4(*(int *)(param_1 + 0x17c),*(int *)(param_1 + 0x178))) {
        uVar2 = thunk_FUN_00402874(uVar2);
        iVar4 = extraout_EDX;
      }
      uVar3 = (uint)((longlong)(int)uVar2 * (longlong)iVar4);
      if ((longlong)(int)uVar3 != (longlong)(int)uVar2 * (longlong)iVar4) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      piVar1 = (int *)(*(int *)(param_1 + 0x188) + 0x38);
      iVar4 = *(int *)(param_1 + 0x38) - *piVar1;
      if (SBORROW4(*(int *)(param_1 + 0x38),*piVar1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
        iVar4 = extraout_ECX;
      }
      uVar2 = (int)uVar3 / iVar4 + *(int *)(param_1 + 0x178);
      if (SCARRY4((int)uVar3 / iVar4,*(int *)(param_1 + 0x178))) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      *(uint *)(param_1 + 0x180) = uVar2;
    }
  }
  return;
}

