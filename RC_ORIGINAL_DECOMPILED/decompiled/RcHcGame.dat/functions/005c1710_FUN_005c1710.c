/*
 * FUN_005c1710 at 005c1710
 * undefined FUN_005c1710(void)
 * Address ranges: 005c1710-005c1925
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005c1710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_32c [4];
  uint uStack_328;
  undefined1 *local_324;
  undefined1 local_320 [800];
  
  local_324 = local_320;
  (**(code **)(param_1 + 0x1c))();
  uVar1 = (uint)((int)local_324 - (int)local_320) >> 3;
  if (uVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x5db,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar4 = param_6;
  if ((param_5 != 0) && (iVar4 = param_5, param_6 == 0)) {
    param_6 = param_5;
  }
  iVar2 = FUN_005c1350(iVar4,param_6,param_7,param_8,param_9,param_10,local_320,uVar1,auStack_32c);
  if (iVar2 != 0) {
    uVar3 = FUN_005c6b30();
    uVar3 = FUN_005c6b30(uVar3);
    FUN_005e1120(s_Bitmap___Chose__s_for__s_006a9844,uVar3);
    if (iVar4 != param_6) {
      uVar3 = FUN_005c6b30();
      FUN_005e1120(s___s__006a983c,uVar3);
    }
    if (param_7 != 0) {
      FUN_005e1120(s__sought_CK__006a982c);
    }
    if (param_8 != 0) {
      FUN_005e1120(s__sought_Alpha__006a981c);
    }
    if ((uStack_328 & 1) != 0) {
      FUN_005e1120(s__2D__006a9814);
    }
    if ((uStack_328 & 2) != 0) {
      FUN_005e1120(s__3D__006a980c);
    }
    if ((uStack_328 & 0x20000) != 0) {
      FUN_005e1120(s__can_CK__006a9800);
    }
    if ((uStack_328 & 8) != 0) {
      FUN_005e1120(s__Palette__006a97f4);
    }
    if ((uStack_328 & 0x10) != 0) {
      FUN_005e1120(s__Alpha__006a97e8);
    }
    if ((uStack_328 & 4) != 0) {
      FUN_005e1120(s__Lightmap__006a97dc);
    }
    FUN_005e1120(&DAT_006a90d0);
    iVar4 = (**(code **)(param_1 + 0x34))(param_4,auStack_32c);
    if (iVar4 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x610,
                   &DAT_006b3f70,0);
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x611,
                   &DAT_006b3f70,0);
    }
    return iVar4;
  }
  return 0;
}

