/*
 * FUN_00556220 at 00556220
 * undefined FUN_00556220(void)
 * Address ranges: 00556220-005563f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00556220(int param_1,float param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float local_124;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined1 local_11c [4];
  int iStack_118;
  undefined4 auStack_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e6fb;
  pvStack_c = ExceptionList;
  if ((param_2 < 0.0) || (ExceptionList = &pvStack_c, 100.0 < param_2)) {
    ExceptionList = &pvStack_c;
    uVar2 = FUN_005ae390(local_11c,s_CAdamCamera__SetRenderRectPercen_006a2304,(double)param_2);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_RenderRectPercentage_>__0____a_006a22c4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a2194,0xb3,uVar2);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (iStack_118 != 0) {
      cVar1 = *(char *)(iStack_118 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_118 + -1));
      }
      else {
        *(char *)(iStack_118 + -1) = cVar1 + -1;
      }
    }
  }
  local_124 = param_2;
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(char *)(iVar4 + 0x122) != '\0') {
    local_124 = 100.0;
  }
  if (*(float *)(param_1 + 0x114) == 0.0) {
    fVar6 = (float10)FUN_005ad390(param_1 + 200,&uStack_11e);
    *(float *)(param_1 + 0x114) = (float)fVar6;
  }
  else {
    fVar6 = (float10)*(float *)(param_1 + 0x114);
  }
  if (fVar6 != (float10)local_124) {
    puVar5 = auStack_10c;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    FUN_0060af1b(auStack_10c,0xff,&DAT_0069081c,(double)local_124);
    FUN_005acdb0(auStack_10c);
    FUN_00556150(param_1 + 0x18c);
    if (*(float *)(param_1 + 0xa0) == 0.0) {
      fVar6 = (float10)FUN_005ad390(param_1 + 0x54,&uStack_11d);
      *(float *)(param_1 + 0xa0) = (float)fVar6;
      local_124 = (float)fVar6;
    }
    else {
      local_124 = *(float *)(param_1 + 0xa0);
    }
    FUN_00556570(local_124);
    FUN_005c9070(local_124);
  }
  ExceptionList = pvStack_c;
  return;
}

