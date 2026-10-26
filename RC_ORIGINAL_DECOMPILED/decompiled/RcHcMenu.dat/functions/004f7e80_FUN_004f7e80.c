/*
 * FUN_004f7e80 at 004f7e80
 * undefined __register FUN_004f7e80(void)
 * Address ranges: 004f7e80-004f7eee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f7e80(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004f7eef;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0057469c = _DAT_0057469c + 1;
  if (_DAT_0057469c == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_005746a0 != (HMODULE)0x0) {
      FreeLibrary(DAT_005746a0);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    if (DAT_005746a4 != (HMODULE)0x0) {
      FreeLibrary(DAT_005746a4);
    }
    FUN_0040484c(0x571d54,(int)&DAT_004f4540);
    FUN_0040484c(0x571d48,(int)&DAT_004f4540);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

