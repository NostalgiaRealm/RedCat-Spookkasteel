/*
 * FUN_1000db30 at 1000db30
 * undefined FUN_1000db30(void)
 * Address ranges: 1000db30-1000df27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000db30(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float10 fVar14;
  int local_70;
  int local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((((*(int *)(param_1 + 0x18) == param_2[6]) && (*(int *)(param_1 + 0x1c) == param_2[7])) &&
      (((*(uint *)(param_1 + 0xc) ^ param_2[3]) & 400) == 0)) &&
     ((((*(uint *)(param_1 + 0x10) ^ param_2[4]) & 400) == 0 &&
      (*(int *)(param_1 + 0x14) == param_2[5])))) {
    piVar2 = (int *)param_2[2];
    iVar8 = **(int **)(param_1 + 8);
    if ((iVar8 != -1) && (*piVar2 != -1)) {
      puVar12 = (undefined4 *)(*(int **)(param_1 + 8))[1];
      puVar3 = puVar12;
      iVar9 = 0;
      if (0 < iVar8) {
        while( true ) {
          iVar1 = iVar9 + 1;
          local_c = *puVar3;
          local_8 = puVar3[1];
          local_4 = puVar3[2];
          iVar5 = iVar1 % iVar8;
          local_18 = puVar12[iVar5 * 3];
          local_14 = puVar12[iVar5 * 3 + 1];
          local_10 = puVar12[iVar5 * 3 + 2];
          iVar5 = FUN_1000da70(&local_18,piVar2,local_50);
          if (iVar5 != 0) break;
          puVar3 = puVar3 + 3;
          iVar9 = iVar1;
          if (iVar8 <= iVar1) {
            return (undefined4 *)0x0;
          }
        }
        if (iVar9 < iVar8) {
          iVar1 = piVar2[1];
          iVar5 = *piVar2;
          iVar6 = *(int *)(param_1 + 0x18);
          local_3c = (&DAT_1003fdf8)[iVar6 * 5];
          local_38 = (&DAT_1003fdfc)[iVar6 * 5];
          local_34 = (&DAT_1003fe00)[iVar6 * 5];
          if (*(int *)(param_1 + 0x1c) != 0) {
            FUN_10014560(&local_3c);
          }
          iVar6 = (iVar9 + -1 + iVar8) % iVar8;
          local_48 = puVar12[iVar6 * 3];
          local_44 = puVar12[iVar6 * 3 + 1];
          local_40 = puVar12[iVar6 * 3 + 2];
          FUN_10014560(&local_48);
          FUN_100143f0(local_30);
          FUN_100144b0();
          FUN_10014560(local_24);
          fVar13 = (float10)FUN_100143d0();
          if (fVar13 <= (float10)0.0001) {
            iVar6 = (iVar9 + 2) % iVar8;
            local_48 = puVar12[iVar6 * 3];
            local_44 = puVar12[iVar6 * 3 + 1];
            local_40 = puVar12[iVar6 * 3 + 2];
            FUN_10014560(&local_48);
            FUN_100143f0(local_30);
            FUN_100144b0();
            FUN_10014560(local_24);
            fVar14 = (float10)FUN_100143d0();
            if (fVar14 <= (float10)0.0001) {
              puVar3 = (undefined4 *)FUN_1000d8e0(iVar5 + iVar8);
              piVar2 = (int *)puVar3[2];
              if (puVar3 == (undefined4 *)0x0) {
                (*DAT_1014e358)(s__WARNING__MergeFace__Out_of_memo_10038ba8);
                return (undefined4 *)0x0;
              }
              iVar10 = 0;
              iVar6 = (iVar9 + 1) % iVar8;
              if (iVar6 != iVar9) {
                local_70 = 0;
                iVar7 = iVar6;
                do {
                  if ((iVar7 != iVar6) || (fVar14 < (float10)-0.0001)) {
                    puVar11 = puVar12 + iVar7 * 3;
                    puVar4 = (undefined4 *)(piVar2[1] + local_70);
                    iVar10 = iVar10 + 1;
                    *puVar4 = *puVar11;
                    puVar4[1] = puVar11[1];
                    puVar4[2] = puVar11[2];
                    local_70 = local_70 + 0xc;
                  }
                  iVar7 = (iVar7 + 1) % iVar8;
                } while (iVar7 != iVar9);
              }
              iVar8 = (local_50[0] + 1) % iVar5;
              if (iVar8 != local_50[0]) {
                iVar6 = iVar10 * 0xc;
                iVar9 = iVar8;
                do {
                  if ((iVar9 != iVar8) || (fVar13 < (float10)-0.0001)) {
                    puVar12 = (undefined4 *)(iVar1 + iVar9 * 0xc);
                    puVar11 = (undefined4 *)(piVar2[1] + iVar6);
                    iVar10 = iVar10 + 1;
                    iVar6 = iVar6 + 0xc;
                    *puVar11 = *puVar12;
                    puVar11[1] = puVar12[1];
                    puVar11[2] = puVar12[2];
                  }
                  iVar9 = (iVar9 + 1) % iVar5;
                } while (iVar9 != local_50[0]);
              }
              puVar12 = param_2;
              puVar11 = puVar3;
              for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar11 = puVar11 + 1;
              }
              *piVar2 = iVar10;
              puVar3[2] = piVar2;
              *(undefined4 **)(param_1 + 0x44) = puVar3;
              param_2[0x11] = puVar3;
              return puVar3;
            }
          }
        }
      }
    }
  }
  return (undefined4 *)0x0;
}

