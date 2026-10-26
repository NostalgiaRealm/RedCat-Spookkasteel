/*
 * FUN_004eed60 at 004eed60
 * undefined FUN_004eed60(void)
 * Address ranges: 004eed60-004eeeec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall
FUN_004eed60(undefined1 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *param_2 = param_2._0_1_;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (*(uint *)(param_1 + 8) < param_3) {
    FUN_005fe747();
  }
  uVar5 = *(uint *)(param_1 + 8) - param_3;
  if (param_4 < uVar5) {
    uVar5 = param_4;
  }
  if (param_2 == param_1) {
    uVar5 = uVar5 + param_3;
    if (*(uint *)(param_2 + 8) < uVar5) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar2 = *(int *)(param_2 + 8) - uVar5;
    iVar6 = -1;
    if (iVar2 != -1) {
      iVar6 = iVar2;
    }
    if (iVar6 != 0) {
      FUN_0060ab50(*(int *)(param_2 + 4) + uVar5,*(int *)(param_2 + 4) + uVar5 + iVar6,iVar2 - iVar6
                  );
      iVar2 = *(int *)(param_2 + 8);
      cVar1 = FUN_00401940(iVar2 - iVar6,0);
      if (cVar1 != '\0') {
        FUN_00404190(iVar2 - iVar6);
      }
    }
    FUN_0040ce10();
    uVar5 = *(uint *)(param_2 + 8);
    if (uVar5 < param_3) {
      param_3 = uVar5;
    }
    if (param_3 != 0) {
      FUN_0060ab50(*(int *)(param_2 + 4),*(int *)(param_2 + 4) + param_3,uVar5 - param_3);
      iVar6 = *(int *)(param_2 + 8);
      cVar1 = FUN_00401940(iVar6 - param_3,0);
      if (cVar1 != '\0') {
        FUN_00404190(iVar6 - param_3);
        return param_2;
      }
    }
  }
  else {
    if ((uVar5 != 0) && (uVar5 == *(uint *)(param_1 + 8))) {
      puVar3 = *(undefined1 **)(param_1 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar3 = *(undefined1 **)(param_1 + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_2 + 4) = puVar3;
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        puVar3[-1] = puVar3[-1] + '\x01';
        return param_2;
      }
    }
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar3 = *(undefined1 **)(param_1 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      puVar7 = (undefined4 *)(puVar3 + param_3);
      puVar8 = *(undefined4 **)(param_2 + 4);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)(param_2 + 8) = uVar5;
      *(undefined1 *)(*(int *)(param_2 + 4) + uVar5) = 0;
    }
  }
  return param_2;
}

