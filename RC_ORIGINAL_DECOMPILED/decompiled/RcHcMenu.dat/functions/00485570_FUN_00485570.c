/*
 * FUN_00485570 at 00485570
 * undefined __register FUN_00485570(int param_1)
 * Address ranges: 00485570-004855ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485570(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x78) != 0) && (*(char *)(*(int *)(param_1 + 0x78) + 0x34) == '\x1c')) {
    FUN_004730d8(param_1);
    uVar1 = thunk_FUN_00479b76(*(undefined4 *)(param_1 + 0x168));
    FUN_0047fe48(uVar1);
    return;
  }
  uVar1 = thunk_FUN_00479b82(*(undefined4 *)(param_1 + 0x168));
  FUN_0047fe48(uVar1);
  return;
}

