/*
 * FUN_00423f40 at 00423f40
 * undefined FUN_00423f40(void)
 * Address ranges: 00423f40-00424067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00423f40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00622688;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  if (cVar1 == '\0') {
    auStack_1c[0] = (undefined1)param_2;
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    puStack_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = puStack_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)puStack_18 + uVar3) = 0;
      uStack_14 = uVar3;
    }
    uStack_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_HasActor___0068f8fc,s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,
                                  0x275,auStack_1c);
    (*pcVar2)();
    uStack_4 = 0xffffffff;
    if (puStack_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_18 + -1));
      }
      else {
        *(char *)((int)puStack_18 + -1) = cVar1 + -1;
      }
    }
    puStack_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  cVar1 = FUN_00424420();
  if (cVar1 == '\0') {
    cVar1 = FUN_00422f30(param_2);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x70))(param_3);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

