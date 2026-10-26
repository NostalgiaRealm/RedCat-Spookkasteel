/*
 * FUN_10003970 at 10003970
 * undefined FUN_10003970(void)
 * Address ranges: 10003970-10003b7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10003970(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_____Build_BSP_Tree_____100367fc);
  }
  FUN_1000c010(&local_18,&local_c);
  iVar5 = 0;
  iVar7 = 0;
  iVar6 = 0;
  for (puVar1 = param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    iVar6 = iVar6 + 1;
    fVar8 = (float10)FUN_10001a30(puVar1);
    if (fVar8 < (float10)_DAT_1003651c) {
      (*DAT_1014e35c)(s___WARNING___BuildBSP__Brush_with_100367cc);
    }
    iVar4 = puVar1[10];
    if (0 < iVar4) {
      pbVar2 = (byte *)(puVar1 + 0xf);
      do {
        if ((*(int *)(pbVar2 + -0x10) != 0) && ((*pbVar2 & 0x10) == 0)) {
          if ((*pbVar2 & 4) == 0) {
            iVar7 = iVar7 + 1;
          }
          else {
            iVar5 = iVar5 + 1;
          }
        }
        pbVar2 = pbVar2 + 0x14;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_1000c040(puVar1 + 1,&local_18,&local_c);
    FUN_1000c040(puVar1 + 4,&local_18,&local_c);
  }
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_Total_Brushes____5i_100367ac,iVar6);
    (*DAT_1014e35c)(s_Total_Faces____5i_1003678c,iVar5);
    (*DAT_1014e35c)(s_Faces_Removed____5i_1003676c,iVar7);
  }
  DAT_1014e214 = 0;
  DAT_1014e218 = 0;
  iVar5 = FUN_100027f0();
  uVar3 = FUN_10001c00(&local_18,&local_c);
  *(undefined4 *)(iVar5 + 0x5c) = uVar3;
  fVar8 = (float10)FUN_10001a30(uVar3);
  if (fVar8 < (float10)1.0) {
    (*DAT_1014e35c)(s___WARNING___BuildBSP__BAD_world_v_10036740);
  }
  iVar5 = FUN_10003860(iVar5,param_1);
  *(undefined4 *)(iVar5 + 0x1c) = local_18;
  *(undefined4 *)(iVar5 + 0x20) = uStack_14;
  *(undefined4 *)(iVar5 + 0x24) = uStack_10;
  *(undefined4 *)(iVar5 + 0x28) = local_c;
  *(undefined4 *)(iVar5 + 0x2c) = uStack_8;
  *(undefined4 *)(iVar5 + 0x30) = uStack_4;
  DAT_1014e208 = local_18;
  DAT_1014e220 = local_c;
  DAT_1014e20c = uStack_14;
  DAT_1014e210 = uStack_10;
  DAT_1014e224 = uStack_8;
  DAT_1014e228 = uStack_4;
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_Total_Nodes____5i_10036720,DAT_1014e214 / 2 - DAT_1014e218);
    (*DAT_1014e35c)(s_Nodes_Removed____5i_10036700,DAT_1014e218);
    (*DAT_1014e35c)(s_Total_Leafs____5i_100366e0,(DAT_1014e214 + 1) / 2);
  }
  return iVar5;
}

