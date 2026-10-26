/*
 * FUN_100154d0 at 100154d0
 * undefined FUN_100154d0(void)
 * Address ranges: 100154d0-10015650
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100154d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_10014a20(4);
  if (iVar1 == 0) {
    FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x70c,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10014a60(param_2,s__X___2X_1003a6c8,0,0xf0);
  if (iVar1 == 0) {
    FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x715,&DAT_10265ce0,0);
    return 0;
  }
  puVar2 = (undefined1 *)*param_1;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_10265ce0;
  }
  iVar1 = FUN_10014a60(param_2,s__s__s_1003a6c0,s_NameID_1003a6a8,puVar2);
  if (iVar1 == 0) {
    FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x71b,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10014a60(param_2,s__s__d_1003a6b8,s_MaintainNames_1003a698,param_1[2]);
  if (iVar1 == 0) {
    FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x721,&DAT_10265ce0,0);
    return 0;
  }
  if (param_1[3] == 1) {
    iVar1 = FUN_10015880();
    if (iVar1 == 0) {
      FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x72c,&DAT_10265ce0,0);
      return 0;
    }
  }
  else if (param_1[3] == 2) {
    iVar1 = FUN_10015660();
    if (iVar1 == 0) {
      FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x733,&DAT_10265ce0,0);
      return 0;
    }
  }
  return 1;
}

