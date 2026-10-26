/*
 * FUN_00498c30 at 00498c30
 * uint __register FUN_00498c30(undefined4 param_1)
 * Address ranges: 00498c30-00498c55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00498c30(undefined4 param_1)

{
  undefined4 local_c;
  undefined1 local_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  
  uStack_6 = (undefined1)((uint)param_1 >> 0x10);
  uStack_7 = (undefined1)((uint)param_1 >> 8);
  local_8 = (undefined1)param_1;
  local_c = (uint)CONCAT12(local_8,CONCAT11(uStack_7,uStack_6));
  return local_c;
}

