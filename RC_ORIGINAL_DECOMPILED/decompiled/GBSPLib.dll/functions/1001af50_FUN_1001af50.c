/*
 * FUN_1001af50 at 1001af50
 * undefined FUN_1001af50(void)
 * Address ranges: 1001af50-1001af9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001af50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10) < param_2) {
    param_2 = *(int *)(param_1 + 0xc) + 0x1fff + param_2;
    iVar2 = ((int)(param_2 + (param_2 >> 0x1f & 0x1fffU)) >> 0xd) << 0xd;
    iVar1 = FUN_10014370(*(undefined4 *)(param_1 + 4),iVar2);
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 0xc) = iVar2;
  }
  return 1;
}

