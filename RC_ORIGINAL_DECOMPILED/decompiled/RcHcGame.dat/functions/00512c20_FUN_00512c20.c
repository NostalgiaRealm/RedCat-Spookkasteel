/*
 * FUN_00512c20 at 00512c20
 * undefined FUN_00512c20(void)
 * Address ranges: 00512c20-00512d7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00512c20(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int local_24;
  void *local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637743;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00511940(param_2);
  if (iVar2 < 0) {
    local_20 = operator_new(0x54);
    local_4 = 0;
    if (local_20 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_0050dc00(param_2,0);
    }
    uVar4 = 0xffffffff;
    local_4 = 0xffffffff;
    if (local_24 == 0) {
      local_1c[0] = (undefined1)param_2;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      local_18 = (undefined4 *)0x0;
      local_14 = 0;
      local_10 = 0;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        puVar8 = local_18;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        *(undefined1 *)((int)local_18 + uVar4) = 0;
        local_14 = uVar4;
      }
      local_4 = 1;
      pcVar3 = (code *)FUN_005a07f0(s_message____0_0069ef38,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x2f2,local_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      if (local_18 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)((int)local_18 + -1));
        }
        else {
          *(char *)((int)local_18 + -1) = cVar1 + -1;
        }
      }
      local_18 = (undefined4 *)0x0;
      local_14 = 0;
      local_10 = 0;
    }
    FUN_0053cff0(*(undefined4 *)(param_1 + 400),1,&local_24);
  }
  FUN_005119e0(param_2);
  ExceptionList = pvStack_c;
  return;
}

