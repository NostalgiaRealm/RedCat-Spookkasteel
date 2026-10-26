/*
 * FUN_0053eb10 at 0053eb10
 * undefined FUN_0053eb10(void)
 * Address ranges: 0053eb10-0053eb7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0053eb10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar3 = *(int *)(param_1 + 4); iVar3 != iVar1; iVar3 = iVar3 + 0x10) {
    iVar2 = *(int *)(iVar3 + 8);
    for (iVar4 = *(int *)(iVar3 + 4); iVar4 != iVar2; iVar4 = iVar4 + 4) {
      FUN_00548e00(iVar4);
    }
    FUN_005fe5f0(*(undefined4 *)(iVar3 + 4));
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

