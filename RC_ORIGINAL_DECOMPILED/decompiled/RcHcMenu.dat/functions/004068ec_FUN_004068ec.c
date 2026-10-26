/*
 * FUN_004068ec at 004068ec
 * undefined __register FUN_004068ec(undefined4 param_1)
 * Address ranges: 004068ec-0040690a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004068ec(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004027e8(8);
  *puVar1 = DAT_0056f020;
  puVar1[1] = param_1;
  DAT_0056f020 = puVar1;
  return;
}

