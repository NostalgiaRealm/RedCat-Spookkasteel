/*
 * FUN_1001bb20 at 1001bb20
 * undefined FUN_1001bb20(void)
 * Address ranges: 1001bb20-1001bb56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1001bb20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10014310(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_10015fb0(0x5b,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x52,&DAT_10265ce0,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = puVar1;
  return puVar1;
}

