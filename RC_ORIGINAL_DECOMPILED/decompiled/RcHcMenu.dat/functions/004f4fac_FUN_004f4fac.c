/*
 * FUN_004f4fac at 004f4fac
 * undefined4 __register FUN_004f4fac(int param_1, undefined4 param_2)
 * Address ranges: 004f4fac-004f4fd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f4fac(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 = param_2;
  if (*(short *)(param_1 + 0x23a) != 0) {
    (**(code **)(param_1 + 0x238))(*(undefined4 *)(param_1 + 0x23c),param_1,param_2,&local_8);
  }
  return local_8;
}

