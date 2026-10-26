/*
 * FUN_10025540 at 10025540
 * undefined FUN_10025540(void)
 * Address ranges: 10025540-1002566b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10025540(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_84;
  undefined1 local_80 [128];
  
  iVar1 = FUN_10014a00(4);
  if (iVar1 == 0) {
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x247,&DAT_10265ce0,0);
    return 0;
  }
  if (local_84 != 0x51464b51) {
    FUN_10015fb0(0x3e,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x24d,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_100149e0(0x80);
  if (iVar1 == 0) {
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x253,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_1002836b(local_80,s__f__f__f__f__f__f__f__f_1003c958,param_2 + 4,param_2 + 8,
                       param_2 + 0xc,param_2 + 0x10,param_2 + 0x14,param_2 + 0x18,param_2 + 0x1c,
                       param_2 + 0x20);
  if (iVar1 != 8) {
    FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_QKFrame_c_1003c934,0x25f,&DAT_10265ce0,0);
    return 0;
  }
  return 1;
}

