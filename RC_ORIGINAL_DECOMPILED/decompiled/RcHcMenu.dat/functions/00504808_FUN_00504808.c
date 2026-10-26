/*
 * FUN_00504808 at 00504808
 * undefined __register FUN_00504808(uint param_1)
 * Address ranges: 00504808-00504915
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x503a74 slot 61 for TDaviCustomComboBox2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x503a74 slot 61 for
   TDaviCustomComboBox2. Original bytes unchanged; names and types still inferred. */

void FUN_00504808(uint param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  FUN_005021b8(param_1);
  piVar3 = (int *)FUN_0050423c(param_1);
  piVar3 = (int *)FUN_00502bdc(piVar3);
  iVar4 = (**(code **)(*piVar3 + 0x14))();
  if (iVar4 < 2) {
    iVar4 = FUN_0050423c(param_1);
    uVar5 = *(int *)(iVar4 + 0x200) + 2;
    if (SCARRY4(*(int *)(iVar4 + 0x200),2)) {
      uVar5 = thunk_FUN_00402874(uVar5);
    }
    piVar3 = (int *)FUN_0050423c(param_1);
    FUN_00431f98(piVar3,uVar5);
  }
  else if (*(int *)(param_1 + 0x278) < iVar4) {
    iVar4 = FUN_0050423c(param_1);
    lVar2 = (longlong)*(int *)(iVar4 + 0x200) * (longlong)*(int *)(param_1 + 0x278);
    uVar5 = (uint)lVar2;
    if ((int)uVar5 != lVar2) {
      uVar5 = thunk_FUN_00402874(uVar5);
    }
    uVar7 = uVar5 + 2;
    if (SCARRY4(uVar5,2)) {
      uVar7 = thunk_FUN_00402874(uVar7);
    }
    piVar3 = (int *)FUN_0050423c(param_1);
    FUN_00431f98(piVar3,uVar7);
  }
  else {
    iVar6 = FUN_0050423c(param_1);
    lVar2 = (longlong)*(int *)(iVar6 + 0x200) * (longlong)iVar4;
    uVar5 = (uint)lVar2;
    if ((int)uVar5 != lVar2) {
      uVar5 = thunk_FUN_00402874(uVar5);
    }
    uVar7 = uVar5 + 2;
    if (SCARRY4(uVar5,2)) {
      uVar7 = thunk_FUN_00402874(uVar7);
    }
    piVar3 = (int *)FUN_0050423c(param_1);
    FUN_00431f98(piVar3,uVar7);
  }
  iVar4 = FUN_0050423c(param_1);
  iVar4 = *(int *)(iVar4 + 0x204);
  piVar3 = (int *)FUN_0050423c(param_1);
  FUN_00502d58(piVar3,iVar4);
  iVar4 = FUN_0050423c(param_1);
  uVar1 = *(undefined4 *)(iVar4 + 0x204);
  piVar3 = (int *)FUN_0050423c(param_1);
  (**(code **)(*piVar3 + 0xc0))(piVar3,uVar1);
  return;
}

