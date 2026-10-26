/*
 * FUN_004aaed0 at 004aaed0
 * undefined FUN_004aaed0(void)
 * Address ranges: 004aaed0-004ab010
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_004aaed0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

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
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062df90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004ad7d0(param_3);
  param_1[0x15] = param_4;
  param_1[0x19] = param_5;
  uVar3 = 0xffffffff;
  local_4 = 0;
  param_1[0x14] = 8;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = param_6;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_2;
  *param_1 = &PTR_FUN_0064e974;
  if (param_6 == 0) {
    local_1c[0] = (undefined1)param_3;
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
      *(undefined1 *)(uVar3 + (int)local_18) = 0;
      local_14 = uVar3;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    pcVar2 = (code *)FUN_005a07f0(s_m_Communicator____0_006934bc,
                                  s_D__Work_RCHorror_AdamSource_Adam_00695fbc,0x18,local_1c);
    (*pcVar2)();
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return param_1;
      }
      FUN_005fe5f0((char *)((int)local_18 + -1));
    }
  }
  ExceptionList = local_c;
  return param_1;
}

