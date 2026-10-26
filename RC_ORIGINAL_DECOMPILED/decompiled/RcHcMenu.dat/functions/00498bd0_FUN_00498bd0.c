/*
 * FUN_00498bd0 at 00498bd0
 * uint __register FUN_00498bd0(undefined4 param_1)
 * Address ranges: 00498bd0-00498bf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00498bd0(undefined4 param_1)

{
  undefined4 local_c;
  undefined1 uStack_7;
  undefined1 uStack_6;
  
  uStack_7 = (undefined1)((uint)param_1 >> 8);
  uStack_6 = (undefined1)((uint)param_1 >> 0x10);
  local_c = CONCAT31(CONCAT21((short)param_1,uStack_7),uStack_6) & 0xffffff;
  return local_c;
}

