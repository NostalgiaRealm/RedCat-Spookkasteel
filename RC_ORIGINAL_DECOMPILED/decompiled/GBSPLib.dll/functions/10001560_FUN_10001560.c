/*
 * FUN_10001560 at 10001560
 * undefined FUN_10001560(void)
 * Address ranges: 10001560-100016bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001560(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_18;
  undefined4 local_14 [5];
  
  piVar2 = param_1;
  FUN_1000c010(param_1 + 4,param_1 + 7);
  local_18 = 0;
  if (0 < piVar2[0xb]) {
    pbVar5 = (byte *)(piVar2 + 0x10);
    do {
      bVar1 = pbVar5[-8];
      puVar6 = &DAT_1003fdf8 + *(int *)(pbVar5 + -0xc) * 5;
      puVar9 = local_14;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      if (bVar1 != 0) {
        FUN_10002b30(local_14);
      }
      piVar3 = (int *)FUN_1000c3f0(local_14);
      iVar4 = 0;
      param_1 = piVar3;
      if (0 < piVar2[0xb]) {
        piVar7 = piVar2 + 0xd;
        do {
          if (piVar3 == (int *)0x0) break;
          if (local_18 != iVar4) {
            FUN_1000c890(piVar3,0,&DAT_1003fdf8 + *piVar7 * 5,(char)piVar7[1] == '\0',&param_1);
            piVar3 = param_1;
          }
          iVar4 = iVar4 + 1;
          piVar7 = piVar7 + 5;
        } while (iVar4 < piVar2[0xb]);
      }
      *(int **)(pbVar5 + -0x10) = piVar3;
      if (piVar3 != (int *)0x0) {
        iVar4 = 0;
        *pbVar5 = *pbVar5 | 4;
        if (0 < *piVar3) {
          iVar10 = 0;
          do {
            FUN_1000c040(piVar3[1] + iVar10,piVar2 + 4,piVar2 + 7);
            iVar4 = iVar4 + 1;
            iVar10 = iVar10 + 0xc;
            piVar3 = param_1;
          } while (iVar4 < *param_1);
        }
      }
      local_18 = local_18 + 1;
      pbVar5 = pbVar5 + 0x14;
    } while (local_18 < piVar2[0xb]);
  }
  pfVar8 = (float *)(piVar2 + 7);
  iVar4 = 3;
  do {
    if ((pfVar8[-3] <= -15192.0) || (15192.0 <= *pfVar8)) {
      (*DAT_1014e35c)(s_Entity__i__Brush__i__Bounds_out_o_100361e8,piVar2[1],piVar2[2]);
    }
    pfVar8 = pfVar8 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 1;
}

