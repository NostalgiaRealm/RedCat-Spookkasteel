/*
 * FUN_0049eed0 at 0049eed0
 * undefined FUN_0049eed0(void)
 * Address ranges: 0049eed0-0049eefa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049eed0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x198) != '\0') {
    iVar1 = param_1 + 0x168;
    FUN_004247e0(iVar1);
    FUN_005b50a0(iVar1);
    *(undefined1 *)(param_1 + 0x198) = 0;
  }
  return;
}

