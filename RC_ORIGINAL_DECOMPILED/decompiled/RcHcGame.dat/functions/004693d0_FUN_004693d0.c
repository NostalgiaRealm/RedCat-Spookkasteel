/*
 * FUN_004693d0 at 004693d0
 * undefined FUN_004693d0(void)
 * Address ranges: 004693d0-00469764
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004693d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  int iStack_b4;
  int local_b0;
  undefined1 auStack_ac [12];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int iStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [12];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x460) == '\0') {
    FUN_00502350(0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x10c);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = param_1 + 0x100;
      goto LAB_00469441;
    }
    if (iVar2 == 2) {
      iVar2 = param_1 + 0x104;
      goto LAB_00469441;
    }
  }
  iVar2 = param_1 + 0xfc;
LAB_00469441:
  cVar1 = FUN_00469330(param_3,iVar2);
  if ((cVar1 != '\0') &&
     (iVar2 = *(int *)(param_1 + 0x10c) + 1, *(int *)(param_1 + 0x10c) = iVar2, 2 < iVar2)) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  pfVar3 = (float *)(param_1 + 0x3f8);
  pfVar5 = (float *)(param_1 + 0x128);
  local_b0 = 5;
  do {
    (**(code **)((int)pfVar3[-1] + 4))(param_2,param_3);
    pfVar4 = (float *)(param_1 + 0x110);
    fStack_60 = *pfVar3;
    fStack_5c = pfVar3[1];
    fStack_58 = pfVar3[2];
    FUN_005b2fe0(auStack_ac);
    fStack_84 = *pfVar4;
    fStack_80 = *(float *)(param_1 + 0x114) + 100.0;
    uStack_7c = *(undefined4 *)(param_1 + 0x118);
    FUN_005b2fe0(auStack_18);
    fVar6 = (float10)FUN_005b2e40();
    FUN_005b2fa0((float)fVar6);
    FUN_005b2fe0(auStack_c);
    FUN_005b2f20();
    FUN_005b2f20();
    FUN_005b2e60(auStack_78);
    FUN_005b2f20();
    FUN_005b2fa0(*(undefined4 *)(param_1 + 0x120));
    FUN_005b2fa0(*(float *)(param_1 + 0x120) * 0.25);
    fStack_30 = *pfVar3;
    fStack_2c = pfVar3[1];
    fStack_28 = pfVar3[2];
    iStack_b4 = 4;
    pfVar5[-1] = fStack_30 - fStack_a0;
    fStack_48 = *pfVar3;
    fStack_44 = pfVar3[1];
    fStack_40 = pfVar3[2];
    *pfVar5 = fStack_44 - fStack_9c;
    fStack_24 = *pfVar3;
    fStack_20 = pfVar3[1];
    fStack_1c = pfVar3[2];
    pfVar5[1] = fStack_1c - fStack_98;
    fStack_6c = *pfVar3;
    fStack_68 = pfVar3[1];
    fStack_64 = pfVar3[2];
    pfVar5[8] = fStack_6c + fStack_a0;
    fStack_54 = *pfVar3;
    fStack_50 = pfVar3[1];
    fStack_4c = pfVar3[2];
    pfVar5[9] = fStack_50 + fStack_9c;
    fStack_3c = *pfVar3;
    fStack_38 = pfVar3[1];
    fStack_34 = pfVar3[2];
    pfVar5[10] = fStack_34 + fStack_98;
    pfVar5[0x11] = fStack_94 + *pfVar4;
    pfVar5[0x12] = fStack_90 + *(float *)(param_1 + 0x114);
    pfVar5[0x13] = fStack_8c + *(float *)(param_1 + 0x118);
    pfVar5[0x1a] = *pfVar4 - fStack_94;
    pfVar5[0x1b] = *(float *)(param_1 + 0x114) - fStack_90;
    pfVar5[0x1c] = *(float *)(param_1 + 0x118) - fStack_8c;
    pfVar4 = pfVar5 + 5;
    do {
      pfVar4[-1] = *(float *)(param_1 + 0xfc);
      *pfVar4 = *(float *)(param_1 + 0x100);
      pfVar4[1] = *(float *)(param_1 + 0x104);
      iStack_88 = FUN_005995d0();
      iStack_b4 = iStack_b4 + -1;
      pfVar4[2] = (float)iStack_88;
      pfVar4 = pfVar4 + 9;
    } while (iStack_b4 != 0);
    pfVar3 = pfVar3 + 0x51;
    pfVar5 = pfVar5 + 0x24;
    local_b0 = local_b0 + -1;
  } while (local_b0 != 0);
  FUN_0046a010(param_2,param_3);
  return;
}

