/*
 * FUN_005a6340 at 005a6340
 * undefined FUN_005a6340(void)
 * Address ranges: 005a6340-005a6438
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a6340(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Davi_006a8128,0xb0);
  local_4 = 0;
  if (-1 < *param_1) {
    FUN_005a64f0(4,0x11);
    FUN_005a64f0(5,0x12);
    FUN_005a64f0(6,0x20);
    FUN_005a64f0(7,0xd);
    FUN_005a64f0(8,0);
    FUN_005a64f0(9,0);
    FUN_005a64f0(10,0);
    FUN_005a64f0(0xb,0);
    FUN_005a64f0(0xc,0);
    FUN_005a64f0(0xd,0);
    FUN_005a64f0(0,0x25);
    FUN_005a64f0(2,0x26);
    FUN_005a64f0(1,0x27);
    FUN_005a64f0(3,0x28);
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

