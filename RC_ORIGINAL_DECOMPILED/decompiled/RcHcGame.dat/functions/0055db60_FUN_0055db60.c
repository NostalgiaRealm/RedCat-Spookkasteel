/*
 * FUN_0055db60 at 0055db60
 * undefined FUN_0055db60(void)
 * Address ranges: 0055db60-0055dcb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0055db60(uint param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  char *_Str1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f758;
  pvStack_c = ExceptionList;
  if (((int)param_1 < 0) || (ExceptionList = &pvStack_c, DAT_006c8d98 <= param_1)) {
    local_1c[0] = (undefined1)param_1;
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_DriverNumber_>__0____a_DriverN_006a2c94,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x2ea,local_1c);
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
  uVar4 = 0;
  if ((&DAT_006ba8f4)[param_1 * 0x2df] != 0) {
    pcVar6 = &DAT_006ba948 + param_1 * 0xb7c;
    do {
      _Str1 = *(char **)(param_2 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar3 = __strcmpi(_Str1,pcVar6);
      if (iVar3 == 0) {
        ExceptionList = pvStack_c;
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      pcVar6 = pcVar6 + 0x81;
    } while (uVar4 < (uint)(&DAT_006ba8f4)[param_1 * 0x2df]);
  }
  ExceptionList = pvStack_c;
  return 0xffffffff;
}

