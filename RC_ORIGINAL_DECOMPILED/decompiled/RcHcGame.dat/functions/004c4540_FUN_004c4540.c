/*
 * FUN_004c4540 at 004c4540
 * undefined FUN_004c4540(void)
 * Address ranges: 004c4540-004c46b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004c4574) */

int __thiscall FUN_004c4540(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((undefined4 *)(param_2 + 0x10) != puVar1) {
    puVar8 = (undefined4 *)(param_2 + 0x14);
    do {
      uVar2 = puVar8[1];
      if (puVar8 + -5 == puVar8 + -1) {
        FUN_0040c9b0(uVar2,0xffffffff);
        FUN_0040c9b0(0,0);
      }
      else {
        if (uVar2 != 0) {
          puVar6 = (undefined1 *)*puVar8;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0064a3b4;
          }
          if ((byte)puVar6[-1] < 0xfe) {
            iVar10 = puVar8[-4];
            if (iVar10 != 0) {
              cVar5 = *(char *)(iVar10 + -1);
              if ((cVar5 == '\0') || (cVar5 == -1)) {
                FUN_005fe5f0((char *)(iVar10 + -1));
              }
              else {
                *(char *)(iVar10 + -1) = cVar5 + -1;
              }
            }
            puVar8[-4] = 0;
            puVar8[-3] = 0;
            puVar8[-2] = 0;
            puVar6 = (undefined1 *)*puVar8;
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_0064a3b4;
            }
            puVar8[-4] = puVar6;
            puVar8[-3] = puVar8[1];
            puVar8[-2] = puVar8[2];
            puVar6[-1] = puVar6[-1] + '\x01';
            goto LAB_004c4645;
          }
        }
        cVar5 = FUN_00401940(uVar2,1);
        if (cVar5 != '\0') {
          puVar9 = (undefined4 *)*puVar8;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)&DAT_0064a3b4;
          }
          puVar11 = (undefined4 *)puVar8[-4];
          for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          FUN_00404190(uVar2);
        }
      }
LAB_004c4645:
      puVar9 = puVar8 + 3;
      puVar8 = puVar8 + 4;
    } while (puVar9 != puVar1);
  }
  iVar3 = *(int *)(param_1 + 8);
  for (iVar10 = iVar3 + -0x10; iVar10 != iVar3; iVar10 = iVar10 + 0x10) {
    iVar4 = *(int *)(iVar10 + 4);
    if (iVar4 != 0) {
      cVar5 = *(char *)(iVar4 + -1);
      if ((cVar5 == '\0') || (cVar5 == -1)) {
        FUN_005fe5f0((char *)(iVar4 + -1));
      }
      else {
        *(char *)(iVar4 + -1) = cVar5 + -1;
      }
    }
    *(undefined4 *)(iVar10 + 4) = 0;
    *(undefined4 *)(iVar10 + 8) = 0;
    *(undefined4 *)(iVar10 + 0xc) = 0;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return param_2;
}

