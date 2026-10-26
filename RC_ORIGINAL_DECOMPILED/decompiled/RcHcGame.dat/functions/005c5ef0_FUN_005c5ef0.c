/*
 * FUN_005c5ef0 at 005c5ef0
 * undefined FUN_005c5ef0(void)
 * Address ranges: 005c5ef0-005c628f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005c5ef0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_104;
  undefined1 local_100 [6];
  undefined1 local_fa [2];
  undefined1 local_f8 [3];
  undefined1 local_f5 [245];
  
  iVar1 = FUN_005c5420(0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  iVar2 = FUN_005cd370(0x100);
  if (iVar2 == 0) {
    FUN_005c54f0();
    FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x4eb,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar2 = FUN_0060d260(local_100,s_Looped_006a98f8,6);
  if (iVar2 != 0) {
    FUN_005c54f0();
    FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x4ed,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar2 = FUN_0060b449(local_fa,&DAT_00690818,&local_104);
  if (iVar2 != 1) {
    FUN_005c54f0();
    FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x4f0,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (local_104 == 1) {
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 2;
  }
  iVar2 = FUN_005cd370(0x100);
  if (iVar2 != 0) {
    FUN_005c54f0();
    FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x4f8,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar2 = FUN_0060d260(local_100,s_Rotation_006a98ec,8);
  if (iVar2 != 0) {
    FUN_005c54f0();
    FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x4fa,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar2 = FUN_0060b449(local_f8,&DAT_00690818,&local_104);
  if (iVar2 != 1) {
    FUN_005c54f0();
    FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x4fd,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (local_104 != 0) {
    iVar2 = FUN_005c5a40(param_1);
    if (iVar2 == 0) {
      FUN_005c54f0();
      FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x501,
                   &DAT_006b3f70,0);
      return 0;
    }
  }
  iVar2 = FUN_005cd370(0x100);
  if (iVar2 == 0) {
    FUN_005c54f0();
    FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x504,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar2 = FUN_0060d260(local_100,s_Translation_006a98e0,0xb);
  if (iVar2 != 0) {
    FUN_005c54f0();
    FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x506,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar2 = FUN_0060b449(local_f5,&DAT_00690818,&local_104);
  if (iVar2 != 1) {
    FUN_005c54f0();
    FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x508,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (local_104 != 0) {
    iVar2 = FUN_005c5a40(param_1);
    if (iVar2 == 0) {
      FUN_005c54f0();
      FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x50c,
                   &DAT_006b3f70,0);
      return 0;
    }
  }
  *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 1;
  return iVar1;
}

