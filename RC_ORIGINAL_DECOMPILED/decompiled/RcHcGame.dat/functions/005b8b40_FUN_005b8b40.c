/*
 * FUN_005b8b40 at 005b8b40
 * undefined FUN_005b8b40(void)
 * Address ranges: 005b8b40-005b8cbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b8b40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_6a0;
  byte *pbStack_69c;
  undefined4 uStack_698;
  undefined4 auStack_694 [9];
  undefined1 auStack_670 [12];
  undefined4 auStack_664 [24];
  byte abStack_604 [1540];
  
  _DAT_006cc3f8 = DAT_006cc40c + 0x1cc;
  iVar1 = (**(code **)(DAT_006cc410 + 0x60))();
  if (iVar1 == 0) {
    FUN_005cf220(0x16,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x777,&DAT_006b3f70,
                 0);
    return 0;
  }
  puVar2 = (undefined4 *)FUN_005c9470();
  puVar3 = auStack_664;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_664;
  puVar3 = auStack_694;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_005b2fe0(auStack_670);
  FUN_005c94b0();
  FUN_005b32c0(auStack_694);
  FUN_005b3000(auStack_670);
  FUN_005c9420();
  FUN_005d0ab0(param_2,param_1,abStack_604);
  FUN_005c91e0(param_1);
  pbStack_69c = abStack_604;
  uStack_698 = param_3;
  uStack_6a0 = param_1;
  FUN_005b8cc0(**(undefined4 **)(DAT_006cc420 + 0x48),&uStack_6a0,
               (1 << (abStack_604[0] & 0x1f)) + -1);
  FUN_005c9420();
  iVar1 = (**(code **)(DAT_006cc410 + 100))();
  if (iVar1 == 0) {
    FUN_005cf220(0x17,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x7a7,&DAT_006b3f70,
                 0);
    return 0;
  }
  return 1;
}

