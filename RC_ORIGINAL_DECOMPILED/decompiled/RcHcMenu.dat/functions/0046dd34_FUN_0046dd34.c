/*
 * FUN_0046dd34 at 0046dd34
 * undefined __register FUN_0046dd34(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 0046dd34-0046dda1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046dd34(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  int extraout_EDX;
  
  iVar2 = param_2;
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    FUN_004713cc(*(int **)(param_1 + 0xec));
    iVar2 = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xec) + 0x78) = 0;
    param_3 = extraout_ECX;
    if (*(int *)(param_1 + 0x28) != 0) {
      piVar1 = (int *)FUN_00471334(*(int *)(param_1 + 0x28),0,extraout_ECX);
      FUN_0041251c(piVar1,*(int *)(param_1 + 0xec));
      param_3 = extraout_ECX_00;
      iVar2 = extraout_EDX;
    }
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xd4);
  }
  else {
    piVar1 = (int *)FUN_00471334(*(int *)(param_1 + 0x28),iVar2,param_3);
    FUN_004121d8(piVar1,param_2);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x24);
  }
  *(int *)(param_1 + 0xec) = param_2;
  return;
}

