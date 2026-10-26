/*
 * FUN_10015af0 at 10015af0
 * undefined FUN_10015af0(void)
 * Address ranges: 10015af0-10015ca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10015af0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  undefined4 local_8;
  byte local_4;
  
  iVar1 = FUN_10014df0();
  if (iVar1 == 0) {
    FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x75d,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10014a00(0xc);
  if (iVar1 == 0) {
    FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x763,&DAT_10265ce0,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x14) = local_8;
  if ((local_4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    iVar1 = FUN_1001c240();
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 0) {
      FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x76d,&DAT_10265ce0,0);
      return 0;
    }
  }
  if ((local_4 & 2) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    iVar1 = FUN_1001bce0();
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x77b,&DAT_10265ce0,0);
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar1 = FUN_10014310(local_c * 4);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    FUN_10015fb0(0x41,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x789,&DAT_10265ce0,0);
  }
  else {
    iVar1 = 0;
    if (0 < local_c) {
      do {
        uVar2 = FUN_1001d6e0();
        *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 * 4) = uVar2;
        if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4) == 0) {
          FUN_10015fb0(0x47,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x792,&DAT_10265ce0,0);
          return 0;
        }
        iVar1 = iVar1 + 1;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      } while (iVar1 < local_c);
      return 1;
    }
  }
  return 1;
}

