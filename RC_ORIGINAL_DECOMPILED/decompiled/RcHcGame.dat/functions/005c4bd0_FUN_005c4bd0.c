/*
 * FUN_005c4bd0 at 005c4bd0
 * undefined FUN_005c4bd0(void)
 * Address ranges: 005c4bd0-005c4ca5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_005c4bd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_1c [8];
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar4 = puVar1;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar1[3] = param_3;
  puVar1[8] = param_1;
  uVar2 = FUN_005c6ab0(0,8);
  iVar3 = FUN_005c1710(param_1,param_3,1,1,param_2,0,0,uVar2);
  puVar1[9] = iVar3;
  if (iVar3 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x11d7,
                 &DAT_006b3f70,0);
    FUN_005cf400(puVar1);
    _DAT_007203c0 = 0;
    return (undefined4 *)0x0;
  }
  (**(code **)(param_1 + 0x54))(local_1c);
  puVar1[2] = uStack_c;
  puVar1[4] = uStack_10 & 1;
  puVar1[5] = uStack_14;
  puVar1[6] = 0xffffffff;
  puVar1[1] = 1;
  return puVar1;
}

