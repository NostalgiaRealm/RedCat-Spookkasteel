/*
 * FUN_00548b60 at 00548b60
 * undefined FUN_00548b60(void)
 * Address ranges: 00548b60-00548b97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00548b60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 0x38) {
    FUN_0053ea60();
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

