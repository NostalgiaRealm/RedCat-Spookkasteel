/*
 * FUN_1001d340 at 1001d340
 * undefined FUN_1001d340(void)
 * Address ranges: 1001d340-1001d6df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1001d340(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_104;
  undefined1 local_100 [6];
  undefined1 local_fa [2];
  undefined1 local_f8 [3];
  undefined1 local_f5 [245];
  
  iVar1 = FUN_1001cc70(0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  iVar2 = FUN_100149e0(0x100);
  if (iVar2 == 0) {
    FUN_1001cd40();
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x4e7,&DAT_10265ce0,0);
    return 0;
  }
  iVar2 = FUN_10033390(local_100,s_Looped_1003c7d4,6);
  if (iVar2 != 0) {
    FUN_1001cd40();
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x4e9,&DAT_10265ce0,0);
    return 0;
  }
  iVar2 = FUN_1002836b(local_fa,&DAT_1003a694,&local_104);
  if (iVar2 != 1) {
    FUN_1001cd40();
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x4ec,&DAT_10265ce0,0);
    return 0;
  }
  if (local_104 == 1) {
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 2;
  }
  iVar2 = FUN_100149e0(0x100);
  if (iVar2 != 0) {
    FUN_1001cd40();
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x4f4,&DAT_10265ce0,0);
    return 0;
  }
  iVar2 = FUN_10033390(local_100,s_Rotation_1003c7c8,8);
  if (iVar2 != 0) {
    FUN_1001cd40();
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x4f6,&DAT_10265ce0,0);
    return 0;
  }
  iVar2 = FUN_1002836b(local_f8,&DAT_1003a694,&local_104);
  if (iVar2 != 1) {
    FUN_1001cd40();
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x4f9,&DAT_10265ce0,0);
    return 0;
  }
  if (local_104 != 0) {
    iVar2 = FUN_1001ce90(param_1);
    if (iVar2 == 0) {
      FUN_1001cd40();
      FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x4fd,&DAT_10265ce0,0);
      return 0;
    }
  }
  iVar2 = FUN_100149e0(0x100);
  if (iVar2 == 0) {
    FUN_1001cd40();
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x500,&DAT_10265ce0,0);
    return 0;
  }
  iVar2 = FUN_10033390(local_100,s_Translation_1003c7bc,0xb);
  if (iVar2 != 0) {
    FUN_1001cd40();
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x502,&DAT_10265ce0,0);
    return 0;
  }
  iVar2 = FUN_1002836b(local_f5,&DAT_1003a694,&local_104);
  if (iVar2 != 1) {
    FUN_1001cd40();
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x504,&DAT_10265ce0,0);
    return 0;
  }
  if (local_104 != 0) {
    iVar2 = FUN_1001ce90(param_1);
    if (iVar2 == 0) {
      FUN_1001cd40();
      FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,0x508,&DAT_10265ce0,0);
      return 0;
    }
  }
  *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 1;
  return iVar1;
}

