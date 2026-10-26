/*
 * FUN_004854c4 at 004854c4
 * undefined __register FUN_004854c4(int param_1)
 * Address ranges: 004854c4-00485509
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004854c4(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x8d) == '\x02') {
    FUN_004730d8(param_1);
    uVar1 = thunk_FUN_00479c76(*(undefined4 *)(param_1 + 0x168));
    FUN_0047fe48(uVar1);
    return;
  }
  FUN_004730d8(param_1);
  uVar1 = thunk_FUN_00479c7c(*(undefined4 *)(param_1 + 0x168));
  FUN_0047fe48(uVar1);
  return;
}

