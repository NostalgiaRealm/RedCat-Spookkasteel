/*
 * FUN_10002410 at 10002410
 * undefined FUN_10002410(void)
 * Address ranges: 10002410-1000260e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10002410(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iStack_c;
  
  puVar4 = param_1;
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s______CSGBrushes______100363ec);
    uVar2 = FUN_100019d0(param_1);
    (*DAT_1014e35c)(s_Num_brushes_before_CSG____5i_100363cc,uVar2);
  }
  param_1 = (undefined4 *)0x0;
joined_r0x1000244e:
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar7 = (undefined4 *)*puVar4;
  puVar1 = puVar4;
  while (puVar8 = puVar7, puVar8 != (undefined4 *)0x0) {
    puVar1 = puVar8;
    puVar7 = (undefined4 *)*puVar8;
  }
  do {
    puVar7 = puVar4;
    if ((puVar7 == (undefined4 *)0x0) ||
       (puVar4 = (undefined4 *)*puVar7, puVar8 = puVar4, DAT_1014e350 != 0)) {
      if (DAT_10036408 != 0) {
        uVar2 = FUN_100019d0(param_1);
        (*DAT_1014e35c)(s_Num_brushes_after_CSG____5i_100363ac,uVar2);
      }
      return param_1;
    }
    for (; puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)*puVar8) {
      if ((DAT_1014e350 == 0) && (iVar3 = FUN_10002370(puVar7,puVar8), iVar3 != 0)) {
        puVar5 = (undefined4 *)0x0;
        puVar6 = (undefined4 *)0x0;
        iStack_c = 999999;
        iVar3 = FUN_10002330(puVar8,puVar7);
        if (iVar3 != 0) {
          puVar5 = (undefined4 *)FUN_10002280(puVar7,puVar8);
          if (puVar5 == puVar7) goto LAB_1000254f;
          if (puVar5 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)FUN_100019f0(puVar7,puVar7);
            goto joined_r0x1000244e;
          }
          iStack_c = FUN_100019d0(puVar5);
        }
        iVar3 = FUN_10002330(puVar7,puVar8);
        if (iVar3 == 0) {
          iVar3 = 999999;
        }
        else {
          puVar6 = (undefined4 *)FUN_10002280(puVar8,puVar7);
          if (puVar6 == puVar8) goto LAB_1000254f;
          if (puVar6 == (undefined4 *)0x0) {
            FUN_100017e0(puVar5);
            puVar4 = (undefined4 *)FUN_100019f0(puVar7,puVar8);
            goto joined_r0x1000244e;
          }
          iVar3 = FUN_100019d0(puVar6);
        }
        if ((puVar5 != (undefined4 *)0x0) || (puVar6 != (undefined4 *)0x0)) {
          if ((iStack_c < 5) || (iVar3 < 5)) {
            if (iStack_c < iVar3) {
              if (puVar6 != (undefined4 *)0x0) {
                FUN_100017e0(puVar6);
              }
              FUN_100019b0(puVar5,puVar1);
              puVar8 = puVar7;
            }
            else {
              if (puVar5 != (undefined4 *)0x0) {
                FUN_100017e0(puVar5);
              }
              FUN_100019b0(puVar6,puVar1);
            }
            puVar4 = (undefined4 *)FUN_100019f0(puVar7,puVar8);
            goto joined_r0x1000244e;
          }
          if (puVar6 != (undefined4 *)0x0) {
            FUN_100017e0(puVar6);
          }
          if (puVar5 != (undefined4 *)0x0) {
            FUN_100017e0(puVar5);
          }
        }
      }
LAB_1000254f:
    }
    *puVar7 = param_1;
    param_1 = puVar7;
  } while( true );
}

