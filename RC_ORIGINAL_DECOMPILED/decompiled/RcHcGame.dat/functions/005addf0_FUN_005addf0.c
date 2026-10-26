/*
 * FUN_005addf0 at 005addf0
 * undefined FUN_005addf0(void)
 * Address ranges: 005addf0-005ae016
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005addf0(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645ec0;
  pvStack_c = ExceptionList;
  local_2c[0] = param_2._0_1_;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4 = 0;
  cVar1 = FUN_005adce0(param_2);
  if (cVar1 == '\0') {
    local_1c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
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
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_IsString__a_String___006a8fd8,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a8ff0,0x110,local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
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
  uVar4 = *(int *)(param_2 + 8) - 2;
  if (*(int *)(param_2 + 8) == 0) {
    FUN_005fe747();
  }
  uVar5 = *(uint *)(param_2 + 8) - 1;
  if (uVar4 < uVar5) {
    uVar5 = uVar4;
  }
  if (local_2c == param_2) {
    FUN_0040c9b0(uVar5 + 1,0xffffffff);
    FUN_0040c9b0(0,1);
  }
  else {
    if ((uVar5 != 0) && (uVar5 == *(uint *)(param_2 + 8))) {
      puVar3 = *(undefined1 **)(param_2 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004040a0(1);
        puStack_28 = *(undefined4 **)(param_2 + 4);
        if (puStack_28 == (undefined4 *)0x0) {
          puStack_28 = (undefined4 *)&DAT_0064a3b4;
        }
        uStack_24 = *(uint *)(param_2 + 8);
        uStack_20 = *(undefined4 *)(param_2 + 0xc);
        *(char *)((int)puStack_28 + -1) = *(char *)((int)puStack_28 + -1) + '\x01';
        goto LAB_005adfb7;
      }
    }
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar3 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(param_2 + 4);
      }
      puVar6 = (undefined4 *)(puVar3 + 1);
      puVar8 = puStack_28;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)puStack_28 + uVar5) = 0;
      uStack_24 = uVar5;
    }
  }
LAB_005adfb7:
  *param_1 = local_2c[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_2c,0,0xffffffff);
  if (puStack_28 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((undefined1 *)((int)puStack_28 + -1));
    }
    else {
      *(char *)((int)puStack_28 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

