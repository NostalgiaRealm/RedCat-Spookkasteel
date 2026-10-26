/*
 * FUN_0049d038 at 0049d038
 * undefined __register FUN_0049d038(int param_1, int param_2)
 * Address ranges: 0049d038-0049d0c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049d038(int param_1,int param_2)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  
  DVar1 = GetTickCount();
  uVar2 = DVar1 + *(uint *)(param_2 + 0x28);
  if (CARRY4(DVar1,*(uint *)(param_2 + 0x28))) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  *(uint *)(param_2 + 0x30) = uVar2;
  FUN_0042344c(*(int **)(param_1 + 8),param_2);
  if (*(int *)(*(int *)(param_1 + 8) + 8) == 1) {
    iVar3 = FUN_0049cd38(param_1);
    FUN_00455658(iVar3,*(int *)(param_2 + 0x28));
  }
  else {
    FUN_0041266c(*(int *)(param_1 + 8),&LAB_0049cfec);
    iVar3 = FUN_0049cd38(param_1);
    uVar2 = FUN_0049c99c(*(uint *)(iVar3 + 0x24),*(uint *)(param_2 + 0x28));
    iVar3 = FUN_0049cd38(param_1);
    FUN_00455658(iVar3,uVar2);
  }
  return;
}

