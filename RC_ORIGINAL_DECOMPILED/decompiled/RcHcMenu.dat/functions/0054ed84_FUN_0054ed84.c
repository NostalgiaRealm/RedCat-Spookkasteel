/*
 * FUN_0054ed84 at 0054ed84
 * undefined __register FUN_0054ed84(int param_1)
 * Address ranges: 0054ed84-0054ee67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054ed84(int param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar5;
  int extraout_EDX_02;
  int extraout_EDX_03;
  
  FUN_00431f54(*(int **)(param_1 + 0x2ec),0);
  piVar1 = (int *)(*(uint *)(param_1 + 0x2ec) + 0x38);
  iVar4 = *(int *)(param_1 + 0x38) - *piVar1;
  if (SBORROW4(*(int *)(param_1 + 0x38),*piVar1)) {
    thunk_FUN_00402874(*(uint *)(param_1 + 0x2ec));
    iVar4 = extraout_EDX;
  }
  FUN_00431f34(*(int **)(param_1 + 0x2ec),iVar4);
  piVar1 = (int *)(*(uint *)(param_1 + 0x2f0) + 0x38);
  iVar4 = *(int *)(param_1 + 0x38) - *piVar1;
  if (SBORROW4(*(int *)(param_1 + 0x38),*piVar1)) {
    thunk_FUN_00402874(*(uint *)(param_1 + 0x2f0));
    iVar4 = extraout_EDX_00;
  }
  FUN_00431f34(*(int **)(param_1 + 0x2f0),iVar4);
  uVar3 = *(uint *)(param_1 + 0x2f0);
  iVar4 = *(int *)(param_1 + 0x3c) - *(int *)(uVar3 + 0x3c);
  if (SBORROW4(*(int *)(param_1 + 0x3c),*(int *)(uVar3 + 0x3c))) {
    uVar3 = thunk_FUN_00402874(uVar3);
    iVar4 = extraout_EDX_01;
  }
  iVar5 = iVar4 + -2;
  if (SBORROW4(iVar4,2)) {
    thunk_FUN_00402874(uVar3);
    iVar5 = extraout_EDX_02;
  }
  FUN_00431f54(*(int **)(param_1 + 0x2f0),iVar5);
  lVar2 = (longlong)*(int *)(*(int *)(param_1 + 0x2f4) + 0x38) * 2;
  uVar3 = (uint)lVar2;
  if ((int)uVar3 != lVar2) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  iVar4 = *(int *)(param_1 + 0x38) - uVar3;
  if (SBORROW4(*(int *)(param_1 + 0x38),uVar3)) {
    thunk_FUN_00402874(uVar3);
    iVar4 = extraout_EDX_03;
  }
  FUN_00431f34(*(int **)(param_1 + 0x2f4),iVar4);
  FUN_00431f54(*(int **)(param_1 + 0x2f4),*(undefined4 *)(*(int *)(param_1 + 0x2f0) + 0x34));
  return;
}

