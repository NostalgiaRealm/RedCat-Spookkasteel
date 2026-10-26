/*
 * FUN_0050a6c0 at 0050a6c0
 * undefined FUN_0050a6c0(void)
 * Address ranges: 0050a6c0-0050a7d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0050a6c0(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636721;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ab4a0();
  *param_1 = &PTR_FUN_0064e794;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_4 = 0;
  uVar1 = *param_2;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 7) = uVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  param_1[0xb] = param_3;
  *(undefined1 *)(param_1 + 0xc) = param_2._0_1_;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = &LAB_00566630;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  local_4._0_1_ = 3;
  *param_1 = &PTR_FUN_0064f534;
  if (param_3 == 0) {
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_Cannot_construct_bitmap__s_witho_0069e580,puVar3);
    local_4._0_1_ = 4;
    pcVar5 = (code *)FUN_005a07f0(s_a_Bitmap__NULL_0069e544,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x12,uVar4);
    (*pcVar5)();
    local_4._0_1_ = 3;
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
      }
    }
  }
  FUN_0050bf90();
  ExceptionList = pvStack_c;
  return param_1;
}

