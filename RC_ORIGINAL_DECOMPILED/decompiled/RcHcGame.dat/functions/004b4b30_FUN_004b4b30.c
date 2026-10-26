/*
 * FUN_004b4b30 at 004b4b30
 * undefined FUN_004b4b30(void)
 * Address ranges: 004b4b30-004b4cb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ebe4 slot 1 for .?AVCAdamShockwaveCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ebe4 slot 1 for
   .?AVCAdamShockwaveCell@@. Original bytes unchanged; names and types still inferred. */

void __thiscall
FUN_004b4b30(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  bool bVar14;
  bool bVar15;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ebe8;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 0xa0) != 0) goto LAB_004b4c55;
  ExceptionList = &pvStack_c;
  *(int *)(param_1 + 0xa0) = param_5;
  if (param_5 == 0) {
LAB_004b4bab:
    local_1c[0] = (undefined1)param_2;
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar2 = FUN_00401940(uVar7,1);
    if (cVar2 != '\0') {
      puVar11 = (undefined4 *)&DAT_006b3f70;
      puVar13 = local_18;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4 = 0;
    pcVar5 = (code *)FUN_005a07f0(s_m_Go____0____m_Go_>GetName______m_00696f38,
                                  s_D__Work_RCHorror_AdamSource_Adam_00696f6c,0x38,local_1c);
    (*pcVar5)();
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
  else {
    pbVar3 = *(byte **)(param_1 + 0x54);
    uVar7 = *(uint *)(param_1 + 0x58);
    if (pbVar3 == (byte *)0x0) {
      pbVar3 = &DAT_0064a3b4;
    }
    uVar8 = *(uint *)(param_5 + 100);
    uVar6 = uVar8;
    if (uVar7 <= uVar8) {
      uVar6 = uVar7;
    }
    bVar14 = false;
    iVar4 = 0;
    bVar15 = true;
    pbVar10 = *(byte **)(param_5 + 0x60);
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar14 = *pbVar10 < *pbVar3;
      bVar15 = *pbVar10 == *pbVar3;
      pbVar10 = pbVar10 + 1;
      pbVar3 = pbVar3 + 1;
    } while (bVar15);
    if (!bVar15) {
      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
    }
    if (((iVar4 != 0) || (uVar8 < uVar7)) || (uVar8 != uVar7)) goto LAB_004b4bab;
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    ExceptionList = pvStack_c;
    return;
  }
LAB_004b4c55:
  iVar4 = *(int *)(param_1 + 0x60);
  uVar9 = 1;
  if (iVar4 != -1) {
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
      *(int *)(param_1 + 100) = iVar4 + param_2;
    }
    else if (iVar1 < param_2) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      uVar9 = 0;
    }
    else if (iVar4 < 1) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      *(float *)(param_1 + 0x68) = (float)(iVar1 - param_2) / (float)iVar4;
    }
  }
  *(undefined1 *)(param_1 + 0x6c) = uVar9;
  ExceptionList = pvStack_c;
  return;
}

