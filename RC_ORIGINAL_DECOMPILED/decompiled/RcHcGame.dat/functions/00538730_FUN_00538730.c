/*
 * FUN_00538730 at 00538730
 * undefined FUN_00538730(void)
 * Address ranges: 00538730-0053886c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00538730(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5)

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
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bb8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00537a20(param_2,param_3,0);
  param_1[0x10] = param_4;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x11) = *param_5;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_0040cc00(param_5,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(param_1 + 0x15) = 0;
  *param_1 = &PTR_FUN_0064f730;
  if (param_1[0x10] == 0) {
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
      FUN_00404190(uVar3);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar2 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0xa7,local_1c);
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
  *(undefined1 *)(param_1 + 10) = 0;
  ExceptionList = local_c;
  return param_1;
}

