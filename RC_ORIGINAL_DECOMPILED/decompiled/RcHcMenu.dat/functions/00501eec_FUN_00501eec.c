/*
 * FUN_00501eec at 00501eec
 * undefined __register FUN_00501eec(int param_1)
 * Address ranges: 00501eec-00501f4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 58 for TDaviComboBase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 58 for
   TDaviComboBase. Original bytes unchanged; names and types still inferred. */

void FUN_00501eec(int param_1)

{
  bool bVar1;
  
  if ((*(char *)(param_1 + 0x250) == '\0') && (bVar1 = FUN_00501798(param_1), bVar1)) {
    return;
  }
  if ((((*(byte *)(param_1 + 0x20) & 8) == 0) && (*(short *)(param_1 + 0x262) != 0)) &&
     ((*(byte *)(param_1 + 0x25c) & 0x20) != 0)) {
    (**(code **)(param_1 + 0x260))(*(undefined4 *)(param_1 + 0x264),param_1);
  }
  *(byte *)(param_1 + 0x25c) = *(byte *)(param_1 + 0x25c) & 0xdf;
  return;
}

