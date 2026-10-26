/*
 * FUN_005de390 at 005de390
 * undefined FUN_005de390(void)
 * Address ranges: 005de390-005de3cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005de390(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x4d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b0894,99,&DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  puVar1[1] = param_1;
  *puVar1 = 0;
  return puVar1;
}

