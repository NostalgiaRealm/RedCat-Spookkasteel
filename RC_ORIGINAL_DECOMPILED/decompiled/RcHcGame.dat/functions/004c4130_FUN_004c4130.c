/*
 * FUN_004c4130 at 004c4130
 * undefined FUN_004c4130(void)
 * Address ranges: 004c4130-004c4281
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004c4130(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined1 local_120 [4];
  undefined4 *local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int local_110;
  undefined4 auStack_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006303fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_110 = param_1;
  if (*(int *)(param_1 + 0x3a4) == 0) {
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_11c = (undefined4 *)0x0;
    local_118 = 0;
    local_114 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_11c;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar3);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Game____0_00698734,s_D__Work_RCHorror_AdamSource_Adam_006975f0
                                  ,0x6c4,local_120);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_11c != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_11c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)((int)local_11c + -1) = cVar1 + -1;
      }
    }
  }
  FUN_00565ae0();
  fVar9 = (float10)FUN_004c4290();
  puVar6 = auStack_10c;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,&DAT_0069081c,(double)fVar9);
  FUN_005acdb0();
  ExceptionList = pvStack_c;
  return;
}

