/*
 * FUN_004c9dc0 at 004c9dc0
 * undefined FUN_004c9dc0(void)
 * Address ranges: 004c9dc0-004ca038
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004c9f55) */

void FUN_004c9dc0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  char local_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630ae0;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    local_2c[0] = param_2;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  fVar10 = (float10)FUN_004c4290();
  __ftol();
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  FUN_004c4130();
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  fVar11 = (float10)FUN_004c4290();
  iVar2 = FUN_005ae390(auStack_1c,s_ClockSpeed__f__>__f_00698c44,(double)(float)fVar10,
                       (double)fVar11);
  uVar5 = *(uint *)(iVar2 + 8);
  local_4 = 1;
  if (param_1 == iVar2) {
    FUN_0040c9b0(uVar5,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar5 != 0) {
      puVar4 = *(undefined1 **)(iVar2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0();
        puVar4 = *(undefined1 **)(iVar2 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 4) = puVar4;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004c9ff4;
      }
    }
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = *(undefined4 **)(iVar2 + 4);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar9 = *(undefined4 **)(param_1 + 4);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(uint *)(param_1 + 8) = uVar5;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar5) = 0;
    }
  }
LAB_004c9ff4:
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}

