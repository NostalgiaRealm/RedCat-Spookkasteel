/*
 * FUN_00539130 at 00539130
 * undefined FUN_00539130(void)
 * Address ranges: 00539130-0053942f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_00539130(int param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6,
            float param_7,float param_8,float param_9,float *param_10,float param_11,
            undefined4 *param_12,undefined4 param_13,int param_14)

{
  float fVar1;
  int iVar2;
  float fStack_68;
  undefined1 *puStack_64;
  undefined4 *local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063bc68;
  local_c = ExceptionList;
  fVar1 = *param_3;
  local_40 = param_14;
  ExceptionList = &local_c;
  if (param_14 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_14 + 0x14) = *(int *)(param_14 + 0x14) + 1;
  }
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  local_50 = (float)param_10;
  local_4c = param_11;
  local_48 = param_12;
  local_44 = param_13;
  local_60 = param_6;
  local_5c = param_7;
  local_58 = param_8;
  local_54 = param_9;
  puStack_64 = (undefined1 *)param_5;
  param_10 = &fStack_68;
  fStack_68 = param_9;
  FUN_00449760(&param_4);
  local_4._0_1_ = 1;
  FUN_00537c10(param_2,param_3);
  fVar1 = ((*param_3 - fVar1) - 0.016666668) * 0.5 + fVar1;
  if (param_14 != 0) {
    iVar2 = 0;
    param_2 = 0;
    if (-1 < *(int *)(param_1 + 0x48)) {
      do {
        if (iVar2 == *(int *)(param_1 + 0x4c)) {
          param_2 = iVar2;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= *(int *)(param_1 + 0x48));
    }
    local_5c = fVar1 + 0.008333334;
    local_10 = 0x98;
    local_4c = local_5c + 0.016666668;
    local_1c = 0x3d;
    local_14 = 0x98;
    if (*(char *)(param_1 + 0x28) == '\0') {
      local_10 = 0xbd;
      local_14 = 0xbd;
    }
    if ((char)param_5 != '\0') {
      local_10 = 0xa2;
      local_14 = 0xa2;
    }
    local_40 = 0;
    local_48 = &local_1c;
    local_44 = 0x437f0000;
    local_10 = local_10 + 8;
    local_18 = 0xbe;
    local_58 = 0.53125;
    param_6 = &local_5c;
    local_54 = 0.73125;
    local_60 = &param_14;
    puStack_64 = (undefined1 *)0x5392dc;
    param_10 = (float *)(iVar2 + -1);
    local_50 = local_5c;
    FUN_00449760();
    local_4._0_1_ = 1;
    local_60 = (undefined4 *)0x5392e6;
    FUN_00454200();
    local_60 = (undefined4 *)0x5392ed;
    FUN_005614e0();
    local_58 = 0.0;
    if ((undefined1 *)(iVar2 + -1) != (undefined1 *)0x0) {
      local_58 = (((float)param_2 / (float)(int)param_10) * 112.0 + 4.0) * 0.0015625;
    }
    local_58 = local_58 + 0.53125;
    local_18 = 0x7a;
    local_1c = 0x7a;
    local_54 = local_58 + 0.0125;
    local_14 = 0xac;
    local_4c = fVar1 + 0.03125;
    if (*(char *)(param_1 + 0x28) == '\0') {
      local_18 = 0x90;
      local_1c = 0x90;
    }
    if ((char)param_5 != '\0') {
      local_18 = 0x85;
      local_1c = 0x85;
    }
    local_40 = 0;
    local_48 = &local_1c;
    local_44 = 0x437f0000;
    local_18 = local_18 + 8;
    local_10 = 0xbb;
    local_60 = &param_14;
    puStack_64 = (undefined1 *)0x5393bb;
    param_5 = &local_5c;
    local_5c = fVar1;
    local_50 = fVar1;
    FUN_00449760();
    local_4._0_1_ = 1;
    local_60 = (undefined4 *)0x5393c5;
    FUN_00454200();
    local_60 = (undefined4 *)0x5393cc;
    FUN_005614e0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_4 != 0) {
    iVar2 = *(int *)(param_4 + 0x14) + -1;
    *(int *)(param_4 + 0x14) = iVar2;
    if (iVar2 == 0) {
      local_40 = 0;
      local_44 = 0x5393f1;
      FUN_005abfc0();
    }
    param_4 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_14 != 0) &&
     (iVar2 = *(int *)(param_14 + 0x14) + -1, *(int *)(param_14 + 0x14) = iVar2, iVar2 == 0)) {
    local_40 = 0;
    local_44 = 0x53941c;
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

