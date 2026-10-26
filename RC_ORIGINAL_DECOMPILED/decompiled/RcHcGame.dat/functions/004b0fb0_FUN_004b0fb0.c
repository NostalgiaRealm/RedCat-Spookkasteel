/*
 * FUN_004b0fb0 at 004b0fb0
 * undefined FUN_004b0fb0(void)
 * Address ranges: 004b0fb0-004b1141
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004b0fb0(undefined4 param_1)

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
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e760;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006c8de0;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_0055b280();
  }
  if (*(char *)(iVar2 + 0x194) == '\0') {
    local_2c[0] = (undefined1)param_1;
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    local_20 = 0;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_28;
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
      FUN_00404190(uVar5);
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_CAdamEngine__Instance___GetInFra_00696adc,
                                  s_D__Work_RCHorror_AdamSource_Adam_00696748,0xc5,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
      }
    }
  }
  uVar12 = 0;
  puVar4 = &stack0x00000018;
  uVar11 = 0;
  puVar10 = &stack0x00000008;
  FUN_004b0230(puVar10,puVar4,0,0);
  iVar2 = FUN_005bf0a0(puVar10,puVar4,uVar11,uVar12);
  if (iVar2 == 0) {
    iVar2 = FUN_0059bd20();
    puVar4 = *(undefined1 **)(iVar2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar11 = FUN_005ae390(auStack_1c,s_CAdamFont__PrintText____Couldn_t_00696a90,param_1,puVar4);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_00696748,0xce
                                  ,uVar11);
    (*pcVar3)();
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}

