/*
 * FUN_1001a500 at 1001a500
 * undefined FUN_1001a500(void)
 * Address ranges: 1001a500-1001a555
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a500(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_100247e0(*(int *)(param_1 + 0xc),param_2);
  FUN_10024790(*(undefined4 *)(param_1 + 0xc),param_2 + 8);
  FUN_10024100(*(undefined4 *)(param_1 + 0xc),param_2 + 0xc);
  FUN_10024870(*(undefined4 *)(param_1 + 0xc),param_2 + 0x10);
  FUN_10024890(*(undefined4 *)(param_1 + 0xc),param_2 + 0x18,0x400);
  return;
}

