/*
 * FUN_004a60f4 at 004a60f4
 * undefined __register FUN_004a60f4(void)
 * Address ranges: 004a60f4-004a6145
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a60f4(void)

{
  HMODULE hLibModule;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_00574244 != (int *)0x0) {
    local_c = (**(code **)(*DAT_00574244 + 0x14))();
    if (-1 < local_c + -1) {
      local_8 = 0;
      do {
        hLibModule = (HMODULE)(**(code **)(*DAT_00574244 + 0x18))(DAT_00574244,local_8);
        FreeLibrary(hLibModule);
        local_8 = local_8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    FUN_00403094(DAT_00574244);
  }
  return;
}

