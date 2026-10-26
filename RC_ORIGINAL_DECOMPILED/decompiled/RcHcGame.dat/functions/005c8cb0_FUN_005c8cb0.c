/*
 * FUN_005c8cb0 at 005c8cb0
 * undefined FUN_005c8cb0(void)
 * Address ranges: 005c8cb0-005c8d74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c8cb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)param_1[3];
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      param_1[3] = 0;
      *param_1 = 0;
      return 1;
    }
    puVar1 = (undefined4 *)puVar2[7];
    FUN_005c8980(puVar2);
    FUN_005c89a0(puVar2);
    iVar3 = (**(code **)(*(int *)*puVar2 + 0x48))((int *)*puVar2);
    if (iVar3 != 0) break;
    iVar3 = (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
    if (iVar3 != 0) {
      FUN_005cf220(0xb,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x3f5,&DAT_006b3f70
                   ,0);
      return 0;
    }
    if (puVar2[6] != 0) {
      FUN_005cf400(puVar2[6]);
      puVar2[6] = 0;
      _DAT_007203c0 = 0;
    }
    FUN_005cf400(puVar2);
    _DAT_007203c0 = 0;
    puVar2 = puVar1;
  }
  FUN_005cf220(0xb,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x3ef,&DAT_006b3f70,0);
  return 0;
}

