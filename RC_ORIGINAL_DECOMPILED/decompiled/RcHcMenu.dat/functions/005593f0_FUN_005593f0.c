/*
 * FUN_005593f0 at 005593f0
 * undefined __register FUN_005593f0(int param_1)
 * Address ranges: 005593f0-0055951b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005593f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  
  FUN_00431f54(*(int **)(param_1 + 0x1f0),0);
  FUN_00431f54(*(int **)(param_1 + 0x1f8),0);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1f8) + 0x34);
  uVar2 = *(uint *)(param_1 + 0x1f8);
  iVar3 = iVar4 + *(int *)(uVar2 + 0x3c);
  if (SCARRY4(iVar4,*(int *)(uVar2 + 0x3c))) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX;
  }
  iVar4 = iVar3 + 5;
  if (SCARRY4(iVar3,5)) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX_00;
  }
  FUN_00431f54(*(int **)(param_1 + 500),iVar4);
  FUN_00431f54(*(int **)(param_1 + 0x1fc),0x1d);
  FUN_00431f34(*(int **)(param_1 + 0x1f0),0);
  FUN_00431f34(*(int **)(param_1 + 0x1f8),0);
  piVar1 = (int *)(*(uint *)(param_1 + 500) + 0x38);
  uVar2 = *(int *)(param_1 + 0x38) - *piVar1;
  if (SBORROW4(*(int *)(param_1 + 0x38),*piVar1)) {
    thunk_FUN_00402874(*(uint *)(param_1 + 500));
    uVar2 = extraout_EDX_01;
  }
  iVar4 = (int)uVar2 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
  }
  FUN_00431f34(*(int **)(param_1 + 500),iVar4);
  FUN_00431f34(*(int **)(param_1 + 0x1fc),0xe);
  FUN_00431f54(*(int **)(param_1 + 0x200),5);
  FUN_00431f34(*(int **)(param_1 + 0x200),0);
  FUN_00431f78(*(int **)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x38));
  FUN_00431d2c(*(int **)(param_1 + 0x200),0,extraout_ECX);
  FUN_00429250(*(int **)(param_1 + 0x200),'\x02');
  return;
}

