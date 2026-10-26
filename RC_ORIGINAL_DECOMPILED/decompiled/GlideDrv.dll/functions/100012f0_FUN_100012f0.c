/*
 * FUN_100012f0 at 100012f0
 * undefined __cdecl FUN_100012f0(int param_1)
 * Address ranges: 100012f0-1000131d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100012f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34) + -1;
  *(int *)(param_1 + 0x34) = iVar1;
  if (iVar1 == 0) {
    if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
      FUN_10003f4c(*(undefined **)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

