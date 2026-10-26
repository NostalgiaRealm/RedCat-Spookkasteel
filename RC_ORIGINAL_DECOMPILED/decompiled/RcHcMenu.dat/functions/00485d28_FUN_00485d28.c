/*
 * FUN_00485d28 at 00485d28
 * undefined __register FUN_00485d28(int param_1)
 * Address ranges: 00485d28-00485d66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485d28(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x188) != 0) {
    uVar1 = thunk_FUN_00479453(*(undefined4 *)(param_1 + 0x168));
    FUN_0047fe48(uVar1);
  }
  if (*(int *)(param_1 + 0x184) != 0) {
    uVar1 = thunk_FUN_00479453(*(undefined4 *)(param_1 + 0x168));
    FUN_0047fe48(uVar1);
  }
  return;
}

