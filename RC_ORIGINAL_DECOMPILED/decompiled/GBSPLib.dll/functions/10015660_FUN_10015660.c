/*
 * FUN_10015660 at 10015660
 * undefined FUN_10015660(void)
 * Address ranges: 10015660-10015873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10015660(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0x18) != 0;
  iVar1 = FUN_10014a60(param_2,s__s__d_1003a6b8,s_PathCount_1003a688,*(undefined4 *)(param_1 + 0x10)
                      );
  if (iVar1 == 0) {
    FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x6ba,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10014a60(param_2,s__s__d_1003a6b8,s_NameChecksum_1003a678,
                       *(undefined4 *)(param_1 + 0x14));
  if (iVar1 == 0) {
    FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x6bf,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10014a60(param_2,s__s__d_1003a6b8,s_Events_1003a670,bVar3);
  if (iVar1 == 0) {
    FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x6c5,&DAT_10265ce0,0);
    return 0;
  }
  if (bVar3) {
    iVar1 = FUN_1001ca90();
    if (iVar1 == 0) {
      FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x6cd,&DAT_10265ce0,0);
      return 0;
    }
  }
  bVar3 = *(int *)(param_1 + 0x1c) != 0;
  iVar1 = FUN_10014a60(param_2,s__s__d_1003a6b8,s_NameArray_1003a664,bVar3);
  if (iVar1 == 0) {
    FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x6d8,&DAT_10265ce0,0);
    return 0;
  }
  if (bVar3) {
    iVar1 = FUN_1001bfe0();
    if (iVar1 == 0) {
      FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x6df,&DAT_10265ce0,0);
      return 0;
    }
  }
  iVar1 = FUN_10014a60(param_2,s__s__d_1003a6b8,s_PathArray_1003a658,*(undefined4 *)(param_1 + 0x10)
                      );
  if (iVar1 == 0) {
    FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x6e6,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar2 = FUN_1001db70();
      if (iVar2 == 0) {
        FUN_10015fb0(0x48,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x6ed,&DAT_10265ce0,0);
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
  return 1;
}

