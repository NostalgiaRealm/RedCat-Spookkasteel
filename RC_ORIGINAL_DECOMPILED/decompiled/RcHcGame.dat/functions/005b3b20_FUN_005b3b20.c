/*
 * FUN_005b3b20 at 005b3b20
 * undefined FUN_005b3b20(void)
 * Address ranges: 005b3b20-005b3b6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005b3b20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x6e,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0xcf,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[5] = puVar1;
  puVar1[4] = 0;
  DAT_006caddc = DAT_006caddc + 1;
  return puVar1;
}

