/*
 * FUN_10014c50 at 10014c50
 * undefined FUN_10014c50(void)
 * Address ranges: 10014c50-10014cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10014c50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) < 1) {
    if (*(int *)(param_1 + 0xc) != 1) {
      if (*(int *)(param_1 + 0xc) == 2) {
        if (*(int *)(param_1 + 0x1c) != 0) {
          FUN_1001bb60();
        }
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      return 1;
    }
    uVar1 = 0xd5;
  }
  else {
    uVar1 = 0xcc;
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_motion_c_1003a644,uVar1,&DAT_10265ce0,0);
  return 0;
}

