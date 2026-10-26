/*
 * FUN_005e3420 at 005e3420
 * undefined FUN_005e3420(void)
 * Address ranges: 005e3420-005e35ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005e3481) */

undefined4 * __fastcall FUN_005e3420(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064653b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar4 = operator_new(0x20);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(param_1 + 4);
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  uVar1 = *(uint *)(param_1 + 0xc);
  if (puVar4 + 1 == (undefined4 *)(param_1 + 4)) {
    if (uVar1 != 0) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar5 = puVar4[3] - uVar1;
    iVar8 = -1;
    if (iVar5 != -1) {
      iVar8 = iVar5;
    }
    if (iVar8 != 0) {
      FUN_0060ab50(uVar1 + puVar4[2],uVar1 + puVar4[2] + iVar8,iVar5 - iVar8);
      iVar5 = puVar4[3];
      cVar3 = FUN_00401940(iVar5 - iVar8,0);
      if (cVar3 != '\0') {
        FUN_00404190(iVar5 - iVar8);
      }
    }
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar6 = *(undefined1 **)(param_1 + 8);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      if ((byte)puVar6[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar6 = *(undefined1 **)(param_1 + 8);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        puVar4[2] = puVar6;
        puVar4[3] = *(undefined4 *)(param_1 + 0xc);
        puVar4[4] = *(undefined4 *)(param_1 + 0x10);
        puVar6[-1] = puVar6[-1] + '\x01';
        goto LAB_005e3561;
      }
    }
    cVar3 = FUN_00401940(uVar1,1);
    if (cVar3 != '\0') {
      puVar9 = *(undefined4 **)(param_1 + 8);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar10 = (undefined4 *)puVar4[2];
      for (uVar7 = uVar1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar4[3] = uVar1;
      *(undefined1 *)(puVar4[2] + uVar1) = 0;
    }
  }
LAB_005e3561:
  puVar4[5] = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(param_1 + 0x18);
  *puVar4 = &PTR_FUN_006509a8;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *puVar4 = &PTR_FUN_006509d0;
  puVar4[7] = uVar2;
  ExceptionList = local_c;
  return puVar4;
}

