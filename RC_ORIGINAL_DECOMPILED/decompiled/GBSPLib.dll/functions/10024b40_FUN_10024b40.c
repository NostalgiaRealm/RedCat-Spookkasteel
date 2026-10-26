/*
 * FUN_10024b40 at 10024b40
 * undefined FUN_10024b40(void)
 * Address ranges: 10024b40-10024b7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10024b40(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10014310(8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_10015fb0(0x4d,&DAT_10265ce0,s___Actor_tkarray_c_1003c920,0x62,&DAT_10265ce0,0);
    return (undefined4 *)0x0;
  }
  puVar1[1] = param_1;
  *puVar1 = 0;
  return puVar1;
}

