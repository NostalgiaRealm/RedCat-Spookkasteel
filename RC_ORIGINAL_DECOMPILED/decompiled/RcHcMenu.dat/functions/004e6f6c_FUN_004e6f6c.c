/*
 * FUN_004e6f6c at 004e6f6c
 * undefined __register FUN_004e6f6c(void)
 * Address ranges: 004e6f6c-004e6fc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6f6c(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004e6fc1;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00574630 = _DAT_00574630 + 1;
  if (_DAT_00574630 == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_00574634 != (HWND)0x0) {
      SendMessageA(DAT_00574634,0x10,0,0);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    if (DAT_00574638 != (HMODULE)0x0) {
      FreeLibrary(DAT_00574638);
    }
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

