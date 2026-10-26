/*
 * FUN_00485a38 at 00485a38
 * undefined __register FUN_00485a38(int param_1)
 * Address ranges: 00485a38-00485a8b;00485aa3-00485aa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485a38(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_00485a8c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  bVar2 = 0;
  do {
    puVar1 = FUN_0040960c(*(ushort *)(param_1 + 0x1e8) + 6);
    puVar1 = FUN_00485ad8(param_1,puVar1);
    *(undefined4 **)(param_1 + 0x1c0 + (uint)bVar2 * 4) = puVar1;
    bVar2 = bVar2 + 1;
  } while (bVar2 != 6);
  *in_FS_OFFSET = uStack_20;
  return;
}

