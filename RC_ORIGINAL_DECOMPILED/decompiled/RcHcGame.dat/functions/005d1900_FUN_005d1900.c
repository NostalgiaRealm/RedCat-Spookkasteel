/*
 * FUN_005d1900 at 005d1900
 * undefined FUN_005d1900(void)
 * Address ranges: 005d1900-005d1936
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005d1900(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x5b,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x53,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = puVar1;
  return puVar1;
}

