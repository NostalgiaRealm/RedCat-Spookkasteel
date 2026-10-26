/*
 * FUN_005cca30 at 005cca30
 * undefined FUN_005cca30(void)
 * Address ranges: 005cca30-005ccb39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cca30(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  for (puVar7 = param_1; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)*puVar7) {
    piVar1 = (int *)puVar7[3];
    iVar3 = FUN_005cc350(piVar1,s_classname_006aa46c);
    if (iVar3 != 0) {
      iVar3 = FUN_005cc6a0(param_1,iVar3);
      *piVar1 = 0;
      piVar1[2] = 0;
      if (iVar3 != 0) {
        *piVar1 = iVar3;
        puVar4 = (undefined4 *)FUN_005cf3b0(*(undefined4 *)(iVar3 + 0x10));
        piVar1[2] = (int)puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          FUN_005cf220(0x2d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa4a0,0x3a9,
                       &DAT_006b3f70,0);
          return 0;
        }
        uVar6 = *(uint *)(iVar3 + 0x10);
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
    }
  }
  puVar7 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    while( true ) {
      uVar2 = puVar7[3];
      iVar3 = FUN_005cc350(uVar2,s_classname_006aa46c);
      if ((iVar3 != 0) && (iVar3 = FUN_005ccb40(param_1,uVar2), iVar3 == 0)) break;
      puVar7 = (undefined4 *)*puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        return 1;
      }
    }
    FUN_005cf220(0x2d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa4a0,0x3be,&DAT_006b3f70,
                 0);
    return 0;
  }
  return 1;
}

