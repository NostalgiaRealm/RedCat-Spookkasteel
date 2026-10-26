/*
 * FUN_10018c10 at 10018c10
 * undefined FUN_10018c10(void)
 * Address ranges: 10018c10-10018c50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10018c10(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 1 << (param_2 & 0x1f);
  iVar1 = FUN_100203d0();
  return iVar1 * (*(int *)(param_1 + 0xc) + -1 + iVar2 >> (param_2 & 0x1f)) *
         (*(int *)(param_1 + 8) + -1 + iVar2 >> (param_2 & 0x1f));
}

