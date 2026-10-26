/*
 * FUN_004d23d0 at 004d23d0
 * undefined FUN_004d23d0(void)
 * Address ranges: 004d23d0-004d27df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d23d0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  float local_2c;
  float local_28;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631528;
  local_c = ExceptionList;
  fVar2 = (float)param_3 * 0.001;
  local_2c = *(float *)(param_1 + 0x140);
  ExceptionList = &local_c;
  fVar4 = (float10)FUN_004d0710();
  local_28 = (float)fVar4;
  switch(*(undefined4 *)(param_1 + 0x170)) {
  case 0:
    if (*(float *)(param_1 + 0x13c) <= local_28) {
      FUN_00502350(0);
    }
    local_2c = local_28 + fVar2;
    if (*(float *)(param_1 + 0x13c) < local_2c) {
      local_2c = *(float *)(param_1 + 0x13c);
    }
    break;
  case 1:
    if (fVar2 == 0.0) {
      local_2c = local_28;
    }
    while (0.0 < fVar2) {
      local_2c = fVar2 + local_28;
      if (local_2c <= *(float *)(param_1 + 0x13c)) {
        FUN_004d1740(local_28,local_2c);
        break;
      }
      FUN_004d1740(local_28,*(float *)(param_1 + 0x13c));
      local_28 = *(float *)(param_1 + 0x140);
      fVar2 = local_2c - *(float *)(param_1 + 0x13c);
      local_2c = local_28;
    }
    goto LAB_004d26fc;
  case 2:
    if (fVar2 == 0.0) {
      local_2c = local_28;
    }
    while (0.0 < fVar2) {
      if (*(char *)(param_1 + 0x16c) == '\0') {
        local_2c = fVar2 + local_28;
        if (local_2c <= *(float *)(param_1 + 0x13c)) goto LAB_004d24ea;
        FUN_004d1740(local_28,*(float *)(param_1 + 0x13c));
        fVar2 = local_2c - *(float *)(param_1 + 0x13c);
        local_28 = *(float *)(param_1 + 0x13c);
        *(bool *)(param_1 + 0x16c) = *(char *)(param_1 + 0x16c) == '\0';
        local_2c = local_28;
      }
      else {
        local_2c = local_28 - fVar2;
        if (*(float *)(param_1 + 0x140) <= local_2c) {
          FUN_004d1740(local_2c,local_28);
          break;
        }
        FUN_004d1740(*(float *)(param_1 + 0x140),local_28);
        fVar2 = *(float *)(param_1 + 0x140) - local_2c;
        local_28 = *(float *)(param_1 + 0x140);
        *(bool *)(param_1 + 0x16c) = *(char *)(param_1 + 0x16c) == '\0';
        local_2c = local_28;
      }
    }
    goto LAB_004d26fc;
  case 3:
    if (*(float *)(param_1 + 0x174) < 0.0) {
      ExceptionList = local_c;
      return;
    }
    if (*(char *)(param_1 + 0x16d) == '\0') {
      if (*(char *)(param_1 + 0x16c) == '\0') {
        local_2c = local_28 + fVar2;
        if (*(float *)(param_1 + 0x174) < local_2c) {
          local_2c = *(float *)(param_1 + 0x174);
          *(undefined4 *)(param_1 + 0x174) = 0xbf800000;
        }
LAB_004d24ea:
        FUN_004d1740(local_28,local_2c);
      }
      else {
        local_2c = local_28 - fVar2;
        if (local_2c < *(float *)(param_1 + 0x174)) {
          local_2c = *(float *)(param_1 + 0x174);
          *(undefined4 *)(param_1 + 0x174) = 0xbf800000;
        }
        FUN_004d1740(local_2c,local_28);
      }
      goto LAB_004d26fc;
    }
    local_2c = *(float *)(param_1 + 0x174);
    *(undefined4 *)(param_1 + 0x174) = 0xbf800000;
    break;
  default:
    uVar3 = FUN_005ae390(local_1c,s_Invalid_RepeatMode__d_for_ModelC_006993f0,
                         *(undefined4 *)(param_1 + 0x170));
    local_4 = 0;
    FUN_005035a0(uVar3);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_00502350(0);
    ExceptionList = local_c;
    return;
  }
  FUN_004d1740(local_28,local_2c);
LAB_004d26fc:
  fVar4 = (float10)FUN_004d0710();
  if (fVar4 == (float10)local_2c) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x168) + 0x1c) == 0) {
    FUN_004d0770(local_2c);
    ExceptionList = local_c;
    return;
  }
  FUN_004d0a90(local_2c,param_3);
  ExceptionList = local_c;
  return;
}

