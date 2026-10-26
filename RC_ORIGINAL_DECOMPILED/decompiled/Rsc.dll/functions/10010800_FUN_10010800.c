/*
 * FUN_10010800 at 10010800
 * undefined __cdecl FUN_10010800(int param_1)
 * Address ranges: 10010800-10010892
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10010800(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_100316d0)) {
    FUN_100041a0(*(void **)(param_1 + 0xc),2);
    FUN_100041a0(*(void **)(param_1 + 0x10),2);
    FUN_100041a0(*(void **)(param_1 + 0x14),2);
    FUN_100041a0(*(void **)(param_1 + 0x18),2);
    FUN_100041a0(*(void **)(param_1 + 0x1c),2);
    FUN_100041a0(*(void **)(param_1 + 0x20),2);
    FUN_100041a0(*(void **)(param_1 + 0x24),2);
  }
  return;
}

