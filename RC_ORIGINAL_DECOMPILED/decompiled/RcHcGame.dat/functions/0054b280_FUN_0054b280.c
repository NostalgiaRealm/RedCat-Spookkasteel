/*
 * FUN_0054b280 at 0054b280
 * undefined FUN_0054b280(void)
 * Address ranges: 0054b280-0054b3da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0054b2b1) */

int FUN_0054b280(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar1 = *(uint *)(param_2 + -0xc);
    iVar10 = param_2 + -0x14;
    iVar8 = param_3 + -0x14;
    if (iVar8 == iVar10) {
      if (*(uint *)(param_3 + -0xc) < uVar1) {
        FUN_005fe747();
      }
      FUN_0040ce10();
      iVar3 = *(int *)(param_3 + -0xc) - uVar1;
      iVar7 = -1;
      if (iVar3 != -1) {
        iVar7 = iVar3;
      }
      if (iVar7 != 0) {
        iVar6 = uVar1 + *(int *)(param_3 + -0x10);
        FUN_0060ab50(iVar6,iVar6 + iVar7,iVar3 - iVar7);
        iVar7 = *(int *)(param_3 + -0xc) - iVar7;
        cVar2 = FUN_00401940(iVar7,0);
        if (cVar2 != '\0') {
          FUN_00404190(iVar7);
        }
      }
      FUN_0040ce10();
    }
    else {
      if (uVar1 != 0) {
        puVar4 = *(undefined1 **)(param_2 + -0x10);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          iVar7 = *(int *)(param_3 + -0x10);
          if (iVar7 != 0) {
            cVar2 = *(char *)(iVar7 + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_005fe5f0((char *)(iVar7 + -1));
            }
            else {
              *(char *)(iVar7 + -1) = cVar2 + -1;
            }
          }
          *(undefined4 *)(param_3 + -0x10) = 0;
          *(undefined4 *)(param_3 + -0xc) = 0;
          *(undefined4 *)(param_3 + -8) = 0;
          puVar4 = *(undefined1 **)(param_2 + -0x10);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0064a3b4;
          }
          *(undefined1 **)(param_3 + -0x10) = puVar4;
          *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
          *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
          puVar4[-1] = puVar4[-1] + '\x01';
          goto LAB_0054b3bc;
        }
      }
      cVar2 = FUN_00401940(uVar1,1);
      if (cVar2 != '\0') {
        puVar9 = *(undefined4 **)(param_2 + -0x10);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)&DAT_0064a3b4;
        }
        puVar11 = *(undefined4 **)(param_3 + -0x10);
        for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(uint *)(param_3 + -0xc) = uVar1;
        *(undefined1 *)(*(int *)(param_3 + -0x10) + uVar1) = 0;
      }
    }
LAB_0054b3bc:
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_3 = iVar8;
    param_2 = iVar10;
    if (iVar10 == param_1) {
      return iVar8;
    }
  } while( true );
}

