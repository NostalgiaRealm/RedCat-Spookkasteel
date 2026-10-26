/*
 * FUN_005f49b0 at 005f49b0
 * undefined FUN_005f49b0(void)
 * Address ranges: 005f49b0-005f4a4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f49b0(undefined4 *param_1)

{
  void *pvVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int extraout_ECX;
  uint uVar6;
  int iVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  char *pcVar8;
  undefined4 unaff_EDI;
  char *pcVar9;
  undefined1 local_5;
  
  *(undefined1 *)(param_1 + 3) = local_5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s__none_006b1160;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar2 = FUN_00401940(uVar5,1);
  iVar7 = extraout_ECX;
  if (cVar2 != '\0') {
    pcVar8 = s__none_006b1160;
    pcVar9 = (char *)param_1[4];
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    param_1[5] = uVar5;
    *(undefined1 *)(uVar5 + param_1[4]) = 0;
    iVar7 = 0;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0x34;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xe] = 0;
  param_1[0xc] = &PTR_FUN_00650ad4;
  *param_1 = &PTR_FUN_00651178;
  pvVar1 = ExceptionList;
  ExceptionList = &stack0xffffffec;
  puVar3 = operator_new(0x50);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = *(undefined4 *)(iVar7 + 4);
    puVar3[2] = *(undefined4 *)(iVar7 + 8);
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(iVar7 + 0xc);
    puVar4 = puVar3;
    FUN_004040a0(0);
    FUN_0040cc00((undefined1 *)(iVar7 + 0xc),0,0xffffffff);
    puVar3[7] = *(undefined4 *)(iVar7 + 0x1c);
    puVar3[8] = *(undefined4 *)(iVar7 + 0x20);
    *(undefined2 *)(puVar3 + 9) = *(undefined2 *)(iVar7 + 0x24);
    *(undefined1 *)(puVar3 + 10) = 0;
    *(undefined1 *)((int)puVar3 + 0x29) = 0;
    *puVar3 = &PTR_FUN_00650f54;
    FUN_005e27d0(iVar7 + 0x30,unaff_EBP,unaff_EBX,unaff_EDI,unaff_ESI,puVar4);
    puVar3[0xc] = &PTR_FUN_00650ad4;
    *(undefined1 *)(puVar3 + 0x12) = *(undefined1 *)(iVar7 + 0x48);
    *puVar3 = &PTR_FUN_00651178;
    puVar4 = puVar3;
  }
  ExceptionList = pvVar1;
  return puVar4;
}

