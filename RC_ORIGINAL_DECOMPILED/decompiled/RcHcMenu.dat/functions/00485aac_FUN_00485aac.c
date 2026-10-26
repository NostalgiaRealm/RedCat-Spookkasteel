/*
 * FUN_00485aac at 00485aac
 * undefined __register FUN_00485aac(int param_1)
 * Address ranges: 00485aac-00485ad4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485aac(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    FUN_00466e8c((int *)(param_1 + 0x1c0 + (uint)bVar1 * 4));
    bVar1 = bVar1 + 1;
  } while (bVar1 != 6);
  return;
}

