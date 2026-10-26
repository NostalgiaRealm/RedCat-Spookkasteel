/*
 * FUN_005c86c0 at 005c86c0
 * undefined FUN_005c86c0(void)
 * Address ranges: 005c86c0-005c8789
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c86c0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x2df,&DAT_006b3f70,
                 0);
    return 0;
  }
  puVar3 = puVar1;
  iVar2 = (**(code **)(*DAT_006cc490 + 0xc))(DAT_006cc490,param_1,puVar1,0);
  if (iVar2 != 0) {
    FUN_005cf220(10,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x2e4,&DAT_006b3f70,0)
    ;
    return 0;
  }
  iVar2 = (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,puVar1 + 2);
  if (iVar2 != 0) {
    FUN_005cf220(0xb,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x2e9,&DAT_006b3f70,0
                );
    return 0;
  }
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *puVar3 = puVar1;
  return 1;
}

