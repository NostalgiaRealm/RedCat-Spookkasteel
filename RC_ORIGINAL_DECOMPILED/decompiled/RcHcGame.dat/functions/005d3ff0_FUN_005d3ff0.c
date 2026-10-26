/*
 * FUN_005d3ff0 at 005d3ff0
 * undefined FUN_005d3ff0(void)
 * Address ranges: 005d3ff0-005d4065
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005d3ff0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac574,0x49,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar2 = FUN_005d4150(puVar1,param_1);
  if (iVar2 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac574,0x53,
                 &DAT_006b3f70,0);
    FUN_005d4070(puVar1);
    return (undefined4 *)0x0;
  }
  return puVar1;
}

