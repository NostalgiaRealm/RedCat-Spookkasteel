/*
 * FUN_00556d2c at 00556d2c
 * undefined __register FUN_00556d2c(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00556d2c-00556f28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00556d74) */

void FUN_00556d2c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar4;
  int extraout_EDX_03;
  uint extraout_EDX_04;
  
  FUN_0043262c(*(int **)(param_1 + 0x210),0,param_3);
  FUN_00431f54(*(int **)(param_1 + 0x208),0);
  FUN_00431f54(*(int **)(param_1 + 0x210),0);
  iVar4 = *(int *)(*(uint *)(param_1 + 0x210) + 0x3c);
  iVar3 = iVar4 + 5;
  if (SCARRY4(iVar4,5)) {
    thunk_FUN_00402874(*(uint *)(param_1 + 0x210));
    iVar3 = extraout_EDX;
  }
  FUN_00431f54(*(int **)(param_1 + 0x20c),iVar3);
  FUN_00431f54(*(int **)(param_1 + 0x218),0x71);
  iVar4 = *(int *)(*(int *)(param_1 + 0x218) + 0x34);
  piVar1 = (int *)(*(uint *)(param_1 + 0x21c) + 0x3c);
  iVar3 = iVar4 + *piVar1;
  if (SCARRY4(iVar4,*piVar1)) {
    thunk_FUN_00402874(*(uint *)(param_1 + 0x21c));
    iVar3 = extraout_EDX_00;
  }
  FUN_00431f54(*(int **)(param_1 + 0x21c),iVar3);
  iVar4 = *(int *)(*(int *)(param_1 + 0x21c) + 0x34);
  piVar1 = (int *)(*(uint *)(param_1 + 0x220) + 0x3c);
  iVar3 = iVar4 + *piVar1;
  if (SCARRY4(iVar4,*piVar1)) {
    thunk_FUN_00402874(*(uint *)(param_1 + 0x220));
    iVar3 = extraout_EDX_01;
  }
  FUN_00431f54(*(int **)(param_1 + 0x220),iVar3);
  iVar4 = *(int *)(*(int *)(param_1 + 0x220) + 0x34);
  uVar2 = *(uint *)(param_1 + 0x214);
  iVar3 = iVar4 + *(int *)(uVar2 + 0x3c);
  if (SCARRY4(iVar4,*(int *)(uVar2 + 0x3c))) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX_02;
  }
  iVar4 = iVar3 + 3;
  if (SCARRY4(iVar3,3)) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX_03;
  }
  FUN_00431f54(*(int **)(param_1 + 0x214),iVar4);
  FUN_00431f54(*(int **)(param_1 + 0x224),10);
  FUN_00431f34(*(int **)(param_1 + 0x208),0);
  FUN_00431f34(*(int **)(param_1 + 0x210),0);
  FUN_00431f34(*(int **)(param_1 + 0x218),0x10);
  FUN_00431f34(*(int **)(param_1 + 0x21c),0x10);
  FUN_00431f34(*(int **)(param_1 + 0x220),0x10);
  FUN_00431f34(*(int **)(param_1 + 0x214),0x10);
  piVar1 = (int *)(*(uint *)(param_1 + 0x20c) + 0x38);
  uVar2 = *(int *)(param_1 + 0x38) - *piVar1;
  if (SBORROW4(*(int *)(param_1 + 0x38),*piVar1)) {
    thunk_FUN_00402874(*(uint *)(param_1 + 0x20c));
    uVar2 = extraout_EDX_04;
  }
  iVar4 = (int)uVar2 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
  }
  FUN_00431f34(*(int **)(param_1 + 0x20c),iVar4);
  FUN_00431f34(*(int **)(param_1 + 0x224),0);
  FUN_00431f78(*(int **)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x38));
  FUN_00431d2c(*(int **)(param_1 + 0x224),0,extraout_ECX);
  FUN_00429250(*(int **)(param_1 + 0x224),'\x02');
  return;
}

