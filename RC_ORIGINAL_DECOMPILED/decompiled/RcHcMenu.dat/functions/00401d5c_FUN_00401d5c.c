/*
 * FUN_00401d5c at 00401d5c
 * undefined4 * __register FUN_00401d5c(uint param_1)
 * Address ranges: 00401d5c-00401d8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00401d5c(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00573494;
  while( true ) {
    if ((undefined4 **)puVar1 == &DAT_00573494) {
      DAT_00573434 = 3;
      return (undefined4 *)0x0;
    }
    if (((uint)puVar1[2] <= param_1) && (param_1 < (uint)(puVar1[2] + puVar1[3]))) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

