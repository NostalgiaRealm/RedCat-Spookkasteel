/*
 * FUN_005c3300 at 005c3300
 * undefined FUN_005c3300(void)
 * Address ranges: 005c3300-005c3340
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005c3300(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 1 << (param_2 & 0x1f);
  iVar1 = FUN_005c6a70();
  return iVar1 * (*(int *)(param_1 + 0xc) + -1 + iVar2 >> (param_2 & 0x1f)) *
         (*(int *)(param_1 + 8) + -1 + iVar2 >> (param_2 & 0x1f));
}

