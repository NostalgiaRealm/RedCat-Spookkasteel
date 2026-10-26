/*
 * FUN_005c8f10 at 005c8f10
 * undefined FUN_005c8f10(void)
 * Address ranges: 005c8f10-005c8f75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005c8f10(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x128);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_C_006a9fdc,0x58,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1[0x47] = 0x3f000000;
  FUN_005c9070(param_1);
  return puVar1;
}

