/*
 * FUN_00547010 at 00547010
 * undefined FUN_00547010(void)
 * Address ranges: 00547010-005471c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005470c3) */

undefined1 * __thiscall FUN_00547010(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d171;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  if (*(int *)(param_2 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x14;
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  piVar7 = operator_new(iVar6 * 0x14);
  *(int **)(param_1 + 4) = piVar7;
  piVar2 = *(int **)(puVar4 + 8);
  piVar10 = *(int **)(puVar4 + 4);
  if (piVar10 != piVar2) {
    piVar10 = piVar10 + 1;
    do {
      local_4 = 0;
      if (piVar7 != (int *)0x0) {
        iVar6 = piVar10[-1];
        piVar7[1] = 0;
        *(char *)piVar7 = (char)iVar6;
        piVar7[2] = 0;
        piVar7[3] = 0;
        uVar3 = piVar10[1];
        if (piVar7 == piVar10 + -1) {
          FUN_0040c9b0(uVar3,0xffffffff);
          FUN_0040c9b0(0,0);
        }
        else {
          if (uVar3 != 0) {
            iVar6 = *piVar10;
            if (iVar6 == 0) {
              iVar6 = FUN_004eefc0();
            }
            if (*(byte *)(iVar6 + -1) < 0xfe) {
              FUN_004040a0(1);
              iVar6 = *piVar10;
              if (iVar6 == 0) {
                iVar6 = FUN_004eefc0();
              }
              piVar7[1] = iVar6;
              piVar7[2] = piVar10[1];
              piVar7[3] = piVar10[2];
              *(char *)(iVar6 + -1) = *(char *)(iVar6 + -1) + '\x01';
              goto LAB_00547178;
            }
          }
          cVar5 = FUN_00401940(uVar3,1);
          if (cVar5 != '\0') {
            puVar8 = (undefined4 *)*piVar10;
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)FUN_004eefc0();
            }
            puVar11 = (undefined4 *)piVar7[1];
            for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            param_2 = (undefined1 *)((uint)param_2 & 0xffffff00);
            for (uVar9 = uVar3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            piVar7[2] = uVar3;
            FUN_005471d0(piVar7[1] + uVar3,&param_2);
          }
        }
LAB_00547178:
        piVar7[4] = piVar10[3];
      }
      piVar7 = piVar7 + 5;
      piVar1 = piVar10 + 4;
      piVar10 = piVar10 + 5;
    } while (piVar1 != piVar2);
  }
  *(int **)(param_1 + 8) = piVar7;
  *(int **)(param_1 + 0xc) = piVar7;
  ExceptionList = local_c;
  return param_1;
}

