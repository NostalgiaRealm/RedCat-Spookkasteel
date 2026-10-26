/*
 * FUN_10016ac0 at 10016ac0
 * undefined FUN_10016ac0(void)
 * Address ranges: 10016ac0-10016b74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10016ac0(int param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  int local_4;
  
  local_4 = param_1;
  if (param_1 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x32f,&DAT_10265ce0,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x335,&DAT_10265ce0,0);
    return 0;
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    return *(undefined4 *)(param_1 + 0x28);
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0xa8) + 0x3c))(&local_4);
  if (iVar1 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x33e,&DAT_10265ce0,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = 1;
  return unaff_ESI;
}

