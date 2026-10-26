/*
 * FUN_00558438 at 00558438
 * undefined __register FUN_00558438(uint param_1)
 * Address ranges: 00558438-0055850b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 63 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 63 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_00558438(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int extraout_EDX_01;
  
  FUN_00431f54(*(int **)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x34));
  if (*(int *)(param_1 + 0x17c) != *(int *)(param_1 + 0x178)) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x188) + 0x38);
    uVar1 = *(int *)(param_1 + 0x38) - iVar3;
    if (SBORROW4(*(int *)(param_1 + 0x38),iVar3)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    iVar3 = *(int *)(param_1 + 0x180) - *(int *)(param_1 + 0x178);
    if (SBORROW4(*(int *)(param_1 + 0x180),*(int *)(param_1 + 0x178))) {
      uVar1 = thunk_FUN_00402874(uVar1);
      iVar3 = extraout_EDX;
    }
    uVar2 = (uint)((longlong)(int)uVar1 * (longlong)iVar3);
    if ((longlong)(int)uVar2 != (longlong)(int)uVar1 * (longlong)iVar3) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    iVar3 = *(int *)(param_1 + 0x17c) - *(int *)(param_1 + 0x178);
    if (SBORROW4(*(int *)(param_1 + 0x17c),*(int *)(param_1 + 0x178))) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar3 = extraout_EDX_00;
    }
    iVar4 = (int)uVar2 / iVar3 + *(int *)(param_1 + 0x30);
    if (SCARRY4((int)uVar2 / iVar3,*(int *)(param_1 + 0x30))) {
      thunk_FUN_00402874(param_1);
      iVar4 = extraout_EDX_01;
    }
    FUN_00431f34(*(int **)(param_1 + 0x188),iVar4);
    return;
  }
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x178);
  FUN_00431f34(*(int **)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x30));
  return;
}

