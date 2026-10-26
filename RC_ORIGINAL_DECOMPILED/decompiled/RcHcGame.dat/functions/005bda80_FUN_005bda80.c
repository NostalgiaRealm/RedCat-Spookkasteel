/*
 * FUN_005bda80 at 005bda80
 * undefined FUN_005bda80(void)
 * Address ranges: 005bda80-005bda8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005bda80(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != 2) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 4);
}

