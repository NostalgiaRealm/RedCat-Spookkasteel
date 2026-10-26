/*
 * FUN_10006760 at 10006760
 * undefined4 __fastcall FUN_10006760(int param_1)
 * Address ranges: 10006760-10006798
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10006760(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 4) + 0xc + iVar2) != 0) {
        FUN_100061e0((int *)(*(int *)(param_1 + 4) + iVar2));
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x34;
    } while (iVar1 < *(int *)(param_1 + 0xc));
    return 0;
  }
  return 0;
}

