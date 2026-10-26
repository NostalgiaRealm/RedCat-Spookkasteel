/*
 * FUN_00406500 at 00406500
 * int __register FUN_00406500(int param_1)
 * Address ranges: 00406500-00406523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00406500(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0056f01c;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return param_1;
    }
    if (((param_1 == puVar1[1]) || (param_1 == puVar1[2])) || (param_1 == puVar1[3])) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[4];
}

