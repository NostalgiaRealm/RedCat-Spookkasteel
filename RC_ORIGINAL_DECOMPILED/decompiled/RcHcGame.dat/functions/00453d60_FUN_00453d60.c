/*
 * FUN_00453d60 at 00453d60
 * undefined FUN_00453d60(void)
 * Address ranges: 00453d60-00453ea2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00453d8f) */

void __thiscall
FUN_00453d60(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = param_2[2];
  if (param_1 + 1 == param_2) {
    if (uVar1 != 0) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar3 = param_1[3] - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      FUN_0060ab50(uVar1 + param_1[2],uVar1 + param_1[2] + iVar6,iVar3 - iVar6);
      iVar3 = param_1[3];
      cVar2 = FUN_00401940(iVar3 - iVar6,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar3 - iVar6);
      }
    }
    FUN_0040ce10();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = (undefined1 *)param_2[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = (undefined1 *)param_2[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        param_1[2] = puVar4;
        param_1[3] = param_2[2];
        param_1[4] = param_2[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_00453e6d;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)param_2[1];
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar8 = (undefined4 *)param_1[2];
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      param_1[3] = uVar1;
      *(undefined1 *)(param_1[2] + uVar1) = 0;
    }
  }
LAB_00453e6d:
  param_1[5] = param_3;
  param_1[6] = *param_4;
  param_1[7] = param_4[1];
  param_1[8] = param_4[2];
  param_1[9] = param_4[3];
  *param_1 = &PTR_FUN_0064d380;
  return;
}

