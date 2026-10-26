/*
 * FUN_00401dbc at 00401dbc
 * undefined __register FUN_00401dbc(int param_1)
 * Address ranges: 00401dbc-00401ddd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401dbc(int param_1)

{
  _DAT_00573424 = _DAT_00573424 + 1;
  _DAT_00573428 = _DAT_00573428 + ((*(uint *)(param_1 + -4) & 0x7ffffffc) - 4);
  FUN_004023b0(param_1);
  return;
}

