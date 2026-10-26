/*
 * FUN_0050df00 at 0050df00
 * undefined FUN_0050df00(void)
 * Address ranges: 0050df00-0050e060
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_0050df00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636e48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 0x48) == '\0') {
    ExceptionList = &pvStack_c;
    FUN_0050dec0(param_3,param_4,param_5,param_6,param_7);
    if (*(char *)(param_1 + 0x48) == '\0') {
      local_1c[0] = (undefined1)param_3;
      uVar3 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      local_18 = (undefined4 *)0x0;
      local_14 = 0;
      local_10 = 0;
      cVar1 = FUN_00401940(uVar3,1);
      if (cVar1 != '\0') {
        puVar5 = (undefined4 *)&DAT_006b3f70;
        puVar7 = local_18;
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
        *(undefined1 *)((int)local_18 + uVar3) = 0;
        local_14 = uVar3;
      }
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_m_InitedChars_0069e9dc,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069e9ec,0x52,local_1c);
      (*pcVar2)();
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
  }
  FUN_004f0630(param_2,param_1 + 0x18,param_4,param_5,param_6,param_7,
               *(undefined4 *)(param_1 + 0x14));
  ExceptionList = pvStack_c;
  return;
}

