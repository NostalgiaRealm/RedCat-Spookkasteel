/*
 * FUN_004abe10 at 004abe10
 * undefined FUN_004abe10(void)
 * Address ranges: 004abe10-004abf64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_004abe10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e08b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aaed0(param_2,param_3,param_4,param_5,param_6);
  uVar1 = *param_7;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1e) = uVar1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  local_4 = 0;
  FUN_0040cc00(param_7,0,0xffffffff);
  uVar4 = 0xffffffff;
  *param_1 = &PTR_FUN_0064e9d4;
  param_1[0x22] = 0xffffffff;
  local_4._0_1_ = 1;
  if (param_1[0x20] == 0) {
    local_1c[0] = (undefined1)param_6;
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
      *(undefined1 *)(uVar4 + (int)local_18) = 0;
      local_14 = uVar4;
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar3 = (code *)FUN_005a07f0(s_m_SoundFileName_length___>_0_0069614c,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069616c,0x10,local_1c);
    (*pcVar3)();
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
        ExceptionList = local_c;
        return param_1;
      }
      FUN_005fe5f0((char *)((int)local_18 + -1));
    }
  }
  ExceptionList = local_c;
  return param_1;
}

