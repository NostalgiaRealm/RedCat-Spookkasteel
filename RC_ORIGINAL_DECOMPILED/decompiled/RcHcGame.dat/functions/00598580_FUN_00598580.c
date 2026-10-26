/*
 * FUN_00598580 at 00598580
 * undefined FUN_00598580(void)
 * Address ranges: 00598580-00598674
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00598580(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
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
  puStack_8 = &LAB_00644148;
  local_c = ExceptionList;
  iVar5 = *(int *)(param_1 + 0x74) + param_2;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x74) = iVar5;
  if (iVar5 < 0) {
    local_1c[0] = (undefined1)param_2;
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar3) = 0;
      local_14 = uVar3;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_NumberOfCursors_>__0_006a6db8,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6cec,0xf6,local_1c);
    (*pcVar2)();
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)((int)local_18 + -1));
    }
  }
  ExceptionList = local_c;
  return;
}

