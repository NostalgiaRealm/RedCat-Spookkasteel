/*
 * FUN_1002e3af at 1002e3af
 * undefined FUN_1002e3af(void)
 * Address ranges: 1002e3af-1002e5b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int * FUN_1002e3af(uint param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  int *piVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar8 = (int *)PTR_LOOP_1003f370;
  do {
    if (piVar8[4] != -1) {
      piVar5 = (int *)piVar8[2];
      iVar3 = ((int)piVar5 + (-0x18 - (int)piVar8) >> 3) * 0x1000 + piVar8[4];
      if (piVar5 < piVar8 + 0x806) {
        do {
          if (((int)param_1 <= *piVar5) && (param_1 < (uint)piVar5[1])) {
            piVar4 = (int *)FUN_1002e5b7(iVar3,*piVar5,param_1);
            if (piVar4 != (int *)0x0) goto LAB_1002e47a;
            piVar5[1] = param_1;
          }
          piVar5 = piVar5 + 2;
          iVar3 = iVar3 + 0x1000;
        } while (piVar5 < piVar8 + 0x806);
      }
      piVar1 = (int *)piVar8[2];
      iVar3 = piVar8[4];
      for (piVar5 = piVar8 + 6; piVar5 < piVar1; piVar5 = piVar5 + 2) {
        if (((int)param_1 <= *piVar5) && (param_1 < (uint)piVar5[1])) {
          piVar4 = (int *)FUN_1002e5b7(iVar3,*piVar5,param_1);
          if (piVar4 != (int *)0x0) {
LAB_1002e47a:
            PTR_LOOP_1003f370 = (undefined *)piVar8;
            *piVar5 = *piVar5 - param_1;
            piVar8[2] = (int)piVar5;
            return piVar4;
          }
          piVar5[1] = param_1;
        }
        iVar3 = iVar3 + 0x1000;
      }
    }
    piVar8 = (int *)*piVar8;
    if (piVar8 == (int *)PTR_LOOP_1003f370) {
      ppuVar9 = &PTR_LOOP_1003d350;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1003d350) {
          puVar6 = (undefined *)FUN_1002e0b7();
          if (puVar6 == (undefined *)0x0) {
            return (int *)0x0;
          }
          piVar8 = *(int **)(puVar6 + 0x10);
          *(char *)(piVar8 + 2) = (char)param_1;
          PTR_LOOP_1003f370 = puVar6;
          *piVar8 = (int)piVar8 + param_1 + 8;
          piVar8[1] = 0xf0 - param_1;
          *(uint *)(puVar6 + 0x18) = *(int *)(puVar6 + 0x18) - (param_1 & 0xff);
          return piVar8 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar8 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar6 = *ppuVar2;
      ppuVar7 = ppuVar2;
      for (; (puVar6 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar7 = ppuVar7 + 2;
        puVar6 = *ppuVar7;
      }
      piVar5 = VirtualAlloc(piVar8,local_8 << 0xc,0x1000,4);
      if (piVar5 != piVar8) {
        return (int *)0x0;
      }
      _memset(piVar8,local_8 << 0xc,0);
      ppuVar7 = ppuVar2;
      if (0 < local_8) {
        piVar5 = piVar8 + 1;
        do {
          *(undefined1 *)(piVar5 + 0x3d) = 0xff;
          piVar5[-1] = (int)(piVar5 + 1);
          *piVar5 = 0xf0;
          *ppuVar7 = (undefined *)0xf0;
          ppuVar7[1] = (undefined *)0xf1;
          piVar5 = piVar5 + 0x400;
          ppuVar7 = ppuVar7 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar7 < ppuVar9 + 0x806 && (*ppuVar7 != (undefined *)0xffffffff));
          ppuVar7 = ppuVar7 + 2) {
      }
      PTR_LOOP_1003f370 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar7 < ppuVar9 + 0x806) & (uint)ppuVar7);
      *(char *)(piVar8 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar8[1] = piVar8[1] - param_1;
      *piVar8 = (int)piVar8 + param_1 + 8;
      return piVar8 + 0x40;
    }
  } while( true );
}

