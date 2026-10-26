/*
 * FUN_00580e90 at 00580e90
 * undefined FUN_00580e90(void)
 * Address ranges: 00580e90-0058102e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00580e90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064244a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  param_1[0x3e] = param_3;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = (undefined1)param_2;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 100) = (undefined1)param_2;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  local_4 = 3;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x71] = 0;
  *param_1 = &PTR_FUN_0064fc78;
  if (param_1[0x3e] == 0) {
    local_1c[0] = (undefined1)param_2;
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
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
      FUN_00404190(uVar4);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    pcVar3 = (code *)FUN_005a07f0(s_m_Entity____0_00697590,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a53d4,0x1c,local_1c);
    (*pcVar3)();
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
      }
    }
  }
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  iVar1 = param_1[0x3e];
  param_1[0x6e] = *(undefined4 *)(iVar1 + 8);
  param_1[0x6f] = *(undefined4 *)(iVar1 + 0xc);
  param_1[0x70] = *(undefined4 *)(iVar1 + 0x10);
  param_1[0x71] = *(undefined4 *)(iVar1 + 0x24);
  ExceptionList = local_c;
  return param_1;
}

