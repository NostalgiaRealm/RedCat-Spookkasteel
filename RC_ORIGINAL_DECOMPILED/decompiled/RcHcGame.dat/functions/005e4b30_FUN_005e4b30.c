/*
 * FUN_005e4b30 at 005e4b30
 * undefined FUN_005e4b30(void)
 * Address ranges: 005e4b30-005e4cc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 2 for .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 2 for
   .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types
   still inferred. */

uint __thiscall FUN_005e4b30(int param_1,uint param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  
  uVar5 = **(uint **)(param_1 + 0x1c);
  if (((uVar5 != 0) && (**(uint **)(param_1 + 0xc) < uVar5)) &&
     ((param_2 == 0xffffffff || (*(byte *)(uVar5 - 1) == param_2)))) {
    **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -1;
    return -(uint)(param_2 != 0xffffffff) & param_2;
  }
  if ((*(int *)(param_1 + 0x50) != 0) && (param_2 != 0xffffffff)) {
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar4 = FUN_0060e3f1(param_2 & 0xff,*(int *)(param_1 + 0x50));
      if (iVar4 != -1) {
        return param_2;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x44);
      iVar7 = *(int *)(iVar4 + 8);
      if (iVar7 != 0) {
        if (((*(int *)(iVar4 + 4) != 0) &&
            (cVar3 = *(char *)(*(int *)(iVar4 + 4) + -1), cVar3 != '\0')) && (cVar3 != -1)) {
          FUN_00401940(iVar7,0);
        }
        if (*(int *)(iVar4 + 4) != 0) {
          *(undefined1 *)(*(int *)(iVar4 + 4) + -1) = 0xff;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x50);
        puVar6 = (undefined1 *)(*(int *)(iVar4 + 4) + iVar7);
        bVar10 = iVar7 == 0;
        if (!bVar10) {
          do {
            puVar6 = puVar6 + -1;
            iVar4 = FUN_0060e3f1(*puVar6,uVar1);
            if (iVar4 == -1) break;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          bVar10 = iVar7 == 0;
        }
        if (bVar10) {
          iVar4 = *(int *)(param_1 + 0x44);
          pcVar2 = *(char **)(iVar4 + 4);
          if (((pcVar2 != (char *)0x0) && (pcVar2[-1] != '\0')) && (pcVar2[-1] != -1)) {
            FUN_004040a0(1);
            uVar5 = 0xffffffff;
            pcVar8 = pcVar2;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar3 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 != '\0');
            FUN_004040f0(pcVar2,~uVar5 - 1);
          }
          iVar7 = *(int *)(iVar4 + 8);
          iVar9 = -1;
          if (iVar7 != -1) {
            iVar9 = iVar7;
          }
          if (iVar9 != 0) {
            FUN_0060ab50(*(int *)(iVar4 + 4),*(int *)(iVar4 + 4) + iVar9,iVar7 - iVar9);
            iVar9 = *(int *)(iVar4 + 8) - iVar9;
            cVar3 = FUN_00401940(iVar9,0);
            if (cVar3 != '\0') {
              *(int *)(iVar4 + 8) = iVar9;
              *(undefined1 *)(iVar9 + *(int *)(iVar4 + 4)) = 0;
            }
          }
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
          return param_2;
        }
        if (iVar7 == 0) {
          iVar4 = 1;
          do {
            FUN_0060e3d7(uVar1);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
  }
  return 0xffffffff;
}

