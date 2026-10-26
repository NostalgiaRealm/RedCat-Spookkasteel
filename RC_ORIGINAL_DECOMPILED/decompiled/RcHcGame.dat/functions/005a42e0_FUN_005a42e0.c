/*
 * FUN_005a42e0 at 005a42e0
 * undefined FUN_005a42e0(void)
 * Address ranges: 005a42e0-005a447a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005a42e0(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_221;
  undefined1 local_220 [4];
  undefined4 *local_21c;
  uint local_218;
  undefined4 local_214;
  undefined4 local_210;
  char local_20c [512];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064534b;
  pvStack_c = ExceptionList;
  pcVar8 = local_20c;
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  local_210 = 0;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  ExceptionList = &pvStack_c;
  FUN_0060d721(local_20c,puVar2,0x1ff);
  uVar5 = 0xffffffff;
  pcVar8 = local_20c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (0x1fe < ~uVar5 - 1) {
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    local_21c = (undefined4 *)0x0;
    local_218 = 0;
    local_214 = 0;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_21c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_21c + uVar5) = 0;
      local_218 = uVar5;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_strlen__buf___<_sizeof(_buf_)___1_006a7d60,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7d84,0x1c,local_220);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_21c != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_21c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_21c + -1));
      }
      else {
        *(char *)((int)local_21c + -1) = cVar1 + -1;
      }
    }
    local_21c = (undefined4 *)0x0;
    local_218 = 0;
    local_214 = 0;
  }
  uVar5 = 0xffffffff;
  *param_1 = local_221;
  pcVar8 = local_20c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar8 = local_20c;
    pcVar10 = *(char **)(param_1 + 4);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    *(uint *)(param_1 + 8) = uVar5;
    *(undefined1 *)(uVar5 + *(int *)(param_1 + 4)) = 0;
  }
  ExceptionList = pvStack_c;
  return param_1;
}

