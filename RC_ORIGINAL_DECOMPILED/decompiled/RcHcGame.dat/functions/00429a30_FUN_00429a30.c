/*
 * FUN_00429a30 at 00429a30
 * undefined FUN_00429a30(void)
 * Address ranges: 00429a30-00429b49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00429a57) */

undefined1 * __thiscall FUN_00429a30(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = *(uint *)(param_2 + 8);
  if (param_1 == param_2) {
    if (uVar1 != 0) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar3 = *(int *)(param_1 + 8) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      FUN_0060ab50(*(int *)(param_1 + 4) + uVar1,*(int *)(param_1 + 4) + uVar1 + iVar6,iVar3 - iVar6
                  );
      iVar3 = *(int *)(param_1 + 8);
      cVar2 = FUN_00401940(iVar3 - iVar6,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar3 - iVar6);
      }
    }
    FUN_0040ce10();
    return param_1;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      *(undefined1 **)(param_1 + 4) = puVar4;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return param_1;
    }
  }
  cVar2 = FUN_00401940(uVar1,1);
  if (cVar2 != '\0') {
    puVar7 = *(undefined4 **)(param_2 + 4);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)&DAT_0064a3b4;
    }
    puVar8 = *(undefined4 **)(param_1 + 4);
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
    FUN_00404190(uVar1);
  }
  return param_1;
}

