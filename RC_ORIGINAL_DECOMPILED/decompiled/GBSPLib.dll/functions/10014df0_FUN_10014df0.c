/*
 * FUN_10014df0 at 10014df0
 * undefined FUN_10014df0(void)
 * Address ranges: 10014df0-10014e4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10014df0(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(int *)(param_1 + 8) == 0) || (param_2 == 0)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    iVar1 = FUN_1001bb20();
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      FUN_10015fb0(0x41,&DAT_10265ce0,s___Actor_motion_c_1003a644,0x95,&DAT_10265ce0,0);
      return 0;
    }
  }
  return 1;
}

