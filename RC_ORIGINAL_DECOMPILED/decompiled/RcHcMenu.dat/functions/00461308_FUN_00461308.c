/*
 * FUN_00461308 at 00461308
 * undefined4 __register FUN_00461308(undefined4 param_1)
 * Address ranges: 00461308-00461327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00461308(undefined4 param_1)

{
  if ((char)param_1 == '/') {
    param_1 = CONCAT31((int3)((uint)PTR_DAT_0057215c >> 8),*PTR_DAT_0057215c);
  }
  else if ((char)param_1 == ':') {
    return CONCAT31((int3)((uint)PTR_DAT_00572018 >> 8),*PTR_DAT_00572018);
  }
  return param_1;
}

