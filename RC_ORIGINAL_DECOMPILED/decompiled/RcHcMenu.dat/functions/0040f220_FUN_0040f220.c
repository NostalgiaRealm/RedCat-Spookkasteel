/*
 * FUN_0040f220 at 0040f220
 * undefined __register FUN_0040f220(void)
 * Address ranges: 0040f220-0040f287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f220(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0040f288;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_005735fc == 0;
  _DAT_005735fc = _DAT_005735fc + -1;
  if (bVar1) {
    FUN_00403b80((int *)&DAT_0040e548);
    FUN_00403b9c((int *)&LAB_0040e634);
    if (DAT_005734d1 != '\0') {
      FUN_00403e04((int *)&PTR_DAT_0056f18c,(undefined4 *)&DAT_0040f29c);
    }
    FUN_0040d620();
    FUN_0040dd2c();
    FUN_0040d758();
    FUN_0040e304();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

