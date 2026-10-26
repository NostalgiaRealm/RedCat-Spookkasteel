/*
 * FUN_005b6070 at 005b6070
 * undefined FUN_005b6070(void)
 * Address ranges: 005b6070-005b60b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b6070(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9478 + 8,0x92,
                 &DAT_006b3f70,0);
    return 0;
  }
  *puVar1 = 0;
  *(undefined4 **)(param_1 + 0xbc4) = puVar1;
  return 1;
}

