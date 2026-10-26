/*
 * FUN_00409658 at 00409658
 * undefined __register FUN_00409658(undefined4 param_1)
 * Address ranges: 00409658-0040968c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00409658(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004027e8(0xc);
  *puVar1 = DAT_0056f194;
  puVar1[1] = *(undefined4 *)PTR_DAT_0057205c;
  puVar1[2] = param_1;
  DAT_0056f194 = puVar1;
  *(undefined1 **)PTR_DAT_0057205c = &LAB_0040962c;
  return;
}

