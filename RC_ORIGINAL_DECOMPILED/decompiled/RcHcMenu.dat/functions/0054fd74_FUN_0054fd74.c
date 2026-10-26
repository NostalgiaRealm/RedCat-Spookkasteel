/*
 * FUN_0054fd74 at 0054fd74
 * undefined4 __register FUN_0054fd74(int param_1)
 * Address ranges: 0054fd74-0054fd9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0054fd74(int param_1)

{
  undefined1 uVar1;
  undefined3 uVar2;
  
  if ((*(char *)(param_1 + 0x20) == '\0') || (*PTR_DAT_00572000 == '\0')) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined3)((uint)PTR_DAT_00572000 >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar2,uVar1);
}

