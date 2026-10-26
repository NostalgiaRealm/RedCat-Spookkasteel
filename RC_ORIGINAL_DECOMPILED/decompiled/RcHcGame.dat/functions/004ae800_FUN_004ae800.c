/*
 * FUN_004ae800 at 004ae800
 * undefined FUN_004ae800(void)
 * Address ranges: 004ae800-004ae940
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004ae800(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e3e8;
  pvStack_c = ExceptionList;
  if ((param_4 < 0) || (ExceptionList = &pvStack_c, param_5 < 0)) {
    local_1c[0] = (undefined1)param_4;
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
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
      *(undefined1 *)((int)local_18 + uVar5) = 0;
      local_14 = uVar5;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s__a_RadiusMin_>__0______a_RadiusM_006965c4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006965f0,0x5b,local_1c);
    (*pcVar2)();
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x88) = param_2;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_0060b25d(*(int *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  puVar3 = *(undefined1 **)(param_3 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  uVar4 = FUN_0061f613(puVar3);
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  *(int *)(param_1 + 0x78) = param_4;
  *(int *)(param_1 + 0x7c) = param_5;
  *(undefined4 *)(param_1 + 0x80) = param_6;
  ExceptionList = pvStack_c;
  return;
}

