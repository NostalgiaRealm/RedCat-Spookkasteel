/*
 * FUN_0053a420 at 0053a420
 * undefined FUN_0053a420(void)
 * Address ranges: 0053a420-0053a556
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0053a420(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_38 [4];
  undefined4 *local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **local_28 [5];
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bdf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ab4a0();
  local_4 = 0;
  local_14 = param_2;
  local_10 = 0;
  local_28[0] = &PTR_FUN_0064f790;
  if (param_2 == 0) {
    local_38[0] = 0;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_34;
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
      FUN_00404190(uVar3);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    pcVar2 = (code *)FUN_005a07f0(s_a_Menu__0_006a1024,s_D__Work_RCHorror_AdamSource_Adam_006a1030,
                                  0x14,local_38);
    (*pcVar2)();
    if (local_34 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_34 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_34 + -1));
      }
      else {
        *(char *)((int)local_34 + -1) = cVar1 + -1;
      }
    }
    local_34 = (undefined4 *)0x0;
    uStack_30 = 0;
    uStack_2c = 0;
  }
  local_4 = 2;
  FUN_0053b940(*(undefined4 *)(param_1 + 0x1c),1,local_28);
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

