/*
 * FUN_005dcbd0 at 005dcbd0
 * undefined FUN_005dcbd0(void)
 * Address ranges: 005dcbd0-005dccfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005dcbd0(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_84;
  undefined1 local_80 [128];
  
  iVar1 = FUN_005cd390(4);
  if (iVar1 == 0) {
    FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x248,&DAT_006b3f70,
                 0);
    return 0;
  }
  if (local_84 != 0x51464b51) {
    FUN_005cf220(0x3e,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x24e,&DAT_006b3f70,
                 0);
    return 0;
  }
  iVar1 = FUN_005cd370(0x80);
  if (iVar1 == 0) {
    FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x254,&DAT_006b3f70,
                 0);
    return 0;
  }
  iVar1 = FUN_0060b449(local_80,s__f__f__f__f__f__f__f__f_006b07dc,param_2 + 4,param_2 + 8,
                       param_2 + 0xc,param_2 + 0x10,param_2 + 0x14,param_2 + 0x18,param_2 + 0x1c,
                       param_2 + 0x20);
  if (iVar1 != 8) {
    FUN_005cf220(0x3d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b079c,0x260,&DAT_006b3f70,
                 0);
    return 0;
  }
  return 1;
}

