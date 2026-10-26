/*
 * FUN_00477060 at 00477060
 * undefined4 __register FUN_00477060(char param_1)
 * Address ranges: 00477060-00477078
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00477060(char param_1)

{
  undefined3 in_register_00000001;
  
  if ((*(short *)(PTR_DAT_0057261c + 4) == 0x11) && ((byte)(param_1 + 0x5fU) < 0x3f)) {
    return CONCAT31(in_register_00000001,1);
  }
  return 0;
}

