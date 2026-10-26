/*
 * FUN_00489520 at 00489520
 * undefined __register FUN_00489520(int param_1)
 * Address ranges: 00489520-0048955f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00489520(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar1 = thunk_FUN_00479abe(*(undefined4 *)(*(int *)(param_1 + 8) + 0x168));
    FUN_0047fe48(uVar1);
    *(undefined1 *)(param_1 + 0x19) = 1;
    FUN_00485260(*(int *)(param_1 + 8),*(int *)(param_1 + 4),*(int *)(param_1 + 0xc),
                 (undefined4 *)0x0);
  }
  return;
}

