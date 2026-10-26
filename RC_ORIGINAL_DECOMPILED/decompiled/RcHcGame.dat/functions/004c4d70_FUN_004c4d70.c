/*
 * FUN_004c4d70 at 004c4d70
 * undefined FUN_004c4d70(void)
 * Address ranges: 004c4d70-004c4f0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004c4dd7) */

void FUN_004c4d70(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006304a1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  ExceptionList = &local_c;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = param_2[5];
  if (param_1 + 3 == param_2 + 3) {
    if (uVar1 != 0) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar3 = param_1[5] - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      FUN_0060ab50(uVar1 + param_1[4],uVar1 + param_1[4] + iVar6,iVar3 - iVar6);
      iVar3 = param_1[5];
      cVar2 = FUN_00401940(iVar3 - iVar6,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar3 - iVar6);
      }
    }
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = (undefined1 *)param_2[4];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = (undefined1 *)param_2[4];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        param_1[4] = puVar4;
        param_1[5] = param_2[5];
        param_1[6] = param_2[6];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004c4ec1;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)param_2[4];
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar8 = (undefined4 *)param_1[4];
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
      param_1[5] = uVar1;
      *(undefined1 *)(param_1[4] + uVar1) = 0;
    }
  }
LAB_004c4ec1:
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  ExceptionList = local_c;
  return;
}

