/*
 * FUN_005de780 at 005de780
 * undefined FUN_005de780(void)
 * Address ranges: 005de780-005de7d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005de780(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_005e1bc0(*(int *)(param_1 + 0xc),param_2);
  FUN_005e1b70(*(undefined4 *)(param_1 + 0xc),param_2 + 8);
  FUN_005e14e0(*(undefined4 *)(param_1 + 0xc),param_2 + 0xc);
  FUN_005e1c50(*(undefined4 *)(param_1 + 0xc),param_2 + 0x10);
  FUN_005e1c70(*(undefined4 *)(param_1 + 0xc),param_2 + 0x18,0x400);
  return;
}

